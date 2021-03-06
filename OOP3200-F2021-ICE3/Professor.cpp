/**
 * Project OOP3200-F2021_ICE3
 * @author Sonadi Kannangara
 * Last Modified Date  30 September 2021
 * @version 1.0
 */

#include "Professor.h"

#include <iostream>
#include <utility>

/**
 * Professor implementation
 */

 // Class definition section
/*
 * @param first_name
 * @param last_name
 * @param age
 * @param employee_id
 */
Professor::Professor(const std::string& first_name, const std::string& last_name, const float age, std::string
                     employee_id)
	: Person(first_name, last_name, age), m_employeeID(std::move(employee_id))
{
}

/**
 * @return string
 */
std::string Professor::getEmployeeID() const
{
    return m_employeeID;
}

/*
 * @param value
 */
void Professor::setEmployeeID(const std::string& value)
{
    m_employeeID = value;
}

/*
 * @return void
 */
void Professor::Teaches() const
{
    std::cout << getFirstName() << " is teaching!" << std::endl;
}

/**
 * @return string
 */
std::string Professor::ToString()
{
    std::string output_string;
    //Outbut Banner
    output_string += Person::ToString();
    output_string += "------------------------------------------------\n";
    output_string += "Employee ID: " + getEmployeeID() + "\n";
    output_string += "------------------------------------------------\n";

    return output_string;
}