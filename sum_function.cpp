// A program that reads three variables and pass them to function, calculates and return their sum
# include<iostream>
using namespace std;
int main(){
	int a,b,c,sum;
	int sum_function(int,int,int);
	cout << endl<<"enter three values a,b,c:"<<endl;
	cin>>a>>b>>c;
	sum=sum_function(a,b,c);
	cout<<"sum of three numbers are:"<< sum;
	
}
int sum_function(int a1,int b1,int c1){
	int sum;
	sum= a1+b1+c1;
	return sum;
}
