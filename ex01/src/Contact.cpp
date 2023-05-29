#include "Contact.hpp"

Contact::Contact( void ){
}

Contact::~Contact( void ){
}

static bool isNumber(const std::string& str)
{
	for (std::string::const_iterator it = str.begin(); it != str.end(); ++it) {
		char const &c = *it;
		if (std::isdigit(c) == 0)
			return false;
	}
    return true;
}

void	Contact::setAll( void ){
	std::string str;

	while (1){
		std::cout << "please in your FirstName " << std::endl;
		getline(std::cin, str);
		if (std::cin.eof())
			std::exit(1);
		if (str.size())
			break ;
	}
	this->setFirstName(str);

	while (1){
		std::cout << "please in your LastName " << std::endl;
		getline(std::cin, str);
		if (std::cin.eof())
			std::exit(1);
		if (str.size())
			break ;
	}
	this->setLastName(str);

	while (1){
		std::cout << "please in your NickName " << std::endl;
		getline(std::cin, str);
		if (std::cin.eof())
			std::exit(1);
		if (str.size())
			break ;
	}
	this->setNickName(str);

	while (1)
	{
		std::cout << "please in your PhoneNumber " << std::endl;
		getline(std::cin, str);
		if (std::cin.eof())
			std::exit(1);
		if (str.size() && isNumber(str))
			break;
		std::cout << "Not charactor, NUMBER PLEASE! " << std::endl;
	}
	this->setPhoneNumber(str);

	while (1){
		std::cout << "please in your DarkestSecret " << std::endl;
		getline(std::cin, str);
		if (std::cin.eof())
			std::exit(1);
		if (str.size())
			break ;
	}
	this->setDarkestSecret(str);
}

void	Contact::displayAllContent(void){
	std::cout << BLUE;
	std::cout << "FirstName is:" << this->getFirstName() << std::endl;
	std::cout << "LastName is:" << this->getLastName() << std::endl;
	std::cout << "NickName is:" << this->getNickName() << std::endl;
	std::cout << "PhoneNumber is:" << this->getPhoneNumber() << std::endl;
	std::cout << "DarkestSecret is:" << this->getDarkestSecret() << std::endl;
	std::cout << DEF_COLOR;
}

void	Contact::setFirstName(std::string firstName){
	this->firstName = firstName;
}

void	Contact::setLastName(std::string lastName){
	this->lastName = lastName;
}

void	Contact::setNickName(std::string nickName){
	this->nickName = nickName;
}

void	Contact::setPhoneNumber(std::string phoneNumber){
	this->phoneNumber = phoneNumber;
}

void	Contact::setDarkestSecret(std::string darkestSecret){
	this->darkestSecret = darkestSecret;
}

std::string	Contact::getFirstName( void ){
	return (this->firstName);
}

std::string	Contact::getLastName( void ){
	return (this->lastName);
}

std::string	Contact::getNickName( void ){
	return (this->nickName);
}

std::string	Contact::getDarkestSecret( void ){
	return (this->darkestSecret);
}

std::string	Contact::getPhoneNumber( void ){
	return (this->phoneNumber);
}
