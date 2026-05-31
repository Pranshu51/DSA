#include <iostream>
using namespace std;

//JAB CLASS BANENGE TO KOI MEMORY ALLOCATE NHI HOTA H, JAB HUM OBJECT BANAYENGE TAB MEMORY ALLOCATE HOGA, CLASS TO BAS EK BLUEPRINT HOTA H, OBJECT US BLUEPRINT KA INSTANCE HOTA H

//CONSTRUTORS IN C++   
// A constructor is a special function in programming that runs automatically when you create a new object from a class 
//ye by default hota h class ke andar agar hum khud se constructor define nhi karte to compiler khud se ek default constructor bana deta h
//->hidden hota h aur uska naam class ke naam ke barabar hota h
//->initialization ke liye use hota h
//->constructor ka return type nhi hota h
//->constructor overloading bhi hota h
//->constructor ka use karke hum apne object ke liye initial values set kar sakte hai


//TYPES OF CONSTRUCTORS
//1. DEFAULT CONSTRUCTOR
//2. PARAMETERIZED CONSTRUCTOR
//3.  COPY CONSTRUCTOR

//constructor banega class ke ander
//CONSTRUCTOR ka RETURN TYPE CLASS ke type ka hoga aur iska NAAM NHI HOTA,function ki trh hota h bss naam nhi hota


//DEFAULT CONSTRUTOR

// class Bike{
//     public:
//     int tyreSize;


//     Bike(){
//         cout<<"Constructor called!"<<endl;
//     }

// };


// int main(){
//     Bike tvs;//object creation //constructor ko call lag jaega apne app kyuki ye default hota h
// }



//PARAMETERIZED CONSTRUCTOR

// class Bike{
//     public:
//     int tyreSize;
//     int engineSize;

// //default value bhi de sakte hai constructor ke parameters ko, agar object creation ke time pe hum us parameter ke liye value nhi dete to default value use ho jayegi
//     Bike(int tyreSize, int engineSize=120){//ye constructor hai jisme parameters diye gaye hai, isliye ise parameterized constructor kehte hai
//          this->engineSize = engineSize;
//         this->tyreSize = tyreSize;
//         cout<<"Constructor called!"<<endl;
//     }
    
// };


// int main(){
//     Bike tvs(17);//object creation //constructor ko call lag jaega apne app kyuki ye default hota h
//     cout<<"Tyre Size: "<<tvs.tyreSize<<endl;
//     cout<<"Engine Size: "<<tvs.engineSize<<endl;
// }



//COPY CONSTRUCTOR



// class Smartphone {
// public:
//     string brand;
//     int modelYear;

//     // Regular Constructor
//     Smartphone(string b, int y) {
//         brand = b;
//         modelYear = y;
//     }

//     //  Copy Constructor
//     Smartphone(const Smartphone &original) {
//         brand = original.brand;
//         modelYear = original.modelYear;
//     }

//     void info() {
//         cout << brand << " (" << modelYear << ")" << endl;
//     }
// };

// int main() {
//     Smartphone phone1("iPhone", 2024);
    
//     // Copy constructor is called here
//     Smartphone phone2 = phone1; 

//     phone2.info(); 
//     return 0;
// }




//DESTRUCTORS IN C++
//ye by default hota h class ke andar agar hum khud se destructor define nhi karte to compiler khud se ek default destructor bana deta h
//->hidden hota h aur uska naam class ke naam ke barabar hota h
//->destructor ka return type nhi hota h
//->destructor ka use karke hum apne object ke liye memory deallocate kar sakte hai
// In C++, a destructor is a special member function that is called automatically when an object goes out of scope or is explicitly deleted. Its main job is to "clean up"—usually by releasing memory or closing files.

// Key Rules for Destructors
// Same name as the class, but starts with a tilde (~).

// No return type and no parameters (you cannot pass values to a destructor).

// Automatic: You don't usually call it yourself; C++ handles it.


//jab hum dynamically memory allocate karte hai to humein manually us memory ko deallocate karna padta hai, aur destructor ka use karke hum apne object ke liye memory deallocate kar sakte hai
//kab call hota h? when object goes out of scope, ya jab hum manually delete keyword ka use karke object ko delete karte hai, ya jab program end hota h
//jitne object honge utni baar destrutor chlega same for constructor also


// class Bike{
//     public:
//     int tyreSize;
//     int engineSize;

// //default value bhi de sakte hai constructor ke parameters ko, agar object creation ke time pe hum us parameter ke liye value nhi dete to default value use ho jayegi
//     Bike(int tyreSize, int engineSize=120){//ye constructor hai jisme parameters diye gaye hai, isliye ise parameterized constructor kehte hai
//          this->engineSize = engineSize;
//         this->tyreSize = tyreSize;
//         cout<<"Constructor called!"<<endl;
//     }
    
//     ~Bike(){//ye destructor hai, iska naam class ke naam ke barabar hota hai, aur iska return type nhi hota h
//         cout<<"Destructor called!"<<endl;
//     }
// };


// int main(){
//     Bike tvs(17);//object creation //constructor ko call lag jaega apne app kyuki ye default hota h
//     cout<<"Tyre Size: "<<tvs.tyreSize<<endl;
//     cout<<"Engine Size: "<<tvs.engineSize<<endl;
// }


//SHALLOW VS DEEP COPY
//SHALLOW COPY=>jab hum ek object ko dusre object ke barabar set karte hai to wo dono object same memory location ko point karte hai,
// isliye agar hum ek object ke value ko change karte hai to dusre object ke value bhi change ho jati hai, 
//isliye ise shallow copy kehte hai kyuki INDEPENDENT NHI HOTE H
//DEEP COPY=>jab hum ek object ko dusre object ke barabar set karte hai to wo dono object alag memory location ko point karte hai,
// isliye agar hum ek object ke value ko change karte hai to dusre object ke value change nhi hoti hai, isliye ise deep copy kehte hai kyuki INDEPENDENT HOTE H 


//deep copy=obj 1 banenge fir obj2 banaenge par object 2 ko dusri jagah point karenge and then object 1 ki value ko object 2 me copy karenge, isliye dono object alag memory location ko point karenge, isliye agar hum ek object ke value ko change karte hai to dusre object ke value change nhi hoti hai, isliye ise deep copy kehte hai kyuki INDEPENDENT HOTE H


//COPY CONSTRUCTOR
// Bike(bike b) agr pass by value kara to dikkat aaegai kyuki ye parameter ki copy banegi aur khud parameter copy banane ke lie copy constructor ko call krega to ye ek infinite loop ban jega  isiliye humesha pass by reference karna chahiye copy constructor me, taki ye parameter ki copy na banaye aur directly us parameter ko use kare, isiliye copy constructor me pass by reference karna chahiye





