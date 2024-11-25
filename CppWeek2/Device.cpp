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

void Device::activate()
{
	this->_isActive = true;
}

void Device::deactivate()
{
	this->_isActive = false;
}

unsigned int Device::getID()
{
	return this->_id;
}

DeviceType Device::getType()
{
	return this->_os;
}