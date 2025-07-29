#include<iostream>
#include<string>
using namespace std;
class Teacher{
    private:
        double salary;
    public:
        string name;
        int age;
        string subject;
        string dept;

        // Non Parameterized constructor 
        Teacher(){
            cout<<"Default constructor called"<<endl;
            dept = "CSIT";
        }
        // Parameterized constructor
        Teacher(string name, int age, string subject, double salary){
            cout<<"Parameterized constructor called"<<endl;
            this->name = name;
            this->age = age;
            this->subject = subject;
            this->salary = salary;
        }
        // Copy constructor
        Teacher(const Teacher &obj){
            cout<<"Copy constructor called"<<endl;
            this->name = obj.name;
            this->age = obj.age;  
            this->subject = obj.subject;
            this->salary = obj.salary;
        }

        //setter
        void setSalary(double salary){
            this->salary = salary;
        }
        //getter
        double getSalary(){
            return salary;
        }
};
int main(){
    Teacher t1;  // Default constructor
    t1.name = "Alice";
    t1.age = 25;
    t1.subject = "Maths";
    t1.setSalary(50000);
    cout<<t1.name<<" "<<t1.age<<" "<<t1.subject<<" "<<t1.getSalary()<<" "<<endl;

    Teacher t2(t1); // Copy constructor
    cout<<t2.name<<" "<<t2.age<<" "<<t2.subject<<" "<<endl;
    return 0;
}