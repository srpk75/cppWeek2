#pragma once
#include <string>
class Page
{
public:
	void init();
	std::string getPosts() const;
	std::string getStatus() const;

private:
	std::string _status;
	std::string _posts;

};