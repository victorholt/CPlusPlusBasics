//
//  SimpleClass.h
//  CPlusPlusTuts
//
//  Created by Victor Holt on 2/26/15.
//  Copyright (c) 2015 Victor Holt. All rights reserved.
//
//  Simple class to demonstrate the basics for class structures.

// Ensure we don't have any circular dependency issues.
#ifndef CPlusPlusTuts_SimpleClass_h
#define CPlusPlusTuts_SimpleClass_h

#include "SimpleClass.h"
#include <string>

/**
 *  This is a simple class that stores the first and
 *  last name of a user. We will also have methods that
 *  returns the individual methods as well as the
 *  combined version of the first and last name.
 */
class SimpleClass
{
    // Public methods for our class.
public:
    // Constructor for our class.
    SimpleClass();
    
    // Returns the first name.
    std::string GetFirstName();
    
    // Sets the first name.
    void SetFirstName(std::string firstName);
    
    // Returns the last name.
    std::string GetLastName();
    
    // Sets the last name.
    void SetLastName(std::string lastName);
    
    // Returns the full name.
    std::string GetFullName();
    
    // Private methods for our class.
private:
    // Reference to the first name.
    std::string     firstName;
    
    // Reference to the last name.
    std::string     lastName;
};


#endif
