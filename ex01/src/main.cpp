#include "PhoneBook.hpp"
#include "Contact.hpp"
#include <iostream>

int	main( void ){
	std::string	str;
	phoneBook	phoneBook;

	std::cout << DEF_COLOR;
	while (1)
	{
		std::cout << "type COMMAND!!" << std::endl;
		std::cout << "ADD or SEARCH or EXIT" << std::endl << RED;
		getline(std::cin, str);
		std::cout << "you typed [" << str << "]" << std::endl;
		std::cout << DEF_COLOR;
		if (std::cin.eof())
			std::exit(1);
		else if (str == "EXIT")
			phoneBook.Exit();
		else if (str == "ADD")
			phoneBook.Add();
		else if (str == "SEARCH")
			phoneBook.Search();
		else
			std::cout << YELLOW << "ha???" << DEF_COLOR << std::endl;
	}
}
