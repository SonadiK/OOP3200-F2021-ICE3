/**
 * Project OOP3200-F2021_ICE3
 * @author Sonadi Kannangara
 * @version 1.0
 */


#ifndef _PERSON_H
#define _PERSON_H

class Person {
public: 
    
/**
 * @param first_name
 * @param last_name
 * @param age
 */
void Person(string first_name, string last_name, float age);
    
float getAge();
    
/**
 * @param value
 */
void setAge(float value);
    
string  getFirstName();
    
/**
 * @param value
 */
void setFirstName(string  value);
    
string getLastName();
    
/**
 * @param value
 */
void setLastName(string value);
    
void SaysHello();
    
string ToString();
private: 
    float m_age;
    string  m_firstName;
    string m_lastName;
};

#endif //_PERSON_H