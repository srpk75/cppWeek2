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