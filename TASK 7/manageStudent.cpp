#pragma once
#include "stdafx.h"
#ifndef ADDNEWSTUDENT_H
#define ADDNEWSTUDENT_H
#include "manageStudent.h"
#include <stdio.h>
#include <stdlib.h>
#include <iostream>
#include <map>
#include <string>
#include <vector>
using namespace std;
map<int, string>::iterator studentListIterator;
void manageStudent::addNewStudent(int studentNumber, string studentName)
{
	studentList.insert(std::pair<int, string>(studentNumber, studentName));
	std::cout << "The class is size " << studentList.size() << std::endl;
	system("pause");
	system("cls");
}

void manageStudent::printStudentList() {
	if (studentList.empty())
	{
		cout << "list is empty" << endl;
	}
	else
	{
		for (studentListIterator = studentList.begin(); studentListIterator != studentList.end(); studentListIterator++)
		{
			cout << studentListIterator->first;
			cout << ":";
			cout << studentListIterator->second;
			cout << endl;
		}
	}
}

void manageStudent::clearStudentList()
{
	studentList.clear();
}

void manageStudent::removeStudent(int studentNumber)
{
	studentListIterator = studentList.find(studentNumber);
	if (studentListIterator != studentList.end()) 
	{
		studentList.erase(studentListIterator);
		cout << "Student has been deleted!" << endl;
	}
	else
	{
		cout << "Student not found! Returning to main menu!" << endl;
	}
}
#endif