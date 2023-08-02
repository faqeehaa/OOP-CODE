#include<iostream>
#include<fstream>
#include<string.h>
#include<stdexcept>
#include<limits>
using namespace std;
    
//    char choice;
//    fstream testfile;
	
	
    string car_type[5]= {"mini car", "family car", "luxary car", "small size bus", "large size bus"};
	const int type_1[4] = {11000, 2000, 4000, 5300};
	const int type_2[4] = {13000, 6000, 7000, 4300};
	const int type_3[4] = {25000, 4000, 5000, 2300};
	const int type_4[4] = {29000, 6000, 7000, 7300};
	const int type_5[4] = {37000, 8000, 22000, 6300};
    
//    ##################### CUSTOMER CLASS ####################################   
 
    class admin{};
    
    class Customer{
    	
    	  private:
           string name;
           string email;
           string CNIC;
           string phone_no;
           
//		############## Null constructor #################
      public:
    Customer (){
           	
           	name = " ";
           	email = " ";
           	CNIC = " ";
           	phone_no = " ";
		   }
		   
//		############## parametric constructor #################
         
    Customer(string name, string email, string CNIC, string phone_no){
    	
    	this -> name = name;
    	this -> email = email;
    	this -> CNIC = CNIC;
    	this -> phone_no = phone_no;
	}
	
	~Customer(){
//		destructor
	}
	  friend void display_cst();
	  friend class Admin;
	  friend void display_Admin();
};

void display_cst(){
    
	Customer cst;  
	
	cout<<"\n ********CUSTOMER LOGIN*********"<<endl<<endl;
	cout <<"\n Name : ";getline(cin >> ws,cst.name);
   	cout <<" E-mail : ", getline(cin,cst.email);
    cout <<" Phone Number (without dashes) : ", getline(cin,cst.phone_no);
    if(cst.phone_no.length() != 11){
    	
    	while(cst.phone_no.length() != 11){
    	
    		cout<<"Please enter a vaild phone number (without dashes): ",getline(cin,cst.phone_no);
		}
	}
    cout <<" CNIC (only 10 digits) : ", getline(cin,cst.CNIC);
    if(cst.CNIC.length() != 10){
    	
    	while(cst.CNIC.length() != 10){
    		
    		cout<<"Please enter a vaild phone number (without dashes): ",getline(cin,cst.CNIC);
		}
	}
	
	system("cls");
	
	cout<<" You are login successfully!"<<endl;
}


//########################## Admin Class #################################

class Admin: public Customer{
	
	private:
	string pass;

	public:
		string getPASS(){
			return pass;
		}
	
	Admin(){
		
//		############## Null constructor #################

		name = " ";
		email = " ";
		pass = " ";
		phone_no = " ";
		
	}
	
	Admin(string name, string email, string pass, string phone_no){
		
//	################## Parametric constructor ######################

		this -> name = name;
		this -> email = email;
		this -> pass = pass;
		this -> phone_no = phone_no;
	}
	
	//	################## Destructor #######################

	~Admin(){
	}
	friend void display_Admin();	
};

void display_Admin(){
    
	Admin ad;  
	
	cout<<"\n ********ADMIN LOGIN*********"<<endl<<endl;
	cout <<"\n Name : ";getline(cin >> ws,ad.name);
   	cout <<" E-mail : ", getline(cin,ad.email);
    cout <<" Phone Number (without dashes) : ", getline(cin,ad.phone_no);
    if(ad.phone_no.length() != 11){
    	
    	while(ad.phone_no.length() != 11){
    		
    		cout<<"Please enter a vaild phone number (without dashes): ",getline(cin,ad.phone_no);
		}
	}
    cout <<" Password (only 8 digits) : ", getline(cin,ad.pass);
    if(ad.pass.length() != 8){
    	
    	while(ad.pass.length() != 8){
    		
    		cout<<"Please enter a vaild phone number (without dashes): ",getline(cin,ad.pass);
		}
	}
	
	system("cls");
	
	cout<<" You are loggin as Admin successfully!"<<endl;
}


