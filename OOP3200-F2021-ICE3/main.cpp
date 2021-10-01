/*
* Project OOP3200 - F2021_ICE3
* @author Sonadi Kannangara
* @studentID  100778336
* @version 1.0
* @date   28 September 2021
* Last modified date : 30 September 2021
* Activity    ICE 3 - In Class Exercise 3
*/ 

// OOP3200-F2021-ICE3.cpp : This file contains the 'main' function. Program execution begins and ends there.


#include <iostream>

#include "Person.h"
#include "Professor.h"
#include "Student.h"

// Main function.
int main()
{
	// Display person class details
	Person person = Person("Sonadi", "Kannangara", 21.1f);

	person.SaysHello();

	std::cout << person.ToString() << std::endl;

	// Display student class details
	Student student = Student("Mike", "Jones", 22.0f, "MJ123456789");
	student.SaysHello();
	student.Studies();

	std::cout << student.ToString() << std::endl;

	// Display professor class details
	Professor professor = Professor("Tom", "Tsiliopoulos", 38.0f, "TT123456789");
	professor.SaysHello();
	professor.Teaches();

	std::cout << professor.ToString() << std::endl;

}

