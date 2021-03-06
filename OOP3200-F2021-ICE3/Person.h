/**
 * Project OOP3200-F2021_ICE3
 * @author Sonadi Kannangara
 * @version 1.0
 */

#pragma once
#include <string>

#ifndef _PERSON_H
#define _PERSON_H

// Class declaration section.
class Person {
public: 
    
/*
 * @param first_name
 * @param last_name
 * @param age
 */
Person(std::string first_name, std::string last_name, float age);
    
float getAge() const;
    
/*
 * @param value
 */
void setAge(float value);

std::string  getFirstName() const;
    
/*
 * @param value
 */
void setFirstName(const std::string& value);

std::string getLastName() const;
    
/*
 * @param value
 */
void setLastName(const std::string& value);
    
void SaysHello() const;

virtual std::string ToString();
private: 
    float m_age;
	std::string  m_firstName;
	std::string m_lastName;

};

#endif //_PERSON_H