//STATIC MEMBERS


//same for all objects
//belogs to the class not to the object
// classname::staticMemberName; //ye syntax hota h static member ko initialize karne ke liye, aur iska value class ke multiple objects ke baad bhi maintain rahega, kyuki ye static member hai.
//static keyword is used with a variable to make memory of the variable static once a static variable is declared its memory cant be changed

// In C++, a **static member** is a variable or function that belongs to the **class itself**, rather than to any specific object.

// Normally, each object gets its own copy of variables. With `static`, there is only **one copy** shared by every object of that class.

// ---

// ### 1. Static Member Variables

// Think of a static variable as a "global" variable that lives inside a class. It is shared across all instances.

// **Key Rule:** You must initialize static variables **outside** the class (usually in the global scope).


// #include <iostream>
// #include <string>

// using namespace std;

// class Player {
// public:
//     string name;
//     // Static variable to keep track of total players
//     static int playerCount;

//     Player(string n) {
//         name = n;
//         playerCount++; // Every time a player is created, increment the shared counter
//     }
// };

// // Initialization outside the class (Mandatory)
// int Player::playerCount = 0;

// int main() {
//     Player p1("Alice");
//     Player p2("Bob");

//     // Both objects share the same playerCount
//     cout << "Total Players: " << Player::playerCount << endl; // Output: 2
    
//     return 0;
// }


// ### 2. Static Member Functions

// A static function can be called without creating an object. It can **only** access other static variables or functions. It cannot access regular ("non-static") variables because it doesn't know which object's data to look at.


// class Calculator {
// public:
//     static int add(int a, int b) {
//         return a + b;
//     }
// };

// int main() {
//     // No need to create a Calculator object!
//     int sum = Calculator::add(5, 10);
//     cout << "Sum: " << sum << endl;
//     return 0;
// }


// ### Comparison Table

// | Feature | Regular Member | Static Member |
// | --- | --- | --- |
// | **Ownership** | Belongs to the **Object**. | Belongs to the **Class**. |
// | **Memory** | Each object gets its own copy. | Only one copy exists for all objects. |
// | **Access** | Use `object.member`. | Use `Class::member`. |
// | **Lifetime** | Created/Destroyed with the object. | Created when program starts; exists until it ends. |

// ### Why use static?

// 1. **Counters:** Counting how many objects of a class exist.
// 2. **Shared Settings:** A "Game Speed" variable that should be the same for all enemies.
// 3. **Utility Functions:** Math functions (like `sqrt` or `add`) that don't need to store specific object data.


// void print(){
//     //agr static nhi banenge to harr baaar 0 hi print hota rahega kyuki har baar new count banega 
//     static int count = 0;//ye variable sirf is function ke andar hi accessible hoga, aur iska value function ke multiple calls ke baad bhi maintain rahega, kyuki ye static variable hai
//     count++;
//     cout<<"Count: "<<count<<endl;
// }


// int main(){
//     print();
//     print();
//     print();
// }

//e.g-2
//static member object banne se pehle hi memory allocate ho jati h  to hum inhe object se bhi access kar skte h aur resolution operator se direct bhi access kar skte h aur ye har object ke lie same hoga kyuki ye static member hai, aur iska value class ke multiple objects ke baad bhi maintain rahega, kyuki ye static member hai.

// class Bike{
//     public:
//     static int noOfBikes;//ye variable sirf is class ke andar hi accessible hoga, aur iska value class ke multiple objects ke baad bhi maintain rahega, kyuki ye static variable hai
//     int tyreSize;
//     int engineSize;

// //default value bhi de sakte hai constructor ke parameters ko, agar object creation ke time pe hum us parameter ke liye value nhi dete to default value use ho jayegi
//     Bike(int tyreSize, int engineSize=120){//ye constructor hai jisme parameters diye gaye hai, isliye ise parameterized constructor kehte hai
//          this->engineSize = engineSize;
//         this->tyreSize = tyreSize;
//         cout<<"Constructor called!"<<endl;
//     }
//     static void increaseNoOfBikes(){//ye function sirf is class ke andar hi accessible hoga, aur iska value class ke multiple objects ke baad bhi maintain rahega, kyuki ye static function hai
//         noOfBikes++;
//     }
// };
// //::->scope resolution operator, ye operator static variable ko class ke andar se access karne ke liye use hota hai, aur static variable ko initialize karne ke liye bhi use hota hai, kyuki static variable ko class ke andar initialize nhi kar sakte hai, isliye class ke bahar initialize karna padta hai, aur uske liye scope resolution operator ka use karna padta hai
// int Bike::noOfBikes = 10;//ye static variable ko initialize karna padta hai class ke bahar, aur iska value class ke multiple objects ke baad bhi maintain rahega, kyuki ye static variable hai
// //ye sb object ke lie same h

// int main(){
//     Bike tvs(17);//object creation //constructor ko call lag jaega apne app kyuki ye default hota h
//     // cout<<"Tyre Size: "<<tvs.tyreSize<<endl;
//     // cout<<"Engine Size: "<<tvs.engineSize<<endl;
//     Bike royalEnfield(19, 350);
//     // cout<<tvs.noOfBikes<<endl;//10
//     // cout<<royalEnfield.noOfBikes<<endl;//10
//     Bike::increaseNoOfBikes();
//     // cout<<tvs.noOfBikes<<endl;//11
//     // cout<<royalEnfield.noOfBikes<<endl;//11
//     tvs.increaseNoOfBikes();
//     // cout<<tvs.noOfBikes<<endl;//12
//     // cout<<royalEnfield.noOfBikes<<endl;//12
// }

//SCOPE RESOLUTION OPERTOR

// int b=10;
// int main(){
// int b=5;
// cout<<"Value of b: "<<b<<endl;//5
// cout<<"Value of global b: "<<::b<<endl;//10 ye ilaka bataga ki konse b ki baat kr rhe h
// }



//INILIALIZATION LIST


// class Bike{
//     public:
//     int tyreSize;
//     int engineSize;


//     Bike(int ts, int es):tyreSize(ts), engineSize(es){
//     }//ye constructor hai jisme parameters diye gaye hai, isliye ise parameterized constructor kehte hai, aur ye initialization list ka use karke member variables ko initialize kar raha hai, isliye ye efficient hota hai, kyuki ye directly member variables ko initialize kar raha hai, aur constructor ke body me assignment karne se pehle hi member variables ko initialize kar raha hai, isliye ye efficient hota hai
// };


// int main(){
//     Bike tvs(10,29);//object creation //constructor ko call lag jaega apne app kyuki ye default hota h
// }


