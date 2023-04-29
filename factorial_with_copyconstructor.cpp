//The factorial of a number using copy constructor.

#include<iostream>
using namespace std;
class fact
{
        int n, i, facti;
        public:
        fact(int x)  
        {
                n=x;
                facti=1;
        }
        fact(fact &x)
        {
                n=x.n;
                facti=1;
        }
        void calculate()
        {
                for(i=1; i<=n; i++)
                {
                        facti=facti*i;
                }
        }
        void display()
        {
                cout<<"\n Factorial : "<<facti;
        }
};
int main()
{
        int x;
        cout<<"\n Enter Value : ";
        cin>>x;
        fact f1(x);  
        f1.calculate();
        f1.display();

        fact f2(f1);  
        f2.calculate();
        f2.display();

        return 0;
}
