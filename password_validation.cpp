// Pin validation
#include<iostream>
#include<string>
using namespace std;

class PinCheck {
public:
    bool validateInput(const string& pin) {
        bool hasUpperCase = false;
        bool hasLowerCase = false;
        bool hasDigits = false;
        for (char c : pin) {
            if (isupper(c)) {
                hasUpperCase = true;
            }
            else if (islower(c)) {
                hasLowerCase = true;
            }
            else if (isdigit(c)) {
                hasDigits = true;
            }
        }
        if (pin.length() >= 8 && hasLowerCase && hasDigits) {
            return true;
        }
        return false;
    }
};

int main() {
    cout << "Name: Faqeeha Muqadas" << endl;
    cout << "Sap ID: 46533" << endl;
    PinCheck check;
    string userInput;
    cout << "Enter a pin (at least 8 characters including uppercase, lowercase, and digits):" << endl;
    getline(cin, userInput);  // Read the entire line of input, including whitespaces

    if (check.validateInput(userInput)) {
        cout << "Valid pin." << endl;
    }
    else {
        cout << "Invalid pin." << endl;
    }

    return 0;
}