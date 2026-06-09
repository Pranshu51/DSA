//WHAT IS OOP?
//Object Oriented programming is a methodology or paradigm to design a program using classes and objects. It simplifies software development and maintenance by providing some concepts:
//1. Encapsulation: It is the mechanism of hiding the internal state of an object and requiring all interaction to be performed through an object's methods. It helps to protect the data from unauthorized access and modification.
//3. Polymorphism: It is the ability of a function, object, or method to take on multiple forms. It allows for the use of a single interface to represent different types of objects, enabling flexibility and extensibility in code design.
//4. Abstraction: It is the process of hiding the complex implementation details and showing only the necessary features of an object. It helps to reduce complexity and allows the programmer to focus on interactions at a higher level.
//2. Inheritance: It is the mechanism of creating a new class from an existing class. The new class inherits the properties and behaviors of the existing class, allowing for code reusability and the creation of a hierarchical relationship between classes.
//Muliple cheezo ko a single unit me daal dia 



//WHAT ARE CLASSES?(BluePrint of an object)
//class is a user-defined data type that serves as a blueprint for creating objects. It encapsulates data members (attributes) and member functions (methods) that operate on the data. A class defines the properties and behaviors of the objects that can be created from it. It provides a way to model real-world entities and their interactions in a program.

//calss Player{
//private: //access specifier
// int health; //data members or attributes
//public:
// int score;
// string name;
// }


//Player pranshu; //object of class Player

//ACCESS MODIFIERS
// An **access modifier** in C++ is a keyword (`public`, `private`, or `protected`) 
// that defines the visibility and accessibility of class members (attributes and methods) from outside the class.
//1. Public: Members declared as public are accessible from anywhere in the program. They can be accessed by any code that has visibility to the class, including outside the class and within derived classes.
//Protected: Members declared as protected are accessible within the class itself and by derived classes. They cannot be accessed from outside the class, but they can be accessed by classes that inherit from the class in which they are declared.
//2. Private: Members declared as private are only accessible within the class itself. They cannot be accessed from outside the class or by derived classes. This is the most restrictive access level and is often used to encapsulate data and implementation details, ensuring that they cannot be modified or accessed directly from outside the class.

#include<iostream>
using namespace std;


// class Player{
//     public: //access specifier
// int health;
// int score;
// string name;
// void showhealth(){//member function
//     cout<<"Player health : "<<health<<endl;
// }
// };

// int main(){
// Player pranshu; //object of class Player
// pranshu.health = 100;
// pranshu.score = 0;
// pranshu.name = "Pranshu";
// cout<<"Player name : "<<pranshu.name<<endl;
// pranshu.showhealth();
// cout<<"Player score : "<<pranshu.score<<endl;

// Player pranshu2; //object of class Player
// pranshu2.health = 90;
// pranshu2.score = 10;
// pranshu2.name = "Pranshu2";
// Player player[10];
// player[0] = pranshu;
// player[1] = pranshu2;
// }
//o/p:
// Player name : Pranshu
// Player health : 100
// Player score : 0


//CLASS VARIABLES
//declaration, intialization and access of class variables

//->data members or attributes of a class are called class variables. They are used to store the state of an object. They can be of any data type and can be accessed using the object of the class. They can also be initialized using constructors or directly in the class definition.
//member functions->  class ke ander ke functions ko member functions kehte hai. They are used to perform operations on the data members of the class. They can be defined inside or outside the class definition and can be accessed using the object of the class. They can also be called using the scope resolution operator (::) if they are defined outside the class definition.

// class Calculator{
//     public:
//     int a,b;//data members or attributes of class Calculator
//     void add(){//member function of class Calculator
//         cout<<"Sum : "<<a+b<<endl;
//     }

// };

// int main(){
//     Calculator calc; //object of class Calculator
//     calc.a = 10;
//     calc.b = 20;
//     calc.add();
// }


//Getter and Setter

class Player{
    private:
    int health; //data members or attributes of class Player
    public:
    void setHealth(int h){ //setter function to set the value of health
        cout<<"health set kiya jaa rha h"<<endl;//hum geteer setter ki  mada se track akr skte h ki health set kiya jaa rha h ya nahi
        health = h;
    }
    int getHealth(){ //getter function to get the value of health
        return health;
    }
};

int main(){
    Player pranshu; //object of class Player
    pranshu.setHealth(100); //setting the value of health using setter function
    cout<<"Player health : "<<pranshu.getHealth()<<endl; //getting the value of health using getter function
}