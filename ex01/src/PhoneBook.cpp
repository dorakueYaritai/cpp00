// Path: ex01/src/PhoneBook.cpp
#include "PhoneBook.hpp"

phoneBook::phoneBook( void ){
	this->contactCount = 0;
	this->nowContactIndex = 0;
}

phoneBook::~phoneBook( void ){
}

// local 大丈夫、、、？
void	phoneBook::Add( void )
{
	this->ContactArray[this->nowContactIndex].setAll();
	++this->nowContactIndex %= CONTACT_MAX;
	if (this->contactCount < CONTACT_MAX)
		this->contactCount++;
}

void	phoneBook::Search( void ){
	int	key_index;

	this->DesplayAllContact();
	std::cout << "What person infomation do you want know?" << std::endl;
	std::cout << "Tell me by INDEX" << std::endl;
	while (1)
	{
		std::cin >> key_index;
		if (key_index < 0 && key_index >= this->contactCount)
			std::cout << "Are you kidding me..?" << std::endl;
		else
			break ;
	}
	this->ContactArray[key_index].displayAllContent();
}

#define PRINT_WIDTH 10
#define COLOR_FLAME GREEN
#define COLOR_CONTENT BLUE

void	printFormat(std::string str){
	// std::cout <<"|";
	std::cout << COLOR_FLAME << "|" << BLACK;

	std::ios::fmtflags flagsSaved = std::cout.flags();
	char fillSaved = std::cout.fill(' ');
	std::cout.setf(std::ios::right, std::ios::adjustfield);
	if (str.length() > PRINT_WIDTH)
		std::cout << COLOR_CONTENT << str.substr(0, PRINT_WIDTH - 1) << '.' << BLACK;
	else
		std::cout << COLOR_CONTENT << std::setw(PRINT_WIDTH) << str << BLACK;
	std::cout.flags(flagsSaved);
	std::cout.fill(fillSaved);
}

void	phoneBook::DesplayAllContact( void ){
	Contact	Contact;

	int	i = 0;
	std::cout << COLOR_FLAME << "|===========================================|" << BLACK << std::endl;
	std::cout << COLOR_FLAME << "|     index| firstname|  lastname|  nickname|" << BLACK << std::endl;

	while (i < this->contactCount){
		std::cout << COLOR_FLAME << "|===========================================|" << BLACK << std::endl;
		Contact = this->ContactArray[i];
		std::cout << COLOR_FLAME << "|" ;
		std::cout << COLOR_CONTENT << std::setw(PRINT_WIDTH) << i;
		std::cout << BLACK;
		printFormat(Contact.getFirstName());
		printFormat(Contact.getLastName());
		printFormat(Contact.getNickName());
		std::cout << COLOR_FLAME << "|" << BLACK << std::endl;
		i++;
	}
	std::cout << COLOR_FLAME << "|===========================================|" << BLACK << std::endl;
}

// point 2
// print mutex を建てる
// get_time_of_day と print を 不可分に行う
// 
