//
//  SimpleClass.cpp
//  CPlusPlusTuts
//
//  Created by Victor Holt on 2/26/15.
//  Copyright (c) 2015 Victor Holt. All rights reserved.
//
//  Simple class to demonstrate the basics for class structures.

#include "SimpleClass.h"

// Constructor for our class.
SimpleClass::SimpleClass()
{
    // Nothing here for now.
}

// Returns the first name.
std::string SimpleClass::GetFirstName()
{
    return firstName;
}

// Sets the first name.
void SimpleClass::SetFirstName(std::string firstName)
{
    this->firstName = firstName;
}

// Returns the last name.
std::string SimpleClass::GetLastName()
{
    return lastName;
}

// Sets the last name.
void SimpleClass::SetLastName(std::string lastName)
{
    this->lastName = lastName;
}

// Returns the full name.
std::string SimpleClass::GetFullName()
{
    return lastName + ", " + firstName;
}
