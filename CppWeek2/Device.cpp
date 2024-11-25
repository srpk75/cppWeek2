#include "Device.h"
#include <iostream>
#include <string>

std::string Device::getOS() const
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

unsigned int Device::getID() const
{
	return this->_id;
}

DeviceType Device::getType() const
{
	return this->_type;
}

void Device::init(const unsigned int id, const DeviceType type, const std::string os)
{
	this->_id = id;
	this->_type = type;
	this->_os = os;
	this->_isActive = true;
}