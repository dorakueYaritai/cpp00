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

	std::cout << "\033[30m";
	while (1)
	{
		std::cout << "type COMMAND!!" << std::endl;
		std::cout << "ADD or SEARCH or EXIT" << std::endl << RED;
		std::cin >> str;
		std::cout << "you typed [" << str << "]" << std::endl;
		std::cout << BLACK;
		if (std::cin.eof() || str == "EXIT")
			break ; 
		else if (str == "ADD")
			phoneBook.Add();
		else if (str == "SEARCH")
			phoneBook.Search();
		else
			std::cout << YELLOW << "ha???" << BLACK << std::endl;
	}
}