//POLYMORPHISM
//ye ek aisa concept hai jisme hum ek function ke multiple forms create kar sakte hai
//Types of polymorphism
//1. Compile time polymorphism(function overloading, operator overloading)
//2. Run time polymorphism(function overriding,virtual functions, abstract classes, interfaces)


//FUNCTION OVERLOADING
//creating function with same name but different parameters is called function overloading, and it is a feature of C++ that allows us to create multiple functions with the same name but different parameters, and the compiler will automatically call the correct function based on the arguments passed to the function, and it is a way to achieve polymorphism in C++
//1.Function ka naam same hoga
//2.Function ke parameters different honge(ya to number of parameters different honge ya phi type of parameters different honge ya phir dono different honge)
//3.Function ke return type ka koi farak nhi padta h function overloading me, kyuki compiler function ke naam aur parameters ke basis pe hi function ko identify karta h, isliye function ke return type ka koi farak nhi padta h function overloading me, aur agar hum same naam ke functions banate hai jisme parameters same hote hai to compiler error dega, kyuki compiler ko pata nhi chalega ki kaunse function ko call karna hai, isliye function overloading me parameters different hone chahiye, taki compiler function ko identify kar sake, aur agar hum same naam ke functions banate hai jisme parameters same hote hai to compiler error dega, kyuki compiler ko pata nhi chalega ki kaunse function ko call karna hai, isliye function overloading me parameters different hone chahiye, taki compiler function ko identify kar sake

//compile time polymorphism ,program start hone se pehle hi compiler decide kar leta h ki kaunse function ko call karna hai, aur agar hum same naam ke functions banate hai jisme parameters same hote hai to compiler error dega, kyuki compiler ko pata nhi chalega ki kaunse function ko call karna hai, isliye function overloading me parameters different hone chahiye, taki compiler function ko identify kar sake, aur agar hum same naam ke functions banate hai jisme parameters same hote hai to compiler error dega, kyuki compiler ko pata nhi chalega ki kaunse function ko call karna hai, isliye function overloading me parameters different hone chahiye, taki compiler function ko identify kar sake



// class Bike{
//     public:
//     int tyreSize;
//     int engineSize;


//     Bike(int ts, int es):tyreSize(ts), engineSize(es){
//     }//ye constructor hai jisme parameters diye gaye hai, isliye ise parameterized constructor kehte hai, aur ye initialization list ka use karke member variables ko initialize kar raha hai, isliye ye efficient hota hai, kyuki ye directly member variables ko initialize kar raha hai, aur constructor ke body me assignment karne se pehle hi member variables ko initialize kar raha hai, isliye ye efficient hota hai

//      void add(int a,int b){
//         cout<<"Sum: "<<a+b<<endl;
//      }
//      void add(int a,double b){
//         cout<<"Sum: "<<a+b<<endl;
//      }
//       void add(double a,double b){
//         cout<<"Sum: "<<a+b<<endl;
//      }
// };


// int main(){
//     Bike tvs(10,29);//object creation //constructor ko call lag jaega apne app kyuki ye default hota h
//     tvs.add(5,10);//Sum: 15
//     tvs.add(5,10.5);//Sum: 15.5
//     tvs.add(5.5,10.5);//Sum: 16
// }


//famous e.g
// class PrintArea{
//     public:
//     void area(int side){
//         cout<<"Area of square: "<<side*side<<endl;
//     }
//     void area(int length,int breadth){
//         cout<<"Area of rectangle: "<<length*breadth<<endl;
//     }
//     void area(double radius){
//         cout<<"Area of circle: "<<3.14*radius*radius<<endl;
//     }
// };

// int main(){
//     PrintArea pa;
//     pa.area(5); // Area of square: 25
//     pa.area(5, 10); // Area of rectangle: 50
//     pa.area(5.0); // Area of circle: 78.5
// }



//CONSTRUCTOR OVERLOADING
//constructor overloading is a feature of C++ that allows us to create multiple constructors with the same name but different parameters, and the compiler will automatically call the correct constructor based on the arguments passed to the constructor, and it is a way to achieve polymorphism in C++
//1. Constructor ka naam same hoga
//2. Constructor ke parameters different honge(ya to number of parameters different honge ya phi type of parameters different honge ya phir dono different honge)
//3. Constructor ke return type ka koi farak nhi padta h constructor overloading me, kyuki compiler constructor ke naam aur parameters ke basis pe hi constructor ko identify karta h, isliye constructor ke return type ka koi farak nhi padta h constructor overloading me, aur agar hum same naam ke constructors banate hai jisme parameters same hote hai to compiler error dega, kyuki compiler ko pata nhi chalega ki kaunse constructor ko call karna hai, isliye constructor overloading me parameters different hone chahiye, taki compiler constructor ko identify kar sake, aur agar hum same naam ke constructors banate hai jisme parameters same hote hai to compiler error dega, kyuki compiler ko pata nhi chalega ki kaunse constructor ko call karna hai, isliye constructor overloading me parameters different hone chahiye, taki compiler constructor ko identify kar sake


// class Bike{
//     public:
//     int tyreSize;
//     int engineSize;

// //CONSTRUCTOR OVERLOADING
//     Bike(int ts, int es):tyreSize(ts), engineSize(es){
//     }//ye constructor hai jisme parameters diye gaye hai, isliye ise parameterized constructor kehte hai, aur ye initialization list ka use karke member variables ko initialize kar raha hai, isliye ye efficient hota hai, kyuki ye directly member variables ko initialize kar raha hai, aur constructor ke body me assignment karne se pehle hi member variables ko initialize kar raha hai, isliye ye efficient hota hai

//         Bike(int ts):tyreSize(ts), engineSize(120){
//         }//ye constructor hai jisme parameters diye gaye hai, isliye ise parameterized constructor kehte hai, aur ye initialization list ka use karke member variables ko initialize kar raha hai, isliye ye efficient hota hai, kyuki ye directly member variables ko initialize kar raha hai, aur constructor ke body me assignment karne se pehle hi member variables ko initialize kar raha hai, isliye ye efficient hota hai
    
//         Bike():tyreSize(10), engineSize(120){
//         }//ye constructor hai jisme parameters diye gaye hai, isliye ise parameterized constructor kehte hai, aur ye initialization list ka use karke member variables ko initialize kar raha hai, isliye ye efficient hota hai, kyuki ye directly member variables ko initialize kar raha hai, aur constructor ke body me assignment karne se pehle hi member variables ko initialize kar raha hai, isliye ye efficient hota hai

//     };


// int main(){
//     Bike tvs(10,29);//object creation //constructor ko call lag jaega apne app kyuki ye default hota h
//     Bike royalEnfield(19);//object creation //constructor ko call lag jaega apne app kyuki ye default hota h
//     Bike honda;//object creation //constructor ko call lag jaega apne app kyuki ye default hota h
// }




