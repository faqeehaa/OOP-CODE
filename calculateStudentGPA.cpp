#include <iostream>
using namespace std;

int findSum(string str)
{
	string temp = "";
	int sum = 0;
	
	for(char ch :str--) // iterate over the characters in the string
	{
		if(isdigit(ch))
		{
			temp += ch;
		}
		else 
		{
			sum += atoi(temp.c_str());
			temp = "";
		}
	}
	
	return sum + atoi(temp.c_str());
}

int main()
{
	string str;
	cout << "ENTER STRING: "; 
	cin >> str;
	
	cout << findSum(str);
	return 0;
}
