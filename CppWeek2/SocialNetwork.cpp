#pragma once
#include "SocialNetwork.h"
#include <iostream>
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


