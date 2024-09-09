//SimpleContact.h
//Author
//Class
//Date
//Explanation

#include <iostream>
#include "SimpleContact.h"

SimpleContact::SimpleContact (const std::string &name, const std::string& phone) 
    : m_name (name), m_phone (phone) //equal to m_name = name and m_phone = phone -> 
    //skips process of making memory and giving it a default value then overriding it
{
}
std::string
SimpleContact::getName () const
{
    return m_name;
}

std::string
SimpleContact::getPhone () const
{
    return m_phone;
}

void
SimpleContact::setPhone (const std::string & name)
{
    m_name = name;
}

void
SimpleContact::setPhone (const std::string & phone)
{
    m_name = phone;
}
