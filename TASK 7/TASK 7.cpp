// TASK 7.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "manageStudent.h"
#include "UI.h"
#include <iostream>
#include <cstdio>
#include <string>
using namespace std;
void menu();
UI ui;
//void removeStudent();
int main()
{
	menu();
	return 0;
}

void menu()
{
	int input;
	cout << "1. Add new student" << endl;
	cout << "2. Remove a student" << endl;
	cout << "3. Print student list" << endl;
	cout << "4. Clear the class list" << endl;
	cin >> input;
	switch (input)
	{
	case 1: ui.addStudent();
		menu();
		break;
	case 2: ui.removeStudent();
		menu();
		break;
	case 3: ui.printList();
		menu();
		break;
	case 4: ui.clearStudentList();
		menu();
		break;
	}
}