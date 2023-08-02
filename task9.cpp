
#include <iostream>
#include <iomanip>
#include <fstream>
#include <cstdlib>
#include "task9.h" // ClientData class definition
using namespace std;

 void outputLine(ostream&, const ClientData&); // prototype

int main() {

ifstream inCredit{"credit.dat", ios::in | ios::binary};

// exit program if ifstream cannot open file
 if ( !inCredit) {
 cerr << "File could not be opened." << endl;
 exit(EXIT_FAILURE);
 }

 // output column heads
 cout << left << setw(10) << "Account" << setw(16) << "Last Name"
 << setw(11) << "First Name" << setw(10) << right << "Balance\n";

 ClientData client; // create record

 // read first record from file


 // read all records from file
 while (inCredit) {
 // display record
 if (client.getAccountNumber() != 0) {
 outputLine(cout, client);
 }

 // read next from file

 }
 }

 // display single record
 void outputLine(ostream& output, const ClientData& record) {
 output << left << setw(10) << record.getAccountNumber()
 << setw(16) << record.getLastName()
 << setw(11) << record.getFirstName()
 << setw(10) << setprecision(2) << right << fixed
 << showpoint << record.getBalance() << endl;
 } 
