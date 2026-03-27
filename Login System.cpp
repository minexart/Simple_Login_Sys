//
//  Login System.cpp
//  Personal Projects
//
//  Created by Aminat Olaide Damilola on 27/03/2026.
//

#include <iostream>
using namespace std;

int main() {
    
    string correctUsername = "admin";
    string correctPassword = "1234";
    
    string inputUsername, inputPassword;
    int attempts = 3;
    
    while (attempts > 0) {
        
        cout << "\nEnter username: ";
        cin >> inputUsername;
        
        
        cout << "Enter password: ";
        cin >> inputPassword;
        
        if (inputUsername == correctUsername && inputPassword == correctPassword) {
            cout << "Login successful!\n";
            break;
        }
        else {
            attempts--;
            cout << "Wrong details. Attempts left: " << attempts << endl ;
        }
        
    }
    if (attempts == 0) {
        cout << "Account locked.\n";
    }

    
    
    
    return 0;
}
