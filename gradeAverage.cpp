/**
 * Description: Program that gets student information and calculates academic grades average
 * Name: Luciana Seljak
 */

#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

int main ()
{
    // Student academic and personal information variables

	string name; 
	string email; 
	double firstgrade;
	double secondgrade;
	double thirdgrade;

	cout << "Please input the student name: ";
	getline(cin, name);

	cout << "Enter your email address: ";
	getline(cin, email);

	cout << "Please input the first grade: ";
	cin >> firstgrade;

	cout << "Please input the second grade: ";
	cin >> secondgrade;

	cout << "Please input the third grade: ";
	cin >> thirdgrade;
	
	// Output student information and average of the three test scores

	cout << endl;
	cout << "Student name: " << name << endl;
	cout << "Student email address: " << email << endl;

	double average = (firstgrade + secondgrade + thirdgrade) / 3;

	// Answer stored in fixed point notation with two decimal points
	
	cout << "The average of the three grades is " << setprecision(2) << fixed << average << endl;
	cout << endl;
	return 0;
}
