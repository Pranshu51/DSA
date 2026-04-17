#include <iostream>
using namespace std;

//JAB CLASS BANENGE TO KOI MEMORY ALLOCATE NHI HOTA H, JAB HUM OBJECT BANAYENGE TAB MEMORY ALLOCATE HOGA, CLASS TO BAS EK BLUEPRINT HOTA H, OBJECT US BLUEPRINT KA INSTANCE HOTA H

//CONSTRUTORS IN C++    
//ye by default hota h class ke andar agar hum khud se constructor define nhi karte to compiler khud se ek default constructor bana deta h
//->hidden hota h aur uska naam class ke naam ke barabar hota h
//->initialization ke liye use hota h
//->constructor ka return type nhi hota h
//->constructor overloading bhi hota h
//->constructor ka use karke hum apne object ke liye initial values set kar sakte hai
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



//DESTRUCTORS IN C++
//ye by default hota h class ke andar agar hum khud se destructor define nhi karte to compiler khud se ek default destructor bana deta h
//->hidden hota h aur uska naam class ke naam ke barabar hota h
//->destructor ka return type nhi hota h
//->destructor ka use karke hum apne object ke liye memory deallocate kar sakte hai
//->destructor ka use karke hum apne object ke liye memory deallocate kar sakte hai
//->destructor ka use karke hum apne object ke liye memory deallocate kar sakte hai

//jab hum dynamically memory allocate karte hai to humein manually us memory ko deallocate karna padta hai, aur destructor ka use karke hum apne object ke liye memory deallocate kar sakte hai
//kab call hota h? when object goes out of scope, ya jab hum manually delete keyword ka use karke object ko delete karte hai, ya jab program end hota h
//jitne objectohnge utni baar destrutor chlega same for constructor also


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


//deep copy=obj 1 banenge fir obj2 banaenge par object 2 ko dusri jagah point karenge and then object 1 kki value ko object 2 me copy karenge, isliye dono object alag memory location ko point karenge, isliye agar hum ek object ke value ko change karte hai to dusre object ke value change nhi hoti hai, isliye ise deep copy kehte hai kyuki INDEPENDENT HOTE H


//COPY CONSTRUCTOR
// Bike(bike b) agr pass by value kara to dikkat aaaegai yuki ye parameter ki copy banegi aur khud parameter copy banane ke lie copy constructor ko call krega to ye ek infinite loop ban jega  isiliye humesha pass by reference karna chahiye copy constructor me, taki ye parameter ki copy na banaye aur directly us parameter ko use kare, isiliye copy constructor me pass by reference karna chahiye

// 



//STATIC MEMBERS


//same for all objects
//belogs to the class not to the object
// classname::staticMemberName; //ye syntax hota h static member ko initialize karne ke liye, aur iska value class ke multiple objects ke baad bhi maintain rahega, kyuki ye static member hai, aur iska value class ke multiple
//static keyword is used with a variable to make memory of the variable static once a static variable is declared its memory cant be changed


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
//static member object banne se pehle hi memory allocate ho jati h  to hum inhe object se bhi access kar skte h aur resolution operator se dirsct bhi access kar skte h aur ye har bbject ke lie same hoga kyuki ye static member hai, aur iska value class ke multiple objects ke baad bhi maintain rahega, kyuki ye static member hai, aur iska value class ke multiple objects ke baad bhi maintain rahega, kyuki ye static member hai

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
// cout<<"Value of global b: "<<::b<<endl;//10 ye ilaka bataga ki konse bki baat kr rhe h
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


class A{
    private:
    int a_ka_private;//can't be accessed and can't be inherited
    protected:
    int a_ka_protected;//can't be accessed but can be inherited
    public:
    int a_ka_public;//can be accessed and can be inherited
};
//jb hum b class me public banenge to a_ka_public public rahega, a_ka_protected protected rahega, a_ka_private inherit nhi hoga,protected pehle se hi high security me h to neeche pubnic nhi bnega
class B: public A{//public inheritance=>a_ka_public is public in B, a_ka_protected is protected in B, a_ka_private is not accessible/inherites in B
    void display(){
        cout<<a_ka_public<<endl;//accessible
        cout<<a_ka_protected<<endl;//accessible
        // cout<<a_ka_private<<endl;//not accessible
    }
};


int main(){
    B b;
    b.a_ka_public = 10;//accessible
    // b.a_ka_protected = 20;//not accessible
    // b.a_ka_private = 30;//not accessible
}

//LOW SECURITY SE HIGH SECURITY ME JAA SKTE H