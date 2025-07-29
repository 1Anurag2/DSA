#include<iostream>
#include<string>
using namespace std;

class Student{
    public:
        string name;
        double* cgpaptr;   // Pointer to dynamically allocated memory for CGPA
        
        Student(string name, double cgpa){
            this->name = name;
            cgpaptr = new double;  // Dynamically allocate memory for CGPA
            *cgpaptr = cgpa;      // Assign value to the dynamically allocated memory
        }
       
        // Student(const Student &obj){
        //     cout<<"Copy constructor called"<<endl;
        //     this->name = obj.name;
        //     this->cgpaptr = obj.cgpaptr;   // Shallow copy of the pointer
        // }

        Student(const Student &obj){
            this->name = obj.name;
            cgpaptr = new double;
            *cgpaptr = *obj.cgpaptr; // Deep copy of the pointer
        }

        ~Student(){
            cout<<"hi , I am deleting everything except dynamic memory "<<name<<endl;
            delete cgpaptr; // Free the dynamically allocated memory
        }

        void getinfo(){
            cout<<"Name: "<<name<<", CGPA: "<<*cgpaptr<<endl;
        }
};
int main(){
    Student s1("Anurag", 8.9);
    s1.getinfo();
    // Student s2(s1); 
    // *(s2.cgpaptr) = 9.5;
    s1.getinfo(); 
    // s2.getinfo(); // This will show that s1's CGPA is unchanged due to deep copy
    return 0;
}