#pragma once
#include <stdio.h>
#include <stdlib.h>
#include <iostream>
#include <map>
#include <string>
using namespace std;
class manageStudent
{
private:
	int studentNumber;
	char studentName;
	std::map<int, string> studentList;
public:
	manageStudent() {}
	void addNewStudent(int, string);
	void removeStudent(int);
	void clearStudentList();
	void printStudentList();

};

