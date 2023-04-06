#ifndef CONTACT_HPP
#define CONTACT_HPP

#include <string>
#include <iostream>
#include <iomanip>

#define PHONE_NUM_DIGIT 9

// 多くね？
// set って一つ一つの方が良いのか。それとも一括セッターでいいのか
// 要件定義による？

class Contact {
	public:
		Contact( void );
		~Contact( void );
		void	setAll(void);
		void	displayAllContent(void);
		void	setFirstName(std::string firstName);
		void	setLastName(std::string lastName);
		void	setNickName(std::string nickName);
		void	setPhoneNumber(std::string phoneNumber);
		void	setDarkestSecret(std::string darkestSecret);
		std::string	getFirstName(void);
		std::string	getLastName(void);
		std::string	getNickName(void);
		std::string	getPhoneNumber(void);
		std::string	getDarkestSecret(void);
	private:
		std::string	firstName;
		std::string	lastName;
		std::string	nickName;
		std::string	phoneNumber;
		std::string	darkestSecret;
};

#endif
