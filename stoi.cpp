#include <sstream>
#include <vector>
#include <iostream>
using namespace std;

vector<int> parseInts(string str) {
    vector <int> integers;
    stringstream ss(str);
    string token;
    while( getline(ss,token,',')){
        int num = stoi (token);
        integers.push_back(num);
    }
  return integers;
  	// Complete this function
}

int main() {
    string str;
    cin >> str;
    vector<int> integers = parseInts(str);
    for(int i = 0; i < integers.size(); i++) {
        cout << integers[i] << "\n";
    }
    
    return 0;
}
