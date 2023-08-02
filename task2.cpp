#ifndef CLIENTDATA_H
#define CLIENTDATA_H
#include <string>

//Class ClientData definition used in Fig. 14.10–Fig. 14.13. (Part 1 of 2.)
//Creating a Random-Access File 671

class ClientData {
public:
// default ClientData constructor
ClientData(int = 0, const std::string& = "",
const std::string& = "", double = 0.0);
// accessor functions for accountNumber
void setAccountNumber(int);
int getAccountNumber() const;

// accessor functions for lastName
void setLastName(const std::string&);
std::string getLastName() const;

// accessor functions for firstName
void setFirstName(const std::string&);
std::string getFirstName() const;

 // accessor functions for balance
void setBalance(double);
double getBalance() const;
private:
int accountNumber;
char lastName[15];
char firstName[10];
double balance;
 }; 
 
 #endif