# ifndef PHONE_BOOK_HPP
#define PHONE_BOOK_HPP

#include "Contact.hpp"
#define CONTACT_MAX 8

class phoneBook {
	public:
		phoneBook( void );
		~phoneBook( void );
		void	Add( void );
		void	Search( void );
		void	Exit( void );
		void	DesplayAllContact(void);
	private:
		Contact	ContactArray[CONTACT_MAX];
		int		contactCount;
		int		nowContactIndex;
};

# endif
