# include<iostream>
using namespace std;

class MyClass {
private:
    int privateData;

public:
    MyClass(int data) : privateData(data) {}

    friend void friendFunction(const MyClass& obj);
};

void friendFunction(const MyClass& obj) {
    // Friend function can access private members of MyClass
    std::cout << "Private data: " << obj.privateData << std::endl;
}

int main() {
    MyClass obj(42);
    friendFunction(obj); // Calling the friend function
    return 0;
}
