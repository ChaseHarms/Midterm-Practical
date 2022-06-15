// Midterm Practical.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;


int main()
{
    srand(time(0));
    int value = rand() % 4;

    if (value == 0) {
        cout << "What is 2 * 2?" << endl;
        int ans;
        cin >> ans;
        if (ans == 4) {
            cout << "Correct" << endl;
        }
        else {
            cout << "Incorrect" << endl;
        }
    }
    else if (value == 1) {
        cout << "What the the Capital of the US?" << endl;
        cout << "1: New York" << endl;
        cout << "2: Washington" << endl;
        cout << "3: Washington DC" << endl;
        int ans;
        cin >> ans;
        if (ans == 1) {
            cout << "Incorrect" << endl;
        }
        else if(ans == 2){
            cout << "Incorrect" << endl;
        }
        else if (ans == 3) {
            cout << "Correct" << endl;
        }
        else {
            cout << "Wrong Input, No do overs" << endl;
        }
    }
    else if (value == 2) {
        cout << "Are we in college?" << endl;
        cout << "1: Yes\t2: No" << endl;
        int ans;
        cin >> ans;
        if (ans == 1) {
            cout << "Correct" << endl;
        }
        else {
            cout << "Incorrect" << endl;
        }
    }
    else if (value == 3) {
        cout << "In months, How long is the normal bachelors degree at full sail?" << endl;
        int ans;
        cin >> ans;
        if (ans == 20) {
            cout << "Correct" << endl;
        }
        else {
            cout << "Incorrect" << endl;
        }
    }
    else {
        cout << "Error..." << endl;
    }
}
