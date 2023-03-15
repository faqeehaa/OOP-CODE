//A program in which a string copies into other
# include<iostream>
# include<string.h>
# include<stdio.h>
using namespace std;
int main(){
	char str1[50],str2[50];
	cout<<"Enter first string:"<<endl;
	gets(str1);
	strcpy(str2,str1);
	cout<<"second string copied from the first string:"<< str2<<endl;
	return 0;
	
}