//INHERITANCE
// In simple terms, Inheritance is a way to create a new class based on an existing class. It allows the new class (the Child) to automatically "inherit" all the attributes and behaviors of the original class (the Parent).
// Base Class (Parent): The original class that contains common features.
// Derived Class (Child): The new class that "borrows" from the parent and adds its own specific details.


//1. Single Inheritance
//2. Multiple Inheritance
//3. Multilevel Inheritance
//4. Hierarchical Inheritance
//5. Hybrid Inheritance


//1.SINGLE INHERITANCE


#include <string>


// Parent Class (The "Base")
// class Vehicle {// base class
// public:
//     int tyreSize;
//     int engineSize;
//     int lights;
//     string companyName;

//     Vehicle()
//         cout<<"Vehicle Constructor called!"<<endl;
//     }

//     void startEngine() {
//         cout << "Engine started for " << companyName << endl;
//     }
// };

// // Child Class 1: Car//derived class
// class Car : public Vehicle {//car inherits vehicle ke sare properties and functions ko, car class me humne public access specifier use kiya hai, iska matlab hai ki vehicle class ke sare public members car class ke bhi public members ban jayenge, aur car class ke objects unhe access kar sakte hai
// public:
//     int steeringSize;
    
//     Car(){
//         cout<<"Car Constructor called!"<<endl;
//     }
//     void drive() {
//         cout << "Driving with steering size: " << steeringSize << endl;
//     }
// };

// // Child Class 2: Bike
// class Bike : public Vehicle {//bike inherits vehicle ke sare properties and functions ko, bike class me humne public access specifier use kiya hai, iska matlab hai ki vehicle class ke sare public members bike class ke bhi public members ban jayenge, aur bike class ke objects unhe access kar sakte hai
// public:
//     int handleSize;
//     Bike(){
//         cout<<"Bike Constructor called!"<<endl;
//     }
//     void ride() {
//         cout << "Riding with handle size: " << handleSize << endl;
//     }
// };

// int main() {
//     Car myCar;
//     myCar.companyName = "Tesla";
//     myCar.steeringSize = 15;
//     myCar.startEngine(); // Inherited from Vehicle

//     Bike myBike;
//     myBike.companyName = "Yamaha";
//     myBike.handleSize = 30;
//     myBike.startEngine(); // Also inherited from Vehicle

//     return 0;//Pehle vehicle ka constructor call hoga, fir car ka constructor call hoga, fir bike ka constructor call hoga, kyuki car aur bike dono vehicle class ke child class hai, aur jab hum car aur bike ke objects banate hai to vehicle class ka constructor bhi call hota hai, kyuki car aur bike class me humne vehicle class ko inherit kiya hai, aur jab hum car aur bike ke objects banate hai to vehicle class ka constructor bhi call hota hai, kyuki car aur bike class me humne vehicle class ko inherit kiya hai
// }


// class A{
//     private:
//     int a_ka_private;//can't be accessed and can't be inherited
//     protected:
//     int a_ka_protected;//can't be accessed but can be inherited
//     public:
//     int a_ka_public;//can be accessed and can be inherited
// };
// //jb hum b class me public banenge to a_ka_public public rahega, a_ka_protected protected rahega, a_ka_private inherit nhi hoga,protected pehle se hi high security me h to neeche pubnic nhi bnega
// class B: public A{//public inheritance=>a_ka_public is public in B, a_ka_protected is protected in B, a_ka_private is not accessible/inherites in B
//     void display(){
//         cout<<a_ka_public<<endl;//accessible
//         cout<<a_ka_protected<<endl;//accessible
//         // cout<<a_ka_private<<endl;//not accessible
//     }
// };


// int main(){
//     B b;
//     b.a_ka_public = 10;//accessible
//     // b.a_ka_protected = 20;//not accessible
//     // b.a_ka_private = 30;//not accessible
// }

// //LOW SECURITY SE HIGH SECURITY ME JAA SKTE H





//MULTI-LEVEL INHERITANCE
//


// Level 1: Base Class (Grandparent)
// class A {
// public:
//     int a_ka_public;
//     A() {
//         cout << "A (Grandparent) ka constructor call hua!" << endl;
//     }
// };

// // Level 2: Derived Class (Parent)
// // B inherits from A
// class B : public A {
// public:
//     int b_ka_public;
//     B() {
//         cout << "B (Parent) ka constructor call hua!" << endl;
//     }
// };

// // Level 3: Derived Class (Child)
// // C inherits from B (and automatically gets everything from A too)
// class C : public B {
// public:
//     int c_ka_public;
//     C() {
//         cout << "C (Child) ka constructor call hua!" << endl;
//     }

//     void showAll() {
//         cout << "A's value: " << a_ka_public << endl;
//         cout << "B's value: " << b_ka_public << endl;
//         cout << "C's value: " << c_ka_public << endl;
//     }
// };

// int main() {
//     // Creating object of C will trigger the entire chain of constructors
//     // Order: A -> B -> C
//     C obj; 

//     obj.a_ka_public = 100; // Inherited from A
//     obj.b_ka_public = 200; // Inherited from B
//     obj.c_ka_public = 300; // Own property

//     cout << "--- Accessing All Levels ---" << endl;
//     obj.showAll();

//     return 0;
// }//humesha pehle base class ka constructor call hota hai, fir derived class ka constructor call hota hai, aur fir uske derived class ka constructor call hota hai, isliye pehle A ka constructor call hoga, fir B ka constructor call hoga, aur fir C ka constructor call hoga, kyuki C class me B class ko inherit kiya gaya hai, aur B class me A class ko inherit kiya gaya hai, isliye pehle A ka constructor call hoga, fir B ka constructor call hoga, aur fir C ka constructor call hoga, kyuki C class me B class ko inherit kiya gaya hai, aur B class me A class ko inherit kiya gaya hai


//MULTIPLE INHERITANCE
//multiple base class ,single derived class

// class A {
// public:
//     int a_ka_public;
//     A() {
//         cout << "A (Parent 1) ka constructor call hua!" << endl;
//     }
// };

// class B {
// public:
//     int b_ka_public;
//     B() {
//         cout << "B (Parent 2) ka constructor call hua!" << endl;
//     }
// };

// // MULTIPLE INHERITANCE: C is inheriting from A AND B
// class C : public A, public B {
// public:
//     int c_ka_public;
//     C() {
//         cout << "C (Child) ka constructor call hua!" << endl;
//     }

//     void show() {
//         cout << "Accessing A: " << a_ka_public << endl;
//         cout << "Accessing B: " << b_ka_public << endl;
//         cout << "Accessing C: " << c_ka_public << endl;
//     }
// };

// int main() {
//     // Note: A's constructor runs first, then B's, then C's
//     C obj; 

