#include <iostream>
#include <string>
using namespace std;

string input;

int main() {
    cout << "Hi there! Please type anything other than that one sentence!" << "\n";
    cin >> input;

    if (input == "uhhh"|| input == "uhh"|| input == "uh") {
        cout << "is there smth wrong?";
    } else {
        cout << "Meow!! :33" << '\n';
    }

    while (input == "I don't like this" || input == "I hate this") {
        cout << "Oh you gotta" << '\n';
    }

    return 0;
}