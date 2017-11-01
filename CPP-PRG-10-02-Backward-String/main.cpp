//
//  main.cpp
//  CPP-PRG-10-02-Backward-String
//
//  Created by Keith Smith on 11/1/17.
//  Copyright © 2017 Keith Smith. All rights reserved.
//
//  Write a function that accepts a pointer to a C-string as an argument and displays its
//  contents backwards. For instance, if the string argument is "Gravity" the function
//  should display "ytivarG". Demonstrate the function in a program that asks the user
//  to input a string then passes it to the function.

#include <iostream>

using namespace std;

string *getString();
string *reverseString(string *);
void swap(char *, char *);
void displayString(string *);

int main()
{
    string *strString = nullptr;
    
    strString = getString();
    
    strString = reverseString(strString);
    
    displayString(strString);
    
    return 0;
}

string *getString()
{
    string *strStr = nullptr;
    
    strStr = new string;
    
    cout << "Please enter a string to reverse:\n";
    getline(cin, *strStr);
    
    return strStr;
}

string *reverseString(string *strStr)
{
    for(int i = 0 ; i < strStr->length() / 2 ; i++)
    {
        swap(strStr->at(i), strStr->at(strStr->length() - i - 1));
    }
    
    return strStr;
}

void displayString(string *strStr)
{
    cout << "That string reversed is:\n" << *strStr << endl;
}

void swap(char *chrA, char *chrB)
{
    char *chrTemp = nullptr;
    
    chrTemp = new char;
    
    chrTemp = chrA;
    chrA = chrB;
    chrB = chrTemp;
}
