
#include<iostream>
using namespace std;

class Inherit{
	//private:
	public:
		int num1;
	protected:
		int num2;
	public:
		int num3;
		void accept(){
			cout<<"Enter num 1:"<<endl;
			cin>> num1;
			cout<<"Enter num2:"<<endl;
			cin>>num2;
			cout<<"Enter num3:"<<endl;
			cin>>num3;
		}	
		// Null constructor
		Inherit(){
			num1 = 0;
			num2 = 0;
			num3 = 0;
		}		
		// Parameterized constructor
		Inherit(int num1, int num2, int num3){
			this->num1 = num1;
			this->num2 = num2;
			this->num3 = num3;
		}   
};

class Ada : public Inherit {
//	private:
		int sum;
	public:
		void setNum1(int num1){
			num1 = num1;
		}	
		void setNum2(int num2){
			num2 = num2;
		}
		void setNum3(int num3){
			num3 = num3;
		}
		int getnum1(){
			return num1;
		}
		int getnum2(){
			return num2;
		}
		int getnum3(){
			return num3;
		}
		void add(){
			sum = num1 + num2 + num3;
		}
		void show(){
			cout<<"Addition of three numbers: "<<sum<<endl;
		}
};

int main(){
	Ada a;
	a.accept();
	a.add();
	a.show();
	return 0;
}
