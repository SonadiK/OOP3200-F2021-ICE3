/**
 * Project OOP3200-F2021_ICE3
 * @author Sonadi Kannangara
 * @studentID  100778336
 * @version 1.0
 * @date   28 September 2021
 *	Last modified date: 30 September 2021
 *	Activity    ICE 3 - In Class Exercise 3
 */


#include "Person.h"

#include <iostream>
#include<string>
/**
 * Person implementation
 */

 // Class definition section
/*
 * @param first_name
 * @param last_name
 * @param age
 */
Person::Person(std::string first_name, std::string last_name, float age)
	:m_age(age), m_firstName(std::move(first_name)), m_lastName(std::move(last_name))
{

}

/**
 * @return float (m_age)
 * 
 */
float Person::getAge() const
{
    return m_age;
}

/*
 * @param value
 */
void Person::setAge(const float value)
{
    m_age = value;
}

/**
 * @return string 
 */
std::string  Person::getFirstName() const
{
    return m_firstName;
}

/*
 * @param value
 */
void Person::setFirstName(const std::string& value)
{
    m_firstName = value;
}

/**
 * @return string
 */
std::string Person::getLastName() const
{
    return m_lastName;
}

/*
 * @param value
 */
void Person::setLastName(const std::string& value)
{
    m_lastName = value;
}

/*
 * @return void
 * take the first name and concatenate to a string.
 */
void Person::SaysHello() const
{
    std::cout << getFirstName() << " says Hello!"<< std::endl;;
}

/*
 * @return string
 */

std::string Person::ToString()
{
    std::string output_string;
    /* Output Banner*/
    output_string += "------------------------------------------------\n";
    output_string += "First Name: " + getFirstName() + "\n";
    output_string += "Last Name:  " + getLastName() + "\n";
    output_string += "Age:        " + std::to_string(getAge()) + "\n";
    output_string += "------------------------------------------------\n";

    return output_string;
}
