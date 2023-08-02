 # include<iostream>
 using namespace std;
class Baby {
private:
    bool isHungry;
    bool isSleepy;
     

public:
    Baby() {
        isHungry = false;
        isSleepy = false;
         
    }

    void setHungry(bool value) {
        isHungry = value;
    }

    void setSleepy(bool value) {
        isSleepy = value;
    }

     

    void cry() {
        if (isHungry) {
            cout << "Baby is hungry. aaaaah!" << endl;
        }
        if (isSleepy) {
            cout << "Baby is sleepy. aaaaah!" << endl;
        }
         
    }
};

int main() {
    Baby baby;

    // Set flags to indicate the baby's needs
    baby.setHungry(true);
    baby.setSleepy(false);
     

    // Check the flags and make the baby cry if needed
    baby.cry();

    return 0;
}