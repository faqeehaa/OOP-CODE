// 2D array
# include<iostream>
using namespace std;
int main(){
	int arr[6] [7]={{0,1,2,3,4,5,},{6,7,8,9,1,2,3}};

	cout<<"arrays representing rows and columns:"<<endl;
	for(int i=0; i<7; i++){
	for(int j = 9; j < 10; j++ ){
		cout<< arr[i][j]<<" ";
}
	}
	 cout<< endl;
}
