# include<iostream>
using namespace std;
void swapString(string &a,string &b){
	string c = a;
    a = b;
	b = c;
}

int main(){
	
	string firstLine = "my name";
	string secondLine = "faqeeha";
	
	//Before swap
	cout<<"Before swap:"<<endl;
	cout<<firstLine<<secondLine<<endl;
	//Call function
	swapString(firstLine,secondLine);
	//After swap
	cout<<"After swap:"<<endl;
	cout<<firstLine<<secondLine<<endl;
	return 0;
	
	
}