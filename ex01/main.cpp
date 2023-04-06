#include "PhoneBook.hpp"
#include "Contact.hpp"
#include <iostream>

int	main( void ){
	std::string	str;
	phoneBook	phoneBook;

	std::cout << "\033[30m";
	while (1)
	{
		std::cout << "type COMMAND!!" << std::endl;
		std::cout << "ADD or SEARCH or EXIT" << std::endl;
		std::cin >> str;
		if (str == "ADD")
			phoneBook.Add();
		else if (str == "SEARCH")
			phoneBook.Search();
		else if (str == "EXIT")
			break ;
		else
			std::cout << "ha???" << std::endl;
	}
}
