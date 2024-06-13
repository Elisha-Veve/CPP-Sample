//
//  testInput.cpp
//  TLC
//
//  Created by Elisha Amenuveve on 6/13/24.
//

#include "testInput.hpp"
#include "iostream"

using namespace std;

void reverseInput() {
    const int MAX_LENGTH = 256;
    int length = 0;
    char input[MAX_LENGTH];
    
    cout << "Please Enter In the String to be reversed: " << endl;
    char ch;
    while (cin.get(ch) && ch != '\n' && length < MAX_LENGTH - 1) {
        input[length++] = ch;
    }
    input[length] = '\0';
    
    cout << endl << endl << "Your reversed input is: ";
    for(int i = length-1; i >= 0; i--) {
        cout << input[i];
    }
    cout<< endl << endl;
    
}