//    ######################### function ###############################
    
    int bundels(int days, int total){
    	
//        float deal;
    	if(days>15){
    		
    		cout<<" You got 12% discount"<<endl;
    		int bundel= total-total*0.12;
    		cout<<" Total bill after discount is "<< bundel <<endl;
    		
		}else if(days==30){
			
			cout<<" You got 25% discount"<<endl;
			int bundel= total-total*0.25;
			cout<<" Total bill affter discount is "<< bundel <<endl;
			
		}
		
		return 0;
	}

    void rating(){
    
    int rate;
    string line;
    cout<<"\n ******* RATING **********"<<endl<<endl;
    cout<<"\n Please Rate us and appriciate our work.";
	cout<<"\n 1. Excellent";
	cout<<"\n 2. Good";
	cout<<"\n 3. Worst";
	cout<<"\n Enter your response: ";
	cin>> rate;	
	switch(rate){
		
		case 1:
			cout<<"\n Thank you for Appriciation!";
		    
		case 2:
		    cout<<"\n Please give us your advise.";
			getline(cin >> ws, line);
			cout<<"\n Thanks for your advise.";
			cout<<" \n Have a nice day.";
		    break;
		    
		case 3:
		    cout<<"\n Please give us your advise.";
			getline(cin >> ws,line);
			cout<<"\n Thanks for your advise.";
			cout<<"\n Have a nice day.";
	}
	
	}
	
	void Car(){
		    
    cout <<"\n ******* CAR SELECTION **********" << endl << endl;

    int car_choice;
    cout <<"\n Which car would you like to rent?";

    cout <<"\n ___________";
    cout <<"\n Press 0 for mini car";
    cout <<"\n Press 1 for family car";
    cout <<"\n Press 2 for luxury car";
    cout <<"\n Press 3 for small size bus";
    cout <<" \n Press 4 for large size bus";
    cout <<"\n ___________";
    cout <<"\n Enter your choice: ";

    try {
        cin >> car_choice;

        if (cin.fail()) {
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');

            throw runtime_error("\nInvalid input Please enter a valid integer.");
        }
    } catch (const runtime_error& e) {
        cout <<"\n Exception occurred: " << e.what() << endl;
    }
     
    if(car_choice < 0 || car_choice > 4) {
        while (car_choice < 0 || car_choice > 4) {
            cout << "\n Please choose a valid choice.";
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            cin >> car_choice;
        }
    }    	
    	system("cls");
    	
//    	######################## discount section ############################

        cout<<endl;
        
        cout<<"\n ********DISCOUNT SECTION********";
        int day;
        cout<<"\n ___________";
        cout<<"\n You will have a discount if you rent a car for: ";
        cout<<"\n 15 days or above you will get 12% discount";
        cout<<"\n 30 days you will get 25% discount";
        cout<<"\n ___________";
        cout<<"\n For how many days you want to rent a car: ";
        
        try {
        cin >> day;

        if (cin.fail()) {
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            throw runtime_error("\nInvalid input. Please enter a valid integer.");
        }
        
        if (day < 0) {
            throw runtime_error("\nInvalid input. Number of days cannot be negative.");
        }
        } catch (const runtime_error& e) {
        cout <<"\n Exception occurred: " << e.what();
        return; 
    }
    cout <<"\n You have selected to rent a car for " << day << " days.";
    	
    	if(day > 30){
    		while(day > 30){
    			
    		cout<<" Maximum you can book a car for 30 days" <<endl;
    		cout<<" Please enter the days again: ";
    		cin>>day;
    		cout<<"___________"<< endl << endl;
    		
			}
    		
		}
    	
    	system("cls");
    	
    	cout<<endl;
    	
    	cout<<" ********DRIVER SECTION*********"<<endl<<endl;
    	
    	char driver=0;
    	cout<<" Would you like to have a driver with you? "<<endl;
    	cout<<" The driver charges will be '2000' if you book car  for 15 days or above."<<endl;
    	cout<<" The driver charges will be '3000' if you book a car for 30 days or above."<<endl;
    	cout<<" 'y'for YES and 'n' for NO"<<endl;
    	cout<<"___________"<< endl << endl;
    	cout<<"Driver: ";
    	cin>>driver;
    	cout<<"___________"<< endl << endl;
    	
//    	######################## condition for driver ############################

    	if(driver == 'y' && 'Y' && day == 30){
    		
    		cout<<" Thanks for booking a driver too!!"<<endl;
    		cout<<" The driver charges will be 3000"<<endl;
    		
		}else if(driver == 'y' && day >= 15){
			
			cout<<" Thanks for booking a driver too!!"<<endl;
			cout<<" The driver charges will be 2000"<<endl;
		}
		else{
			cout<<"You are not booking a driver!!"<<endl;
		}
		
		system("cls");
		
//    	######################## switch statement for billing ############################
		
		int car_model;
		float total;
		switch(car_choice)
		{
			case 0:
			{
				cout<< endl;
	cout<<" ********CAR Model SECTION*********"<<endl<<endl;

				cout <<" \nPlease Select Which Car Model You Would Like:\n\n"<<endl;
				cout <<" \nCar 1-A = 2500 \t\t 0\nCar 1-B = 2000 \t\t 1\nCar 1-C = 4000 \t\t 2\nCar 1-D = 5300 \t\t 3\n"<<endl;
				cout <<" \nPlease Enter The Model = ";
				cin>> car_model;
				cout<<"___________"<< endl << endl;
				
				
				switch(car_model)
					{
						case 0:
						total =day*type_1[car_model]+driver;
						cout <<"Your Total Price is : "<< total << endl;
						bundels(day,total);
						break;

						case 1:
						total =day*type_1[car_model]+driver;
						cout <<"Your Total Price is : "<< total << endl;
						bundels(day,total);
						break;

						case 2:
						total =day*type_1[car_model]+driver;
						cout <<"Your Total Price is : "<< total << endl;
						bundels(day,total);
						break;

						case 3:
						total =day*type_1[car_model]+driver;
						cout <<"Your Total Price is : "<< total << endl;
						bundels(day,total);
						break;
					}
			}
			break;

			case 1:
			{
				
	cout<< endl;			
	cout<<" ********CAR Model SECTION*********"<<endl<<endl;
	
				cout <<" \nPlease Select Which Car Model You Would Like:\n";
				cout <<" \nCar 2-A = 2750 \t\t 0\nCar 2-B = 3000 \t\t 1\nCar 2-C = 3500 \t\t 2\nCar 2-D = 4000 \t\t 3\n";
				cout <<" \nPlease Enter The Model = ";
				cin>> car_model;
				cout<<"___________"<< endl << endl;
				
				switch(car_model)
					{

						case 0:
						total =day*type_2[car_model]+driver;
						cout <<"Your Total Price is :"<< total << endl;
						bundels(day,total);
						break;

						case 1:
						total =day*type_2[car_model]+driver;
						cout <<"Your Total Price is :"<< total << endl;
						bundels(day,total);
						break;

						case 2:
						total =day*type_2[car_model]+driver;
						cout <<"Your Total Price is :"<< total << endl;
						bundels(day,total);
						break;

						case 3:
						total =day*type_2[car_model]+driver;
						cout <<"Your Total Price is :"<< total << endl;
						bundels(day,total);
						break;
					}
			}
			break;

			case 2:
			{
	
	cout<< endl;			
	cout<<" ********CAR Model SECTION*********"<<endl<<endl;
		
				cout <<" \nPlease Select Which Car Model You Would Like:\n";
				cout <<" \nCar 3-A = 4000 \t\t 0\nCar 3-B = 5000 \t\t 1\nCar 3-C = 5500 \t\t 2\nCar 3-D = 6000 \t\t 3\n";
				cout <<" \nPlease Enter The Model = ";
				cin>> car_model;
				cout<<"___________"<< endl << endl;
				
				switch(car_model)
					{

						case 0:
						total =day*type_3[car_model]+driver;
						cout <<"Your Total Price is :"<< total << endl;
						bundels(day,total);
						break;

						case 1:
						total =day*type_3[car_model]+driver;
						cout <<"Your Total Price is :"<< total << endl;
						bundels(day,total);
						break;

						case 2:
						total =day*type_3[car_model]+driver;
						cout <<"Your Total Price is :"<< total << endl;
						bundels(day,total);
						break;

						case 3:
						total =day*type_3[car_model]+driver;
						cout <<"Your Total Price is :"<< total << endl;
						bundels(day,total);
						break;
					}

			}
			break;

			case 3:
			{	
	
	cout<< endl;			
	cout<<" ********CAR Model SECTION*********"<<endl<<endl;
		
				cout <<" \nPlease Select Which Car Model You Would Like:\n";
				cout <<" \nCar 4-A = 6350 \t\t 0\nCar 4-B = 7800 \t\t 1\nCar 4-C = 4800 \t\t 2\nCar4-D = 7000 \t\t 3\n";
				cout <<" \nPlease Enter The Model = ";
				cin>> car_model;
				cout<<"___________"<< endl << endl;
				
				switch(car_model)
					{

						case 0:
						total =day*type_4[car_model]+driver;
						cout <<"Your Total Price is :"<< total << endl;
						bundels(day,total);
						break;

						case 1:
						total =day*type_4[car_model]+driver;
						cout <<"Your Total Price is :"<< total << endl;
						bundels(day,total);
						break;

						case 2:
						total =day*type_4[car_model]+driver;
						cout <<"Your Total Price is :"<< total << endl;
						bundels(day,total);
						break;

						case 3:
						total =day*type_4[car_model]+driver;
						cout <<"Your Total Price is :"<< total << endl;
						bundels(day,total);
						break;
					}
			}
			break;
			
			case 4:
			{
			
	cout<< endl;		
    cout<<" ********CAR Model SECTION*********"<<endl<<endl;
		
				cout <<" \nPlease Select Which Car Model You Would Like:\n";
				cout <<" \nCar 5-A = 6350 \t\t 0\nCar 5-B = 7800 \t\t 1\nCar 5-C = 4800 \t\t 2\nCar5-D = 7000 \t\t 3\n";
				cout <<" \nPlease Enter The Model= ";
				cin>> car_model;
				cout<<"___________"<< endl << endl;
				
				
				switch(car_model)
					{

						case 0:
						total =day*type_5[car_model]+driver;
						cout <<"Your Total Price is :"<< total << endl;
						bundels(day,total);
						break;

						case 1:
						total =day*type_5[car_model]+driver;
						cout <<"Your Total Price is :"<< total << endl;
						bundels(day,total);
						break;

						case 2:
						total =day*type_5[car_model]+driver;
						cout <<"Your Total Price is :"<< total << endl;
						bundels(day,total);
						break;

						case 3:
						total =day*type_5[car_model]+driver;
						cout <<"Your Total Price is :"<< total << endl;
						bundels(day,total);
						break;
	        }
	}
}
	}

