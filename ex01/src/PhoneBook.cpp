// Path: ex01/src/PhoneBook.cpp
#include "PhoneBook.hpp"

PhoneBook::PhoneBook()
{
}

PhoneBook::~PhoneBook()
{
}

void	PhoneBook::addContact(Contact contact)
{
	this->contacts[this->contactCount] = contact;
	this->contactCount++;
}

void	PhoneBook::displayAllContacts()
{
	for (int i = 0; i < this->contactCount; i++)
	{
		std::cout << i << std::endl;
	}
}