//     obj.a_ka_public = 10;
//     obj.b_ka_public = 20;
//     obj.c_ka_public = 30;

//     obj.show();

//     return 0;
// }




//HIERARCHICAL INHERITANCE
//single base class multiple derived class


// // The Common Parent
// class A {
// public:
//     int a_ka_public;
//     A() {
//         cout << "A (Common Parent) ka constructor call hua!" << endl;
//     }
// };

// // Child 1 inherits from A
// class B : public A {
// public:
//     int b_ka_public;
//     B() {
//         cout << "B (Child 1) ka constructor call hua!" << endl;
//     }
// };

// // Child 2 ALSO inherits from A
// class C : public A {
// public:
//     int c_ka_public;
//     C() {
//         cout << "C (Child 2) ka constructor call hua!" << endl;
//     }
// };

// int main() {
//     cout << "--- Creating Object of B ---" << endl;
//     B objB; // Calls A then B
//     objB.a_ka_public = 10;
    
//     cout << "\n--- Creating Object of C ---" << endl;
//     C objC; // Calls A then C
//     objC.a_ka_public = 20;

//     cout << "\nValues: B's A=" << objB.a_ka_public << ", C's A=" << objC.a_ka_public << endl;

//     return 0;
// }


//HYBRID INHERITANCE
//mix of multiple and multilevel inheritance, ek class multiple classes ko inherit kar sakta hai, aur ek class bhi inherit kar sakta hai, aur uske derived class bhi inherit kar sakta hai, isliye ise hybrid inheritance kehte hai



// Base Class
// class A {
// public:
//     A() { cout << "A (Grandparent) constructor" << endl; }
// };

// // Child 1 inherits from A
// class B : public A {
// public:
//     B() { cout << "B (Parent 1) constructor" << endl; }
// };

// // Child 2 inherits from A
// class C : public A {
// public:
//     C() { cout << "C (Parent 2) constructor" << endl; }
// };

// // Hybrid: D inherits from B and C
// class D : public B, public C {
// public:
//     D() { cout << "D (Child) constructor" << endl; }
// };

// int main() {
//     D obj; 
//     return 0;
// }






// Diamond Problem

// When 2 instances of Base Classes are present in the derived class.

// B derives A, C derives A
// and D derives B+C.

// Now D has 2 instance of A.




/**
 * THE DIAMOND PROBLEM
 * * Definition: 
 * Occurs when two instances of a Base Class are present in a derived class.
 * This happens in Multiple Inheritance.
 * * Hierarchy:
 * A (Base Class)
 * / \
 * B   C (Both B and C derive from A)
 * \ /
 * D (D derives from both B and C)
 * * The Issue:
 * Because D inherits from B and C, and both B and C have their own copy 
 * of Class A, Class D ends up with TWO instances of Class A.
 * * Consequences:
 * 1. Ambiguity: If Class A has a method 'display()', calling d.display() 
 * makes the compiler confused about which path to follow (D -> B -> A or D -> C -> A).
 * 2. Memory Wastage: Duplicate data from Class A is stored in memory.
 * * Solution:
 * Use 'virtual' inheritance (e.g., class B : virtual public A) to ensure 
 * only one instance of the base class is shared.
 */




// class A {
// public:
//     int a_ka_public;
//     A() {
//         cout << "A (Base Class) ka constructor call hua!" << endl;
//     }
// };

// // Use 'virtual' to ensure A is only inherited once
// //jaise hi class ke aage virtual lagega us class ka sirf ek hi instance banega
// class B : virtual public A { 
// public:
//     int b_ka_public;
//     B() {
//         cout << "B (Derived Class) ka constructor call hua!" << endl;
//     }
// };

// // Changed from B to C
// class C : virtual public A { 
// public:
//     int c_ka_public;
    
//     C() {
//         cout << "C (Derived Class) ka constructor call hua!" << endl;
//     }
// };

// class D : public B, public C {
// public:
//     int d_ka_public;
//     void show(){
//         cout<<a_ka_public<<endl;//ab D ke pass A ka sirf ek hi instance h, to D ko pata h ki A ka public ko access karna hai B ke through ya C ke through, isliye ise diamond problem kehte hai, aur is problem ko solve karne ke liye hum virtual inheritance ka use karte hai, jisme hum B aur C dono ko virtual public A banate hai, taki D ke pass A ka sirf ek hi instance ho, aur D ko pata ho ki A ka public ko access karna hai B ke through ya C ke through, isliye ise diamond problem kehte hai, aur is problem ko solve karne ke liye hum virtual inheritance ka use karte hai, jisme hum B aur C dono ko virtual public A banate hai, taki D ke pass A ka sirf ek hi instance ho, aur D ko pata ho ki A ka public ko access karna hai B ke through ya C ke through, isliye ise diamond problem kehte hai, aur is problem ko solve karne ke liye hum virtual inheritance ka use karte hai, jisme hum B aur C dono ko virtual public A banate hai, taki D ke pass A ka sirf ek hi instance ho, aur D ko pata ho ki A ka public ko access karna hai B ke through ya C ke through, isliye ise diamond problem kehte hai, aur is problem ko solve karne ke liye hum virtual inheritance ka use karte hai, jisme hum B aur C dono ko virtual public A banate hai, taki D ke pass A ka sirf ek hi instance ho, aur D ko pata ho ki A ka public ko access karna hai B ke through ya C ke through, isliye ise diamond problem kehte hai, aur is problem ko solve karne ke liye hum virtual inheritance ka use karte hai, jisme hum B aur C dono ko virtual public A banate hai, taki D ke pass A ka sirf ek hi instance ho, aur D ko pata ho ki A ka public ko access karna hai B ke through ya C ke through
//         // cout<<B::a_ka_public<<endl;//Acess specifier use krke hum is problem ko solve kr skte h
//     }
//     D() {
//         cout << "D (Derived Class) ka constructor call hua!" << endl;
//     }
// };
// //solve knre ke trike
//  //1.use access specifier
//  //ab D ke pass A ka public bhi h ,B ka bhi h ,C ka bhi h ,aur D ka bhi h ,to D confuse ho jaega ki A ka public ko access karna hai B ke through ya C ke through, isliye ise diamond problem kehte hai, aur is problem ko solve karne ke liye hum virtual inheritance ka use karte hai, jisme hum B aur C dono ko virtual public A banate hai, taki D ke pass A ka sirf ek hi instance ho, aur D ko pata ho ki A ka public ko access karna hai B ke through ya C ke through, isliye ise diamond problem kehte hai, aur is problem ko solve karne ke liye hum virtual inheritance ka use karte hai, jisme hum B aur C dono ko virtual public A banate hai, taki D ke pass A ka sirf ek hi instance ho, aur D ko pata ho ki A ka public ko access karna hai B ke through ya C ke through, isliye ise diamond problem kehte hai, aur is problem ko solve karne ke liye hum virtual inheritance ka use karte hai, jisme hum B aur C dono ko virtual public A

