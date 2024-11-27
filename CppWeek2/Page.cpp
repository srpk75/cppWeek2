#include <iostream>
#include <string>
#include "Page.h"

void Page::init()
{
	this->_posts = "";
	this->_status = "";

}

std::string Page::getPosts() const
{
	return this->_posts;
}

std::string Page::getStatus() const
{
	return this->_status;
}