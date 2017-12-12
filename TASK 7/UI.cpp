#include "stdafx.h"
#include "UI.h"
#include <stdio.h>
#include <stdlib.h>
#include <iostream>
#include <string>
#ifndef UI_H
#define UI_H
using namespace std;

void UI::addStudent()
{
	int id;
	string ids;
	string name;
	cout << "Enter student ID and student name" << endl;
	getline(cin, ids);
	getline(cin, ids);
	cout << "ID entered is " << atoi(ids.c_str()) << endl;
	cin.clear();
	fflush(stdin);
	getline(cin ,name);
	cout << "Student name entered is " << name << endl;
	students.addNewStudent(atoi(ids.c_str()), name);
	//system("pause");
}

void UI::clearStudentList()
{
	char getInput;
	cout << "Are you sure you want to clear the list?" << endl;
	cin >> getInput;
if (getInput == 'y' || getInput == 'Y')
{
	students.clearStudentList();
	cout << "returning to main menu!" << endl;
	system("pause");
	system("cls");
}
else if (getInput == 'n' || getInput == 'N')
{
	cout << "Student list will not be cleared! returning to main menu!" << endl;
	system("cls");
}
else
{
	cout << "Wrong character input! returning to main menu!" << endl;
	system("cls");
}
}

void UI::printList()
{
	students.printStudentList();
	system("pause");
	system("cls");
}

void UI::removeStudent()
{
	int id;
	cout << "Please enter the id you wish to delete: " << endl;
	cin >> id;
	students.removeStudent(id);
	system("pause");
	system("cls");
}
#endif