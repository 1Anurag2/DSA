#include <iostream>
using namespace std;
class Hero
{
private:
    int health;

public:

    Hero(){                // default costructor 
        cout<<"this ->"<<this<<endl;
    }

    Hero(int Health){     //paramerised constructor
        this->health = Health;
    }

    void print(){
        cout<<"health of anurag is : "<<health;
    }
    char name[10];
    char level;
    int gethealth(){
        return health;
    }
    void sethealth(int a){
        health = a;
    }
};
int main()
{

    Hero Anurag(100);
    Anurag.print();







    //static
    // Hero h1;
    // cout<<"Address of object : "<<&h1<<endl;
    
    // Hero *b = new Hero;

    // dynamic allocation
    // Hero *b = new Hero;
    // cout<<"level is : "<<(*b).level<<endl;
    // cout<<"Health is : "<<(*b).gethealth()<<endl;

    // cout<<"level is : "<<b->level<<endl;
    // cout<<"Health is : "<<b->gethealth()<<en dl;

    // h1.sethealth(30);
    // cout << "Health of ramesh : " << h1.gethealth() << endl;
    // cout << "size : " << sizeof(h1);
    return 0;
}