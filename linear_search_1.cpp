# include<iostream>
using namespace std;


void linearSearch(int a[],int n){

	int temp = -1;
	for(int i = 0;i<5;i++){
		if (a[i]==n){
			cout<<"Element found in array position:"<<i+1<<endl;
			temp = 0;
		}
	}
	if(temp==-1){
					cout<<"Element not found in array:"<<endl;
	}
}

int main(){
	
	int arr[5] = {1,22,34,5,7};
	
	cout<<"please enter 5 elements of the array  :"<<endl;
	for(int i = 0;i<5;i++){
cin>>arr[i];
}

	cout<<"please enter an element to search:"<<endl;
	
	int num;
	cin>>num;
	linearSearch(arr,num);
	
	return 0; 
}