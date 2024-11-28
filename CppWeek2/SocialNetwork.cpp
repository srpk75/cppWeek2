#pragma once
#include "SocialNetwork.h"
#include <iostream>
#include <string>
#include "ProfileList.h"
#include "Profile.h"

void SocialNetwork::init(const std::string networkName, const int minAge)
{
	this->_minAge = minAge;
	this->_networkName = networkName;
	this->_networkMemebers.init();
}

void SocialNetwork::clear()
{
	this->_networkMemebers.clear();
}

std::string SocialNetwork::getNetworkName() const
{
	return this->_networkName;
}

int SocialNetwork::getMinAge() const
{
	return this->_minAge;
}

bool SocialNetwork::addProfile(const Profile profile_to_add)
{
	if (profile_to_add.getOwner().getAge() < this->_minAge)
	{
		return false;
	}
	this->_networkMemebers.add(profile_to_add);
	return true;
}

std::string SocialNetwork::getWindowDevices() const
{
	std::string returnString = "";
	ProfileNode* currPrf = this->_networkMemebers.get_first();
	DeviceNode* currDvc;

	while (currPrf->get_next() != nullptr)
	{
		currDvc = currPrf->get_data().getOwner().getDevices().get_first();
		while (currDvc->get_next() != nullptr)
		{
			if (currDvc->get_data().getOS() == WINDOWS7 ||
				currDvc->get_data().getOS() == WINDOWS10 ||
				currDvc->get_data().getOS() == WINDOWS11)
			{
				if (returnString != "")
				{
					returnString.append(", ");
				}

				returnString.append("[");
				returnString.append(std::to_string(currDvc->get_data().getID()));
				returnString.append(", ");
				returnString.append(currDvc->get_data().getOS());
				returnString.append("]");
			}
		}
		currPrf = currPrf->get_next();
	}
}


