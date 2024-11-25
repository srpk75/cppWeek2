#include "Device.h"
#include <iostream>
#include <string>

std::string Device::getOS()
{
	return this->_os;
}

bool Device::isActive() const
{
	return this->_isActive;
}