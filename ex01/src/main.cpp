#include "PhoneBook.hpp"
#include "Contact.hpp"
#include <iostream>

// 
// Q.cin >> string で、コントロールDくるとどうなるか
// A.入力中にコントロールD押すと、一回目では返り値来なくて、二回目で返り値くる
// get_next_line も同じ仕様だよね？

// Q.cin >> int でエラーの場合（入力が整数でない）場合と、0 の入力の判別

// cin >> string って、オーバーロードはどっちが優先されるの？

int	main( void ){
	std::string	str;
	phoneBook	phoneBook;

	std::cout << "DEF_COLOR";
	while (1)
	{
		std::cout << "type COMMAND!!" << std::endl;
		std::cout << "ADD or SEARCH or EXIT" << std::endl << RED;
		std::cin >> str;
		std::cout << "you typed [" << str << "]" << std::endl;
		std::cout << DEF_COLOR;
		if (std::cin.eof())
			std::exit(1);
		else if (std::cin.eof() || str == "EXIT")
			break ; 
		else if (str == "ADD")
			phoneBook.Add();
		else if (str == "SEARCH")
			phoneBook.Search();
		else
			std::cout << YELLOW << "ha???" << DEF_COLOR << std::endl;
	}
}

// int	main(void)
// {
// 	std::string str;

// 	str = "kyosuke";
// 	std::cout << str<< std::endl;
// 	str += " akiba";
// 	std::cout << str<< std::endl;
// 	std::string::const_iterator it = str.begin();
// 	while (it != str.end())
// 	{
// 		char const	&c = *it;
// 		std::cout << c << " :" << (void *)&c << std::endl;
// 		++it;
// 	}
// }