// //  why this works?
//  // When you use virtual public A, C++ creates a Virtual Base Pointer (vbptr). Instead of B and C both carrying a full physical copy of A, they share a single instance.
// // Before virtual: D had two copies of a_ka_public.
// // After virtual: D has only one copy of a_ka_public, and the constructor of A is called only once.

// int main() {
//     D obj;
    
//     // Without 'virtual', this line would cause a compile error (Ambiguity)
//     obj.a_ka_public = 10;
//     obj.show(); 
    
//     // cout << "Value of a_ka_public: " << obj.a_ka_public << endl;

//     return 0;
// }




//FUNCTION OVERRIDING(Run time Polymorphism)

// when a funciton of base class is redefined in its derived class,called function overriding,
// Accessing through scope Resoution operator.
// Accessing through pointer

// **Function Overriding** happens when a child class provides its own specific version of a function that is already defined in its parent class.

// Think of it as "updating" a rule. The parent says, "This is how we do it," but the child says, "I have a better/different way for myself."

// ---

// ### Simple Example

// In this code, the `Dog` class overrides the `speak` function of the `Animal` class.


// #include <iostream>
// using namespace std;

// class Animal {
// public:
//     void speak() {
//         cout << "Animal makes a sound" << endl;
//     }
// };

// class Dog : public Animal {
// public:
//     // This OVERRIDES the parent's function
//     void speak() {
//         cout << "Dog barks!" << endl;
//     }
// };

// int main() {
//     Dog myDog;
//     myDog.speak(); // Output: Dog barks!
//     return 0;
// }



// The Big Problem: "Static Binding"

// The most common problem with overriding in C++ is that by default, the compiler is "blind" to the child's version if you use a **Parent Pointer**.

// If you point a parent-type pointer to a child object, C++ will call the **Parent's** version of the function instead of the Child's. This is called **Static Binding**.

//  The Problem Code:

// Animal* ptr = new Dog(); 
// ptr->speak(); // Output: "Animal makes a sound" (WRONG!)


// Even though the object is actually a `Dog`, the compiler looks at the pointer type (`Animal`) and calls the Animal function.


// The Solution: `virtual` keyword

// To fix this, you must use the `virtual` keyword in the base class. This tells C++, "Wait until the program is running to decide which function to call based on the actual object type." This is called **Runtime Polymorphism**.

// The Fixed Code:


// class Animal {
// public:
//     virtual void speak() { // Adding 'virtual' fixes the problem
//         cout << "Animal makes a sound" << endl;
//     }
// };

// class Dog : public Animal {
// public:
//     void speak() override { // 'override' ensures you are actually overriding
//         cout << "Dog barks!" << endl;
//     }
// };

// int main() {
//     Animal* ptr = new Dog();
//     ptr->speak(); // Output: "Dog barks!" (CORRECT!)
//     return 0;
// }

//or

// class A{
//     public:
//     int a_ka_public;
//     virtual void Show(){
//         cout<<"mai a ka show hu"<<endl;
//     }
// };

// class B: public A{
//     public:
//     int b_ka_public;
//     void Show(){
//         cout<<"mai b ka show hu"<<endl;
//     }
// };
// //kitne bhi child bana lo agr function sbke parent me virtual h to runtime pe pata chalega ki kaunse function ko call karna hai, aur agar hum base class ke function ko virtual banate hai to runtime pe pata chalega ki kaunse function ko call karna hai


// int main(){
//   A *a;  
//   B b;
// //COMPILE POV->A type ka h to a ka function call hona chahiye
// //RUNTIME POV->b ka  address store h to a ka function call hona chahiye
// //to address b ka h to b ka function call hona chahiye, aur agar address a ka h to a ka function call hona chahiye, isliye runtime pe pata chalega ki kaunse function ko call karna hai, aur agar hum base class ke function ko virtual banate hai to runtime pe pata chalega ki kaunse function ko call karna hai
// //isko solve karne ke lie aate h VIRTUAL FUNCTION, jisme hum base class ke function ko virtual banate hai, taki runtime pe pata chale ki kaunse function ko call karna h
    
// //COMPILE TIME BINDING ->comppile time pe hi static memory me store ho jate h function to jb b ka adress bhi dala h tab bhi A ka hi function call hota h
// //RUNTIME BINDING->runtime pe pata chalega ki kaunse function ko call karna hai, aur agar hum base class ke function ko virtual banate hai to runtime pe pata chalega ki kaunse function ko call karna hai
//     // a=&b;//pointer ke ander uske child ka bhi address store ho skta h 
//     a= new A;
//     a->Show();
//     a=new B;//mai a ka show hu
// // mai b ka show hu
//     a->Show();
//     // a->Show();//not allowed b ke address se bhi hum sirf a ko hi access kar skte h
    
//     // b.bShow();
//     //   b.A::Show();//b ke pass abhi bhi a ka function h

// }

//VIRTUAL FUNCTION:
//make sure  the correct function is called for an object, regardless of the type of reference (pointer or object) used for function call.

//jb hum bina virtual ke function call karte h to maan lo 2 int type varibale A me h 1 int type varibale B class me h to 
//A ka size hoga 8 and B ka 12 ut jaise hi virtual lagaenge function ke aage to A ka size 16ho jaega and B ka 24 
//bcz jaise hi RUNTIME BINDING LAGATE H to background me ise enable karne ke lie kuch hota h 2 cheeze banke aati h 'vptr' and 'vtable'
//virtual ptr -> jaisi hi virtual lagaenge funcitn ke aage function pe vptr bange jo point krega virtual table ko virtua table me function store hota h
//so ptr ka 8 size hota h to wo badh jaega aur B ke case me ptr ka size 8 adhke 20 hona chahiye tha par 24 hoga kyuki generally compiler 2 ke multiple me deal karta h to kuch byte empty chord dega 
//har class ki sirf ek vtable hogi aur har class me ek vptr hoga jo vtable ko point krega,vtable me only virtual funciton store honge normal  funciton store nhi honge
//to humare case me agr binding bina virtual function ke hogi to COMPILE TIME HOGI  to wo A ko hi call kr dega jbki address b ka h 
//pr agr hum virtual funciton bana de to runtime pe hi poiner banega Vtable(function) ke paass  jaega usme jo bhi function pada hoga wo run ar dega


// You have a very solid grasp of what’s happening under the hood! You’ve correctly identified that **Virtual Functions** aren't magic—they add a real physical layer to your objects called the **vptr** and the **vtable**.

