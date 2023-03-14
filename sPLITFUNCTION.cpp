#include<iostream>
#include<fstream>
#include <bits/stdc++.h>
using namespace std;
struct student{
	string name;
	int rollnumber;
	string department;
	float cgpa;
};
   student S1;

void Adddetails()
{	
    system("cls");
	cout<<"\nENTER THE NAME: ";
	cin>>S1.name;
	cout<<"ENTER THE ROLLNUMBER: ";
	cin>>S1.rollnumber;
	cout<<"ENTER THE DEPARTMENT: "; 
	cin>>S1.department;     
	cout<<"ENTER THE CGPA: ";  
	cin>>S1.cgpa; 
	fstream studentdetails;
	studentdetails.open("studentdetails.txt",ios :: app);
	if (!studentdetails) {                            
      cout<<" Error while creating the file ";          
    }
    else
	{  
	         
         	 studentdetails<<S1.name;
         	 studentdetails<<"\t "<<S1.rollnumber;
         	 studentdetails<<"\t "<<S1.department;
	         studentdetails<<"\t "<<S1.cgpa;
	         studentdetails<<"\n-------------------\n";
	         studentdetails.close(); 
	}
}
void displayingdata ()
{
	cout<<"DETAILS OF THE STUDENTS ARE:"<<endl;
	fstream studentdetails;
	studentdetails.open("studentdetails.txt", ios::in );
    string line;
    stringstream ss(line); 
    cout<<"============================\n";
    while (getline(studentdetails, line, ' ')) {
    cout <<line<<endl; 
}
    studentdetails.close(); 
}

int main()
{
	int choice;
		do{
	cout<<"\n============ STUDENT PORTAL ============\n";
	
	cout<<"1. ADD DETAILS OF STUDENT \n"; 
	cout<<"2. READ ALL STUDENTS DATA \n";
	cout<<"3. EXIT FROM THE SYSTEM \n";
	cout<<"Select an option: ";
	cin>>choice;
	
	switch(choice){
		case 1:
			system("CLS");
		    Adddetails();	
			break;
		case 2 : 
		   system("CLS");
		   displayingdata();
			break;
		case 3:
			system("cls");
			cout<<"\nThank You ! \n";
			break;
		default:
			cout<<"Enter a valid option";
		}
	}while(choice < 3);

	return 0;
}     
