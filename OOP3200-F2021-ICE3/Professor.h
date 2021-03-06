/**
 * Project OOP3200-F2021_ICE3
 * @author Sonadi Kannangara
 * Last Modified Date  30 September 2021
 * @version 1.0
 */

#pragma once
#include <string>
#ifndef _PROFESSOR_H
#define _PROFESSOR_H

#include "Person.h"

 // Class declaration section.
class Professor: public Person {
public: 
    
/*
 * @param first_name
 * @param last_name
 * @param age
 * @param employee_id
 */
Professor(const std::string& first_name, const std::string& last_name, float age, std::string employee_id);

std::string getEmployeeID() const;
    
/*
 * @param value
 */
void setEmployeeID(const std::string& value);
    
void Teaches() const;

std::string ToString() override;
private:
std::string m_employeeID;
};

#endif //_PROFESSOR_H