int main(){ 

	Admin ad;
    Customer cst;	
   
   	
    cout<<"                                          -----------------------------------------------"<<endl;
    cout<<"                                          |                   RENT A CAR                 |"<<endl;
    cout<<"                                          -----------------------------------------------"<<endl<<endl<<endl<<endl;
	
//	############################# Login ##################################
       
    cout<<"    ******* LOGIN PORTAL **********"<<endl<<endl;

       int login_choice;
       cout<<" 1. customer"<<endl;
       cout<<" 2. Admin"<<endl;
       cout<<" 3. Book a car"<<endl;
       cout<<" Enter your login choice: ";
       cin>>login_choice;
       
       system("cls");
       
      switch(login_choice){
      	    
      	    char enter;
      	    case 1:
      	    	
      	        display_cst();
      	        
      	        cout<<"\n Would you like to book a car.";
      	        cout<<"\n If Yes enter 'Y'";
      	        cin>>enter;
      	        
      	        if(enter == 'Y' || enter == 'y'){
      	        	Car();
      	        	break;
      	        }else
				  cout<<"\n Invaild Entery";	
      	        break;
	        case 2:
	        	
	  	        display_Admin();
	  	        break;
	  	        
	  	    case 3:
	  	    	
			    Car();
			    rating();
				break;  
	  	
	        default:
	  	        cout<<" Enter a valid choice."<<endl;
                system("cls");
					  
}

	 return 0;
}