// Let’s break down your explanation into even simpler terms to make sure the "Size" and "Mechanism" parts are crystal clear.

// ---

// ### 1. The "V-Table" (The Menu)

// Every class that has at least one virtual function gets its own **vtable**.

// * Think of it as a **Static Menu** stored in memory.
// * It lists the memory addresses of all the virtual functions for that specific class.
// * **Important:** Only virtual functions go here. Normal functions are called directly.

// ### 2. The "V-Ptr" (The Waiter)

// When you add `virtual` to a function, every **object** of that class grows by the size of one pointer (usually **8 bytes** on 64-bit systems).

// * This pointer is hidden. You don't see it in your code, but it's there.
// * Its only job is to point to the **vtable** of that object's actual class.

// ---

// ### 3. Why the Size jumps from 8 to 16 or 24?

// You mentioned that `A` (with 2 ints) goes from **8 bytes** to **16 bytes**. Here is why:

// * **Original:** `int` (4) + `int` (4) = **8 bytes**.
// * **With Virtual:** `int` (4) + `int` (4) + `vptr` (8) = **16 bytes**.

// **Why does B go to 24?**
// You are exactly right about the "multiple" part. This is called **Data Alignment (Padding)**.

// * If `B` has 3 ints (12 bytes) and one `vptr` (8 bytes), that is **20 bytes**.
// * However, CPUs process data faster in chunks of 8. The compiler adds "filler" bytes to round it up to the next multiple of 8, which is **24**.

// ---

// ### 4. How it solves the "Wrong Function" Problem

// Without `virtual`, the compiler is lazy. It looks at the **Pointer Type**, not the **Object**.

// * **Compile Time (No Virtual):** You have an `Animal*` pointing to a `Dog`. The compiler says: "The pointer says Animal, so call the Animal function." It doesn't even look at the Dog object.
// * **Runtime (With Virtual):**
// 1. The program looks at the `Animal*`.
// 2. It sees the function is `virtual`.
// 3. It follows the **vptr** inside the object.
// 4. The **vptr** leads it to the `Dog`'s **vtable**.
// 5. It runs the `Dog`'s version of the function.





//ABSTRACT CLASS
// An Abstract Class is a class that is designed to be a "blueprint" only. You cannot create an object (instance) of an abstract class directly. Its sole purpose is to be inherited by other classes
//PURE VIRTUAL FUNCTION
//virtual function ke equals to me 0 rakh do iss type ka hota h
//means Base me declaration and Child me definition







// // Abstract Base Class

// class Vehicle { 
// public:
//     int tyreSize;
//     int engineSize;

//     // Pure Virtual Functions (no body here, enforced in child classes)
//     virtual void calculateMileage() = 0;
//     virtual void refuel() = 0;

//     // A virtual destructor is good practice when using inheritance
//     virtual ~Vehicle() {}
// };

// // Derived Class
// class Bike : public Vehicle { 
// public:
//     int handleSize;

//     // Implementing the abstract functions from the Parent
//     void calculateMileage() override {
//         cout << "Bike mileage calculated based on engine size: " << engineSize << "cc" << endl;
//     }

//     void refuel() override {
//         cout << "Bike fuel tank topped up." << endl;
//     }
// };

// int main() {
//     // Note: You cannot do 'Vehicle v;' because it is abstract.
    
//     Bike myBike;
//     myBike.engineSize = 150;
//     myBike.tyreSize = 17;
//     myBike.handleSize = 24;

//     // Calling the implemented functions
//     myBike.calculateMileage();
//     myBike.refuel();

//     return 0;
// }


//PURE ABSTRACT CLASS
// jiske  ander saare pure virtual funciton ho



//OPERATOR OVERLOADING(COMPILE TIME POLYMORPHISM)
//<return type> operator<symbol>(parameters){ //symbol means operator like +, -, *, /, etc.
//     //function body
// }
 



// class ComplexNumber {
// public:
//     int imaginary;
//     int real;

//     // Overloading the + operator
//     ComplexNumber operator + (ComplexNumber &c1) {
//         ComplexNumber c3;
//         c3.imaginary = c1.imaginary + this->imaginary;
//         c3.real = c1.real + this->real;
//         return c3;
//     }
//      ComplexNumber operator-(ComplexNumber &c1) {
//     ComplexNumber c3;
//     c3.imaginary = this->imaginary - c1.imaginary;
//     c3.real = this->real - c1.real;
//     return c3;
// }
// };

// int main() {
//     ComplexNumber a1, a2;

//     // Setting values for the first complex number: 10 + 5i
//     a1.real = 10;
//     a1.imaginary = 5;

//     // Setting values for the second complex number: 2 + 3i
//     a2.real = 2;
//     a2.imaginary = 3;

//     // Using the overloaded operator
//     // This calls a1.operator+(a2)
//     ComplexNumber a3 = a1 + a2;
//     ComplexNumber a4 = a1 - a2;

//     // Printing the result
//     cout << "Result: " << a3.real << " + " << a3.imaginary << "i" << endl;
//     cout << "Result: " << a4.real << " + " << a4.imaginary << "i" << endl;

//     return 0;
// }

// //SOME OPERATORS ARE THERE WHICH CAN'T BE OVERLOADED LIKE ::, ., .*, ?:, sizeof, etc.




//FRIEND FUNCTION
//hum isko ander declare karke chord denge taki wo class ke private members ko access kar sake, aur isko bahar define karenge taki wo class ke private members ko access kar sake





// class A {
//     int a_private = 10; // Private by default

// public:
//     // Declaration of friend function
//     friend void show(A &a);

//     void show2() {
//         cout << "Inside member function show2: " << a_private << endl;
//     }
// };

// // Definition of the Friend Function
// // Note: It does NOT use the A:: scope because it is not a member function
// void show(A &a) {
//     // Accessing private member 'a_private' directly
//     cout << "Inside friend function show: " << a.a_private << endl;
// }

// int main() {
//     A a;

//     // 1. Calling a regular member function
//     a.show2();

//     // 2. Calling the friend function
//     // Notice we call it like a normal global function, passing the object
//     show(a);

//     return 0;
// }






// aboove code is good for freind function instead of operator overloading


// class ComplexNumber {
// public:
//     int imaginary;
//     int real;

//     // 1. Declaration of friend operator (as seen in your img line 11)
//     friend ComplexNumber operator + (ComplexNumber &c1, ComplexNumber &c2);

//     // 2. Member operator for subtraction (as seen in your img line 13)
//     ComplexNumber operator - (ComplexNumber &c1) {
//         ComplexNumber c3;
//         // Subtracting passed object from 'this' object
//         c3.imaginary = this->imaginary - c1.imaginary;
//         c3.real = this->real - c1.real;
//         return c3;
//     }
// };

