// A program for single dimensional array
# include<iostream>
using namespace std;
int main(){
	int arr[50],num,i;
	cout<<"number of elements:"<<endl;
	cin >> num;
	cout<<"Enter nummber:"<< num << "number storing array:"<<endl;
	for(i=0;i<num;i++){
		cin>>arr[i];
	}
	cout<< "Enter a number stored in array:"<<endl;
	for(i=0;i<num;i++){
		cout<<arr[i]<<"\t";
		return 0;
	}
}
