//A program that accepts and displays a set of numbers 
# include<iostream>
using namespace std;
int main(){
	int *p,i;
	p  = new int[5];
	cout<<"Enter five numbers:"<<endl;
	for(i = 0;i<=4;i++){
		cout<<" "<<endl;
		cin >> *(p+i);
	}
	cout<<"the entered number is:"<<endl;
	for(i=0;i<=4;i++){
		cout<<" "<<endl;
		cout<<*(p+i)<<"";
	}
	return 0;
}