// // 3. Definition of friend operator (outside the class)
// ComplexNumber operator + (ComplexNumber &c1, ComplexNumber &c2) {
//     ComplexNumber c3;
//     // Friend functions don't have 'this', so we use both parameters
//     c3.imaginary = c1.imaginary + c2.imaginary;
//     c3.real = c1.real + c2.real;
//     return c3;
// }

// int main() {
//     ComplexNumber a1, a2;

//     a1.real = 10; a1.imaginary = 5;
//     a2.real = 2;  a2.imaginary = 3;

//     // This calls the friend function: operator+(a1, a2)
//     ComplexNumber a3 = a1 + a2;

//     // This calls the member function: a1.operator-(a2)
//     ComplexNumber a4 = a1 - a2;

//     cout << "Sum: " << a3.real << " + " << a3.imaginary << "i" << endl;
//     cout << "Difference: " << a4.real << " + " << a4.imaginary << "i" << endl;

//     return 0;
// }



//CONST KEYWORD
//if we do constant to anything its value can't be changed, and if we do constant to a variable then we can't change its value, and if we do constant to a function then we can't change the value of the object inside the function, and if we do constant to a pointer then we can't change the value of the pointer, and if we do constant to a reference then we can't change the value of the reference, and if we do constant to a class then we can't change the value of the class, and if we do constant to an object then we can't change the value of the object, and if we do constant to a member function then we can't change the value of the member function, and if we do constant to a member variable then we can't change the value of the member variable, and if we do constant to a member function then we can't change the value of the member function, and if we do constant to a member variable then we can't change the value of the member variable, and if we do constant to a member function then we can't change the value of the member function, and if we do constant to a member variable then we can't change the value of the member variable, and if we do constant to a member function then we can't change the value of the member function, and if we do constant to a member variable then we can't change the value of the member variable, and if we do constant to a member function then we can't change the value of the member function, and if we do constant to a member variable then we can't change the value of the member variable, and if we do constant to a member function then we can't change the value of the member function, and if we do constant to a member variable then we can't change the value of the member variable, and if we do constant to a member function then we can't change the value of the member function, and if we do constant to a member variable then we can't change the value of the member variable, and if we do constant to a member function then we can't change the value of the member function, and if we do constant to a member variable then we can't change the value of the member variable, and if we do constant to a member function then we can't change the value of the member function, and if we do constant to a member variable then we can't change the value of the member variable, and if we do constant to a member function then we can't change the value of the member function, and if we do constant to a

//1. constant variable
// int main(){
//     const int a = 10; //ye value declare karte time hi deni pdegi neeche nhi de skte a is a constant integer, its value cannot be changed
//     // a = 20; //error: assignment of read-only variable 'a'
// }

//2. constant function
//doesn't change data members of the class


//PREDICT OUTPUT

// class Student {
// public:
//     // const member: Must be initialized via Initialization List
//     const int rollNumber;
//     int age;

//     // Parameterized Constructor with Initialization List
//     // Syntax: : variableName(value), variableName2(value2)
//     Student(int r, int a) : rollNumber(r), age(a) {
//         // rollNumber = r; // This would cause an ERROR if written here!
//     }
// };

// int main() {
//     // Creating object s1 with rollNumber = 100 and age = 23
//     Student s1(100, 23);

//     // Printing values
//     cout << s1.rollNumber << " " << s1.age << endl;

//     return 0;
// }
//output is 100 23





//2.

// class Student {
// public:
//     int rollNumber;
//     int age;
// };

// int main() {
//     Student s1;       // Object s1 is created, but its members contain garbage values
//     Student s2 = s1;  // s1's garbage values are copied into s2

//     s1.rollNumber = 101; // Now s1 is updated, but s2 remains unchanged
//     s1.age = 20;

//     // This prints s2's values, which are the original garbage values from s1
//     cout << s2.rollNumber << " " << s2.age << endl;

//     return 0;
// }

//Example Output: 0 1836452 or 4201088 0



//3.

// class Student {
// public:
//     int rollNumber;

//     // This causes a COMPILATION ERROR
//     static int getRollNumber() {
//         // Error: Static functions cannot access non-static members
//         // return rollNumber; 
//     }
// };

// int main() {
//     Student s;
//     s.rollNumber = 101;
    
//     // This line would also fail to call the function correctly
//     // cout << s.getRollNumber() << endl;

//     return 0;
// }
//op: fail to compile.
//bcz static function can't access non-static member variable, and getRollNumber is a static function, to wo rollNumber ko access nhi kar skta h, aur jab hum s.getRollNumber() call karte h to wo bhi error dega kyuki getRollNumber static function hai, to usko class name ke through call karna chahiye tha, jaise Student::getRollNumber(), lekin fir bhi error dega kyuki getRollNumber static function hai, to wo rollNumber ko access nhi kar skta h, aur jab hum s.getRollNumber() call karte h to wo bhi error dega kyuki getRollNumber static function hai, to usko class name ke through call karna chahiye tha, jaise Student::getRollNumber(), lekin fir bhi error dega kyuki getRollNumber static function hai, to wo rollNumber ko access nhi kar skta h, aur jab hum s.getRollNumber() call karte h to wo bhi error dega kyuki getRollNumber static function hai, to usko class name ke through call karna chahiye tha, jaise Student::getRollNumber(), lekin fir bhi error dega kyuki getRollNumber static function hai, to wo rollNumber ko access nhi kar skta h

// correct way above for above method


// class Student {
// public:
//     int rollNumber;

//     // Removed 'static' to allow access to rollNumber
//     int getRollNumber() {
//         return rollNumber;
//     }
// };

// int main() {
//     Student s;
//     s.rollNumber = 101;

//     // Outputting the result
//     cout << s.getRollNumber() << endl;

//     return 0;
// }


//OBJECT TO POINTER



#include <iostream>
#include <string>
using namespace std;

class Cricketer {
public:
    string name;
    int runs;
    float avg;

    Cricketer(string name, int runs, float avg) {
        this->name = name;
        this->runs = runs;
        this->avg = avg;
    }
};

// In your screen, this was being set up to show how pass-by-value works
void change(Cricketer c) {
    c.avg = 99.9; // This only changes a COPY, not the original c1
}

int main() {
    Cricketer c1("Virat Kohli", 25000, 55.2);

    // 1. Create the pointer and point it to c1
    Cricketer* p1 = &c1;

    // 2. Accessing runs via dereferencing the pointer
    cout << (*p1).runs << endl; 

    // 3. Printing current average
    cout << c1.avg << endl;

    // 4. Changing average using the pointer
    (*p1).avg = 77.5; 

    // 5. Printing the updated average to confirm it changed
    cout << c1.avg << endl;

    return 0;
}