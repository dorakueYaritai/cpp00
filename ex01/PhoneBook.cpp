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

void	printFormat(std::string str){
	std::cout <<"|";
	std::cout << std::setw(10) << str;
	if (str.size() >= 10)
		std::cout << ".";
}

void	phoneBook::DesplayAllContact( void ){
	Contact	Contact;

	int	i = 0;
	std::cout << "|     index| firstname|  lastname|  nickname|" << std::endl;

	std::cout << "\033[32;1m";
	while (i < this->contactCount){
		Contact = this->ContactArray[i];
		std::cout <<"|         " << i;
		printFormat(Contact.getFirstName());
		printFormat(Contact.getLastName());
		printFormat(Contact.getNickName());
		std::cout << std::endl;
		i++;
	}
	std::cout << "\033[30m";
}

// point 2
// print mutex を建てる
// get_time_of_day と print を 不可分に行う
// 
