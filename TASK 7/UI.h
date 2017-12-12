#pragma once

#include "manageStudent.h"
#ifndef MANAGESTUDENT_H
#define MANAGESTUDENT_H
class UI
{
	manageStudent students;

public:
	UI() {};
	void addStudent();
	void clearStudentList();
	void printList();
	void removeStudent();
};

#endif