# include<iostream>
using namespace std;
float getinterest(float pmt1, int tm1, float roi1)
{
	float sint =(pmt1*roi1*tm1)/100;
	return sint;
	}
	int main(){
	float pmt,roi,sint;
	int tm;
	float getinterest(float,int,float);
	cout <<"Enter the principle amount,Rate of interest and amount:"<< endl;
	cin >> pmt>>tm>>roi;
	sint=getinterest(pmt,tm,roi);
	cout <<"simple interest = :"<< sint;
}
