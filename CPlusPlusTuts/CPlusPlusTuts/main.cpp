//
//  main.cpp
//  CPlusPlusTuts
//
//  Created by Victor Holt on 2/26/15.
//  Copyright (c) 2015 Victor Holt. All rights reserved.
//
//  Simple class to handle creating

#include <iostream>
#include <string>
#include <map>

using namespace std;

// Include our demos.
#include "SimpleClass.h"

int main(int argc, const char * argv[]) {
    // The list of available demos.
    map<int, string> demos;
    map<int, string>::iterator index;

    int     demoInput   = 0;
    
    demos[1] = "SimpleClass";
    
    // Display the list of demos.
    cout << "Which demo would you like to run?" << endl;
    
    for (index = demos.begin(); index != demos.end(); index++) {
        cout << index->first << ") " << index->second << endl;
    }
    
    cin >> demoInput;
    
    // Choose the demo we wish to run.
    switch (demoInput)
    {
        case 1:
        {
            SimpleClass demoObject;
            
            demoObject.SetFirstName("John");
            demoObject.SetLastName("Doe");
            
            cout << demoObject.GetFullName() << endl;
            
            break;
        }
            
        default:
        {
            cout << "Invalid choice" << endl;
            
            break;
        }
    }
    
    
    return 0;
}
