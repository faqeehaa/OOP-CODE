# include<iostream>
using namespace std;
class student{
	public:
	int id;
	string name;
	int smester;
	float cgpa;
	char gender;
	
		// Default constructor
		student(){
			 id =1;
			name ="";
			smester = 0;
			cgpa = 0;
			gender = 'a';
		}
		// Parametric constructor
		student(int id,string name,int smester,float cgpa,char gender){
			this -> id = id;
			this -> name = name;
			this->smester = smester;
			this->cgpa =cgpa;
			this-> gender = gender;
		}
		// new constructor
		student(int id,string name){
			this-> id= id;
			this-> name = name;
		}
		// smester constructor
		student(string name,int smester){
			this-> name = name;
			this->smester = smester;
		}
		// copy constructor
		student(const student & std){
 			id = std.id;
			name = std.name;
			smester = std.smester;
			cgpa = std.cgpa;
			gender = std.gender;
		}
		~student(){
			cout <<"destructor of student is running:"<< endl;
			
		}
		
};
int main(){ 
int id = 47195;
string name = "suha";
int smester = '2';
float cgpa = '3.7';
char gender = 'f';
	student S1(id, name, smester, cgpa, gender);
	
	student S2(id, name);
	
	student S3(name, smester);
	
	return 0;
}
