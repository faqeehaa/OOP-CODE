// Fig. 14.11: Fig14_11.cpp
// Writing to a random-access file.
#include <iostream>
#include <fstream>
#include <cstdlib>
#include "task5.h" // ClientData class definition
using namespace std;

int main() {
fstream outCredit{"credit.dat", ios::in | ios::out | ios::binary};

 // exit program if fstream cannot open file
 if ( ) {
 cerr << "File could not be opened." << endl;
 exit(EXIT_FAILURE);
 }

cout << "Enter account number (1 to 100, 0 to end input)\n? ";

 int accountNumber;
string lastName;
 string firstName;
double balance;

 cin >> accountNumber; // read account number

 // user enters information, which is copied into file
 while (accountNumber > 0 && accountNumber <= 100) {
 // user enters last name, first name and balance
 cout << "Enter lastname, firstname and balance\n? ";
 cin >> lastName;
 cin >> firstName;
 cin >> balance;

 // create ClientData object
 ClientData client{accountNumber, lastName, firstName, balance};

 // seek position in file of user-specified record




 // write user-specified information in file



// enable user to enter another account
 cout << "Enter account number\n? ";
 cin >> accountNumber;
}
 } 