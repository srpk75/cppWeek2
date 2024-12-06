#pragma once
#include <string>
#include "DeviceList.h"

class User
{
public:
	void init(const unsigned int id, const std::string username, const unsigned int age);
	void clear();
	unsigned int getID() const;
	std::string getUserName() const;
	unsigned int getAge() const;
	const DevicesList& getDevices() const;
	void addDevice(const Device newDevice);
	bool checkIfDevicesAreOn() const;

private:
	int _id;
	std::string _username;
	int _age;
	DevicesList _devices;
};
