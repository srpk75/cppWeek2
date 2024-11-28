#pragma once
#include <iostream>
#include "Profile.h"
#include "User.h"
#include "Page.h"

void Profile::init(User owner)
{
	this->_owner = owner;
	this->_friendList.init();
	this->_page.init();
}

void Profile::clear()
{
	this->_friendList.clear();
	this->_owner.clear();
	this->_page.clearPage();
}

User Profile::getOwner() const
{
	return this->_owner;
}

void Profile::setStatus(const std::string new_status)
{
	this->_page.setStatus(new_status);
}

void Profile::addPostToProfilePage(const std::string post)
{
	this->_page.addLineToPosts(post);
}

void Profile::addFriend(const User friend_to_add)
{
	this->_friendList.add(friend_to_add);
}

std::string Profile::getPage() const
{
	std::string returnString = "";
	returnString.append("Status: ");
	returnString.append(this->_page.getStatus());
	returnString.append("\n");
	returnString.append("*******************\n*******************\n");
	returnString.append(this->_page.getPosts());
	return returnString;	
}

std::string Profile::getFriends() const
{
	std::string returnString = "";
	UserNode* curr;
	curr = this->_friendList.get_first();
	while (curr->get_next() != nullptr) // advance to the last element
	{
		returnString.append(curr->get_data().getUserName());
		returnString.append(", ");
		curr = curr->get_next();
	}
}

std::string Profile::getFriendsWithSameLength() const
{
	std::string returnString = "";
	std::string currName = "";
	UserNode* curr;
	int length = this->_owner.getUserName().length();

	curr = this->_friendList.get_first();
	while (curr->get_next() != nullptr) // advance to the last element
	{
		currName = curr->get_data().getUserName();
		if (currName.length() == length)
		{
			returnString.append(currName);
			returnString.append(", ");
		}
		curr = curr->get_next();
	}
}