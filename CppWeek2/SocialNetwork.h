#pragma once
#include <iostream>
#include "ProfileList.h"
#include "Profile.h"

class SocialNetwork
{
public:
	void init(const std::string networkName, const int minAge);
	void clear();
	std::string getNetworkName() const;
	int getMinAge() const;
	bool addProfile(const Profile profile_to_add);
	std::string getWindowsDevices() const;

private:
	int _minAge;
	std::string _networkName;
	ProfileList _networkMemebers;

};