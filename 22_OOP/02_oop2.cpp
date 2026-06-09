#include<iostream>
using namespace std;

//PASSING CLASS OBJECTS TO FUNCTIONS
#include <iostream>
using namespace std;

class Student {
public:
    string name;
    int score;
};

// Function that accepts a Student object by reference (&)
void displayReport(const Student &s) { 
    cout << "Student: " << s.name << " | Score: " << s.score << endl;
}

int main() {
    Student s1;       // Creating the object
    s1.name = "Alex";
    s1.score = 92;

    // Passing the object 's1' to the function
    displayReport(s1); 

    return 0;
}
/*
In object-oriented programming (OOP), an object is a self-contained instance of a class that bundles both data (attributes) and behaviors (functions/methods) together.
Think of a class as a blueprint, and an object as the actual entity built from that blueprint.
Here is a quick breakdown of what makes up an object:
State (Attributes/Data): What the object knows or contains (e.g., a Car object might have color: red and speed: 60).
Behavior (Methods/Functions): What the object can do (e.g., the Car object can accelerate() or brake()).
Identity: A unique address or presence in the computer's memory that distinguishes it from other objects of the same class.*/
class Gun{
    public:
    int ammo;
    int damage;
    int scope;
};
class Player{
    private:
     class Helmet{
        public: // Made public so Player can access these through functions
        int hp;
        int level;

        // Added these to match the logic in your setHelmet function
        void setHp(int hp) { this->hp = hp; }
        void setLevel(int level) { this->level = level; }
        int getHp() { return hp; }
        int getLevel() { return level; }
    };

 private:
    int health;
    int age;
    int score;
    bool alive;
    Gun gun;//iski class bahar h object ander lia hua h 
    Helmet helmet;

public:
    int getHealth(){
        return health;
    }
    int getAge(){
        return age;
    }
    int getScore(){
        return score;
    }
    int getAlive(){
        return alive;
    }

    Gun getGun(){
        return gun;
    }
    
    void setHealth(int health){
        this->health = health;
    }
    void setAge(int age){
        this->age = age;
    }
    void setScore(int score){
        this->score = score;
    }
    void setAlive(bool alive){
        this->alive = alive; 
    }
    void setGun(Gun gun){
        this->gun = gun;
    }

    public:
    // 
    void setHelmet(int level){
        Helmet *helmet = new Helmet; // Dynamic allocation
        helmet->setLevel(level);
        int health = 0;

        if(level == 1)
            health = 25;
        else if(level == 2)
            health = 50;
        else if(level == 3)
            health = 100;
        else
            cout << "error, invalid level!!";

        helmet->setHp(health);
        this->helmet = *helmet; // Store the helmet in the class member
        
        delete helmet; // Added this to prevent the memory leak mentioned in your comment!
        
        // Note: Since 'helmet' is a local pointer, it will leak memory 
        // unless you delete it here or store it as a class member!
    }
    void getHelmet(){
        cout<<"Helmet Level: "<<helmet.getLevel()<<endl;
        cout<<"Helmet HP: "<<helmet.getHp()<<endl;
    }
};

int addScore(Player p1, Player p2){
    int totalScore = p1.getScore() + p2.getScore();
        return totalScore;
}

Player getMaxScorePlayer(Player p1, Player p2){
    if(p1.getScore() > p2.getScore()){
        return p1;
    }
    else{
        return p2;
    }
}

int main(){//creating objects of the class Player so it is also a type of data type
    Player pranshu;//MEMORY ALLOCATION STATICALLY
    pranshu.setHealth(100);
    pranshu.setAge(20);
    pranshu.setScore(1000);
    pranshu.setAlive(true);
    pranshu.setHelmet(2);

    Player rishav;//MEMORY ALLOACATION STATICALLY
    rishav.setHealth(90);
    rishav.setAge(21);
    rishav.setScore(900);
    rishav.setAlive(true);
    rishav.setHelmet(3);

    Gun akm;
    akm.ammo = 30;
    akm.damage = 50;
    akm.scope = 4;

    Gun awm;
    awm.ammo = 5;
    awm.damage = 100;
    awm.scope = 8;

    Gun gun1 = pranshu.getGun();
    cout<<"Pranshu's Gun Ammo: "<<gun1.ammo<<endl;
    cout<<"Pranshu's Gun Damage: "<<gun1.damage<<endl;
    cout<<"Pranshu's Gun Scope: "<<gun1.scope<<endl;

    pranshu.getHelmet();

    Player *king = new Player;//MEMORY ALLOCATION DYNAMICALLY
    //best way to set values for dynamically allocated objects is to use pointer notation
    king->setHealth(80);
    cout<<"kingHealthWithoutObject: "<<king->getHealth()<<endl;


    // Player kingObject = *king;//DYNAMICALLY ALLOCATED OBJECT
    // //agr bina object banye direct karna to *king.setHealth(80); //ye bhi sahi hoga
    // (*king).setHealth(80); //ye bhi sahi hoga
    // cout<<"kingHealthWithoutObject: "<<(*king).getHealth()<<endl;
    // kingObject.setHealth(80);
    // cout<<"kingHealthWithObject: "<<kingObject.getHealth()<<endl;
    // kingObject.setAge(22);//dynamically allocated object ke liye bhi hum same tarike se set kar sakte hai
    // kingObject.setScore(800);

    // cout<<addScore(pranshu, rishav);
    // Player Sachin = getMaxScorePlayer(pranshu, rishav);
    // cout<<endl<<"Player with maximum score is: "<<Sachin.getScore()<<endl;

    // delete king; // Deallocating the dynamic Player object



    //Array of objects
    Player players[10]={pranshu,rishav}; //array of 10 Player objects allocated statically
    cout<<"Player 1 Health: "<<players[0].getHealth()<<endl;
    cout<<"Player 2 Health: "<<players[1].getHealth()<<endl;
}



//STATIC ALLOCATION VS DYNAMIC ALLOCATION OF OBJECTS

//STATIC ALLOCATION(stack memory)=>1. Ye compile time memory allocation h.Ye program start hone se pele RAM me store ho jati h iska mtlb hota hai ki hum class ke objects ko stack memory me allocate krte hai, aur jab hum function se bahar nikalte hai to wo automatically destroy ho jate hai.
//DYNAMIC ALLOCATION(heap memory->Real time)=>Ye runtime memory allocaiton h . Ye program chlne ke dauran allocate hoti h  iska mtlb hota hai ki hum class ke objects ko heap memory me allocate krte hai, aur humein manually unhe deallocate karna padta hai.
//DM=> eg->int *ptr = new int; //dynamic memory allocation for an integer
//delete ptr; //deallocating the memory correct 