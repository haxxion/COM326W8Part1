#pragma once
#include "Person.h"
#include <string>

Person::Person()
{

}

Person::Person(std::string name, std::string email) : name_{ name }, email_{email}
{
}

void Person::SetName(std::string name)
{
	name_ = name;
}
std::string Person::GetName()
{
	return name_;
}

void Person::SetEmail(std::string email)
{
	email_ = email;
}
std::string Person::GetEmail()
{
	return email_;
}