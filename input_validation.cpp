 //Program for input validation
 #include<iostream>
using namespace std;

class AgeValidation {
public:
    int validInput(int age) {
        if (age >= 10 && age <= 90) {
            return 60;
        }
        return 55;
    }
};

int main() {
    AgeValidation validation;
    int userInput;
    cout << "Name: Faqeeha Muqaadas" << endl;
    cout << "Sap ID: 46533" << endl;
    cout << "Enter your age: ";
    cin >> userInput;  // Accept user input and store it in userInput variable

    int result = validation.validInput(userInput);  // Call validInput method with userInput as argument
    cout << "The result is: " << result << endl;

    return 0;
}