#pragma once
#include <string>

class Person
{
private:
	std::string name_;
	std::string email_;

public:

	Person();

	Person(std::string name, std::string email);

	void SetName(std::string name);
	std::string GetName();

	void SetEmail(std::string email);
	std::string GetEmail();
};