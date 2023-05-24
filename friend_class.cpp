// A program on friend class
#include<iostream>
using namespace std;
class Rectangle
  {
   private:
    int length;
    int width;
   public:
    void setData(int len,int wid)
    {
        length=len;
        width=wid;
    }
    int getArea()
    {
        return length*width;
    }
    friend class Costcalc;// friend of class rectangle
  };
  class Costcalc
  {
  public:
    double getCost(Rectangle rect)
    {
        double cost;
        cost=rect.length*rect.width*5;
        return cost;
    }
  };
  int main()
  {
      Rectangle floor;
      floor.setData(20,3);
      Costcalc calc;
      cout<<"Expense"<<calc.getCost(floor)<<endl;
      return 0;
  }
