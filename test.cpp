#include <iostream>
#include <cmath>
#include <vector>

using namespace std;

string name;
string response;

int main (){
    cout << "What's your name?" << '\n';
    cin >> name;
    cout << name << ", is this correct?" << '\n';
    cin >> response;

    while (response == "no"|| response == "no"){
        cout << "Apologies for showing the name wrong, please enter your name correctly..." << '\n';
        cin >> name;
        cout << name << ", is this correct?" << '\n';
        cin >> response;
    }
    if (response == "yes"|| response == "Yes"){
        cout << "Hello," << name << "!" << '\n';
    }
    else {
        cout << "Invalid input! Please only enter 'yes', 'Yes', 'no', 'No'" << '\n';
    }
    cout << '\n';
    
    return 0;
}