// class representing employee details
# include<iostream>
using namespace std;
class Employee{
	private:
	int empid;// Data members
	string empname;
	float empsalary;
	public:
		int emp_details(){
			empid = 123;
			empname = "faqeeha";
			empsalary = 2500.0;
		}
	show (){
		cout<<"Employee id:"<< empid<<endl;
		cout<<"Employee name:"<<empname<<endl;
		cout<<"Employee salary:"<<empsalary<<endl;
	}
};
int main(){
	Employee A;
	A.emp_details();
	A.show ();
	return 0;
}
