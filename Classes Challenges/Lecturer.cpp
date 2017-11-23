#include <string>
#pragma once
#include <vector>
#include <iostream>
#include "Lecturer.h"

Lecturer::Lecturer()
{
	std::cout << "\nLecturer constructed";
}

Lecturer::~Lecturer() {}

Lecturer::Lecturer(std::string name, std::string email, std::string staffID, std::string subjectArea) : Person{ name, email }, staffID_{ staffID }, subjectArea_{ subjectArea }
{
	std::cout << "\nLecturer constructed!";
}