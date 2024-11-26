#include <iostream>
#include <string>
#include "User.h"

void User::init(const unsigned int id, const std::string username, const unsigned int age)
{
	this->_id = id;
	this->_username = username;
	this->_age = age;
}

void User::clear()
{
	//currently nothing to clear
}

unsigned int User::getID() const
{
	return this->_id;
}

std::string User::getUserName() const
{
	return this->_username;
}

unsigned int User::getAge() const
{
	return this->_age;
}

DevicesList& User::getDevices() const
{
	return this->_devices;
}