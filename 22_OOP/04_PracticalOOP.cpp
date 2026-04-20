//POINTER TO OBJECT
// a->b means (*a).b-> means here a should  be pointer
#include <iostream>
#include <string>
using namespace std;

// class Cricketer {
// public:
//     string name;
//     int runs;
//     float avg;

//     Cricketer(string name, int runs, float avg) {
//         this->name = name;
//         this->runs = runs;
//         this->avg = avg;
//     }
// };

// // In your screen, this was being set up to show how pass-by-value works
// void change(Cricketer* c) {
//     c->avg=97;// (*c).avg = 99.9; // This only changes a COPY, not the original c1
// }

// int main() {
//     Cricketer c1("Virat Kohli", 25000, 55.2);
//     cout << "Before change: " << c1.avg << endl; // Should print 55.2
//     change(&c1);
//     cout << "After change: " << c1.avg << endl; // Should print 99.9
//     // 1. Create the pointer and point it to c1
//     Cricketer* p1 = &c1;
//     // // 2. Accessing runs via dereferencing the pointer
//      cout << p1->runs << endl;// cout << (*p1).runs << endl; 
//     // // 3. Printing current average
//     cout << c1.avg << endl;
//     // // 4. Changing average using the pointer
//     p1->avg = 77.5; // (*p1).avg = 77.5; 
//     // // 5. Printing the updated average to confirm it changed
//     cout << c1.avg << endl;

//     return 0;
// }



//DYNAMIC ALLOCATION

// int main(){
//     int* ptr =new int(10); // Dynamically allocate an integer and initialize it to 10
//     cout << *ptr << endl; // Output the value (should print 10)
//     //ye run time pe memory allocate karega heap me, aur jab hum new keyword use karte hai to hume delete keyword se memory free karna pdega
// }


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
void change(Cricketer* c) {
    c->avg=97;// (*c).avg = 99.9; // This only changes a COPY, not the original c1
}

int main() {
    Cricketer c1("Virat Kohli", 25000, 55.2);
    Cricketer* c2 = new Cricketer("Rohit Sharma", 20000, 48.5); // Dynamically allocate a Cricketer object
    int x=5;
    int *ptr = new int(x); // same as above
    cout<<c1.name<<c1.runs<<c1.avg<<endl; // Output the details of the dynamically allocated Cricketer
    cout<<c2->name<<c2->runs<<c2->avg<<endl;// cout<<(*c2).name<<(*c2).runs<<(*c2).avg<<endl; // Output the details using dereferencing
}




//USER DEFINED DATA TYPE
// create your own vector
