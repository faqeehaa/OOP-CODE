# include<iostream>
using std::cout;
using std::endl;
class Base{
	public:
	virtual	void testFunction();
};
class Derived:public Base{
	public:
		void testFunction();
};
void Base::testFunction(){
	cout<<"Base class"<< endl;
}
void Derived::testFunction(){
	cout<<"Derived class"<< endl;
}
int main(void){
	Base* ptr = new Base;
	ptr-> testFunction() ;  //prints Base class
	delete ptr;
	ptr = new Derived;
	ptr->testFunction(); //prints "Base class"because the base class function is not virtual
	delete ptr;
	return 0;
}
