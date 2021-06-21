
//5/8/2019
//This program is designed to display the pay roll, hours worked, and the employees through their employeee identification numbers.
//This program usses arrays and loops in order to get the payroll from the user. The user is dealing with 7 employees with their own unique ID numbers.

#include <iostream>
#include <iomanip>
#include <cmath>
#include <string>
using namespace std;

int main()
{
	const int empId = 7;					//Employee ID numbers
	long int employees[empId] =
	{ 5658845, 4520125, 7895122, 8777541,
	8451277, 1302850,
	7580489
	};

	double payRate[empId];				//Variables used in the program to help with
	int hours[empId];					//defining hours and payrate.

	const int minimum_number = 15.00;   //Used as a reference variable for the number check for 15. Whether it be hours or pay rate.

	cout << "Hello! Welcome to your payroll program, please answer the" << endl;			//Intro message for program
	cout << "following questions below to get your employee wages. Remeber," << endl;
	cout << "Please do not enter a number below 15 for either pay rate or hours!" << endl;
	cout << endl;																			//Space added here



	for (int num_employee = 0; num_employee < empId; num_employee++)					//First "for loop," this checks for the ammount of hours for each employee.
	{
		cout << "Enter the amount of hours worked for employee # " << (num_employee + 1) << ": ID# " << employees[num_employee] << ":";
		//Do-while allows for repetition
		do

		{

			cin >> hours[num_employee];

			if (hours[num_employee] < minimum_number)
			{
				cout << "Please enter in 15 or more hours, this number is to small!" << endl;										//Error check


			}
		} while (hours[num_employee] < minimum_number);

		cout << "Please enter the payrate for employee # " << (num_employee + 1) << ": ID# " << employees[num_employee] << ":";		//Another Do-while here, allows for repetion for payrate

		do

		{
			cin >> payRate[num_employee];

			if (payRate[num_employee] < minimum_number)
			{
				cout << "Enter in a payrate higher than $15.00:" << endl;																//Error check
			}
		} while (payRate[num_employee] < minimum_number);

	}

	cout << "This is the gross pay for employee" << endl;																				//This is where the gross pay is shown for each employee, along
																																		//with their ID number. A for loop is used to solve and repeat each wage for 
	for (int num_employee = 0; num_employee < empId; num_employee++)																//each individual employee
	{

		double total_wage = payRate[num_employee] * hours[num_employee];

		cout << "#" << (num_employee + 1) << ":" << "ID# " << employees[num_employee] << ":$ " << setprecision(2) << fixed << total_wage << endl;

	}

	cout << endl;															//goodbye message
	cout << "Thank you for using the program, good-bye!" << endl;


	system("pause");												//Pauses the program for the user to look at the data
	return 0;


}