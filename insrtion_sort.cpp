# include<iostream>
using namespace std;

void insertionSort(int arr[]){
	int j = 0;
	int key ;
	for(int i=1;i<5;i++)
	{
	int key = arr[i];//picking the elements
	int j = i-1;
	while(j>=0 && arr[j]>key){
		arr[j+1] =arr [j];
		j = j-1;
	}	
	arr[j+1] = key;
	}



}

int main(){
int myarr[5];
cout<<"Enter 5 numbers in any order:"<<endl;
for(int i=0;i<5;i++){
	cin>>myarr[i];
}	

cout<<" Before sorting:"<<endl;
for(int i=0;i<5;i++){
	cout<<myarr[i]<<" ";
}	
	insertionSort(myarr);
	cout<<" "<<endl;
cout<<" After sorting:"<<endl;
for(int i=0;i<5;i++){
	cout<<myarr[i]<<" ";
}	
}