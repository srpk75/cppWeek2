#pragma once
#include <string>
#include "Device.h"

class User
{
public:
	void init(const unsigned int id, const std::string username, const unsigned int age);
	void clear();
	unsigned int getID() const;
	std::string getUserName() const;
	unsigned int getAge() const;

private:
	int _id;
	std::string _username;
	int _age;
	Device _device;
};
