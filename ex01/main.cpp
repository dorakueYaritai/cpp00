// make a class PhoneBook
// The class have an array of contacts
// It can store a maximum of 8 contacts.
// Please note that dynamic allocation is forbidden.

// make a class Contact
// Contact have the following attributes
// first name, last name, nickname, login, postal address, email address, phone number, birthday date, favorite meal, underwear color, darkest secret

// The class have the following methods
// getters and setters for each attributes
// displayContact()
// displayAllContacts()

// displayContact() print all the attributes of the contact
// displayAllContacts() print all the contacts

// The main() function create a PhoneBook object and a Contact object.
// The main() function display a menu with the following options
// ADD
// SEARCH
// EXIT

// ADD
// The main() function ask for each attribute of the Contact object
// The main() function add the Contact object to the PhoneBook object

// SEARCH
// The main() function display all the contacts
// The main() function ask the user to choose a contact to display

// EXIT
// The main() function exit the program

// The main() function should never exit the program.
// The main() function should never have more than 25 lines.

// please write this class

// Path: ex01/src/main.cpp
#include "PhoneBook.hpp"
#include "Contact.hpp"
#include <iostream>

int	main(int argc, char *argv[])
{
	PhoneBook	phoneBook;
	Contact		contact;

	phoneBook.addContact(contact);
	phoneBook.displayAllContacts();
}
