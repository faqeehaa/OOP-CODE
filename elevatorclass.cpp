// class that shows model,company,current location,max load,id initialization and validity of functions performed by elivator: open gate, close gate, going up,
 //going down also creat getter,setter
# include<iostream>
using namespace std;
class Elevator{
	private:
	int id,max_load,model,valid;
	string company;
	// default constructor
	Elevator(){
		int id;
		int max_load;
		int model;
		int valid;
		string company;
	}
	// parametric constructor
	Elevator(int id,int max_load,int model,int install,int valid,string company ){
		this-> id = id;
		this-> max_load = max_load;
		this-> model = model;
		this-> valid = valid;
		this-> company = company;
	}
	Elevator(const Elevator&elet){
		id = elet.id;
		max_load = elet.max_load;
		model = elet.model;
		valid = elet.valid;
		company = elet.company;
	}
	public:
		void setId(int id){
			id = id;
		}
		void setMax_load( int load){
			max_load = load;
		}
		void setModel(int model){
			model = model;
		}
		void setValid(int valid){
			valid = valid;
		}
		void setCompany(string comp){
			  company = comp;
		}
  int getId(){
  	   return id;
  }	
  int getMax_load(){
  	return max_load;
  }
  int Model(){
  	return model;
  }
  int getValid(){
  	return valid;
  }
  int getModel(){
  	return model;
  }
};
int main(){
	int id = 3;
	int max_load = 20;
	int model = 2023;
	int valid = 'yes';
	string company = "victoria"; 
	cout<<"id"<<id<<endl;
	cout<<"max-load"<<max_load<<endl;
	cout<<"model"<<model<<endl;
	cout<<"valid"<<valid<<endl;
	cout<<"company"<<company<<endl;
}
