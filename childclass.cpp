# include<iostream>
using namespace std;
// Parent class

class Animal {
public:
    string name;
    int age;
   // parametric constructor 
    Animal(string n, int a) {
        name = n;
        age = a;
    }
    
    void eat() {
        cout << name << " is eating." << std::endl;
    }

    void sleep() {
        std::cout << name << " is sleeping." << std::endl;
    }
};

// Child class
class Dog : public Animal {
public:
    string breed;
    
    Dog(std::string n, int a, std::string b) : Animal(n, a) {
        breed = b;
    }
    
    void bark() {
        cout << name << " is barking." << std::endl;
    }
};

// Main function
int main() {
    Dog my_dog("Fido", 3, "Golden Retriever");
    
    my_dog.eat();   // Output: Fido is eating.
    my_dog.sleep(); // Output: Fido is sleeping.
    my_dog.bark();  // Output: Fido is barking.
    
    cout << my_dog.breed << std::endl; // Output: Golden Retriever
    
    return 0;
}


