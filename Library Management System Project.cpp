// Library Management System Project.cpp : This file contains the 'main' function. Program execution begins and ends there.
//Raymond

#include <iostream>
using namespace std;

int main(){

	int option;

	do{
		cout << "Main Menu" << endl;
		cout << endl;
		cout << "01. Book Issue" << endl;
		cout << endl;
		cout << "02. Book Deposit" << endl;
		cout << endl;
		cout << "03. Adminstrator Menu" << endl;
		cout << endl;
		cout << "04. Exit" << endl;
		cout << endl;
		cout << "Please Select Your Option (1-4) ";
		cin >> option;
		cout << endl;
	} while (option < 1 || option > 4);
	
}
