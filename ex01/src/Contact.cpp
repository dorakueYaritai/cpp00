#include "Contact.hpp"

Contact::Contact( void ){
}

Contact::~Contact( void ){
}

void	Contact::setAll( void ){
	std::string str;

	std::cout << "please in your FirstName " << std::endl;
	std::cin >> str;
	if (std::cin.eof())
	this->setFirstName(str);

	std::cout << "please in your LastName " << std::endl;
	std::cin >> str;
	if (std::cin.eof())
		exit(1);
	this->setLastName(str);

	std::cout << "please in your NickName " << std::endl;
	std::cin >> str;
	if (std::cin.eof())
		exit(1);
	this->setNickName(str);

	std::cout << "please in your PhoneNumber " << std::endl;
	std::cin >> str;
	if (std::cin.eof())
		exit(1);
	this->setPhoneNumber(str);

	std::cout << "please in your DarkestSecret " << std::endl;
	std::cin >> str;
	if (std::cin.eof())
		exit(1);
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


// ここだけポインタ代入じゃなくて値代入w
// void	Contact::setPhoneNumber(int phoneNumber[PHONE_NUM_DIGIT]){
// 	int	i;

// 	i = 0;
// 	while (i < PHONE_NUM_DIGIT){
// 		this->phoneNumber[i] = phoneNumber[i];
// 		i++;
// 	}
// }

// int	main()
// {
// 	Contact instance;

// 	instance.setAll();
// 	std::cout << instance.getFirstName() << std::endl;
// 	std::cout << instance.getLastName() << std::endl;
// 	std::cout << instance.getNickName() << std::endl;
// 	std::cout << instance.getPhoneNumber() << std::endl;
// 	std::cout << instance.getDarkestSecret() << std::endl;
// 	std::cout << "Thank you" << std::endl;

// }
