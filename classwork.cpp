#include <iostream>// output input library
#include <fstream>// ifstream ofstream library
#include <string>// for string
#include <cstdlib>// This header defines a collection of functions and macros to facilitate efficient, high-performing,
// standardized C++ code across teams and platforms.
using namespace std;
int main() {
    ofstream outFile("accounts.txt", ios::out);

    if (!outFile) {
        cerr << "File could not be opened" << endl;
        exit(EXIT_FAILURE);
    }

    cout << "Enter the account, name, and balance.\n"
              << "Enter end-of-file to end input.\n? ";

    int account;          // the account number
    string name;     // the account owner's name
    double balance;       // the account balance

    while (cin >> account >> name >> balance) {
        outFile << account << ' ' << name << ' ' << balance <<endl;
        cout << "? ";
    }

    outFile.close();

    return 0;
}