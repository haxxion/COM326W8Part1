#pragma once
#include <string>
#include <vector>
#include "Person.h"

class Lecturer : public Person
{

private:
	std::string staffID_;
	std::string subjectArea_;

public:
	Lecturer();

	~Lecturer();

	Lecturer(std::string name, std::string email, std::string staffID, std::string subjectArea);

	void SetStaffID(std::string staffID);
	std::string GetStaffID();

	void SetSubjectArea(std::string subjectArea);
	std::string GetSubjectArea();

};