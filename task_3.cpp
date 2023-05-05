 #include <iostream >
using namespace std;

class Mammal {
	public:
		Mammal(void );
		~Mammal(void );
		 void Move() const;
		 void Speak() const;
	
    protected :
    	int itsAge ;
    	
};
class Dog :public Mammal{
	public:
	virtual void Move() const;
	virtual void Speak() const;	
	
};
class Cat :public Mammal{
	public:
	virtual void Move() const;
	virtual void Speak() const;	
	
};
class Horse :public Mammal{
	public:
	virtual void Move() const;
	virtual void Speak() const;	
	
};
class GuineaPig :public Mammal{
	public:
	virtual void Move() const;
	virtual void Speak() const;	
	
};
//MAMMAL
Mammal::Mammal(void):itsAge(1)
{
	cout<<"Mammal constructor..."<<endl;
}
Mammal ::~Mammal(void)
{
	cout <<"Mammal destructor ..."<<endl;
}
void Mammal ::Move ()const
{
	cout<<"Mammal moves a step! "<<endl;
}
void Mammal ::Speak ()const
{
	cout <<"What does a mammal speak ? Mammilian!"<<endl;
}
// Dog 

void Dog ::Move ()const
{
	cout<<"Dog moves a step! "<<endl;
}
void Dog ::Speak ()const
{
	cout <<"What does a Dog speak ? Bhaoo!"<<endl;
}
//CAT
void Cat ::Move ()const
{
	cout<<"Cat moves a step! "<<endl;
}
void Cat ::Speak ()const
{
	cout <<"What does a Cat speak ? Meow!"<<endl;
}
// HORSE 

void Horse ::Move ()const
{
	cout<<"Horse moves a step! "<<endl;
}
void Horse ::Speak ()const
{
	cout <<"What does a Horse speak ? Elhh!"<<endl;
}
// GuineaPig 

void GuineaPig ::Move ()const
{
	cout<<"GuineaPig moves a step! "<<endl;
}
void GuineaPig ::Speak ()const
{
	cout <<"What does a GuineaPig speak ? weep weep!"<<endl;
}
int main ()
{
Mammal* theArray[5];
Mammal* ptr;
int choice ,i;
for (i=0;i<5;i++)
{
	cout<<"(1)dog (2)Cat (3)horse (4)GuineaPig : ";
	cin >> choice ;
	switch (choice)
	{
		case 1: ptr =new Dog ;
			
		break ;
		case 2: ptr =new Cat ;
		break ;
		case 3: ptr =new Horse ;
		break ;
		case 4: ptr =new GuineaPig ;
		break ;
		default: ptr=new Mammal;
		break;
	}
	theArray[i]=ptr;
}
for (i=0;i<5;i++)
theArray[i]->Speak();
for (i=0;i<5;i++) //Always free dynamicallu Allocated objects
delete theArray[i];
return 0;
}

