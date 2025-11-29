#include<iostream>
#include<set>
using namespace std;
class Person{
    public:
    int age;
    string name;
    bool operator < (const Person &other) const{
        return age < other.age;
    }
};
int main(){
    set<int>s;    // for ascending order
    //set<int,greater<int>>s;    // for descending order
    s.insert(5);
    s.insert(3);
    s.insert(8);
    s.insert(1);
    s.insert(4);
    s.insert(4);
    s.insert(5);
    s.insert(3);
    s.insert(8);
    s.erase(3);
    if(s.find(5)!=s.end()){
        cout<<"Found 5"<<endl;
    }
    if(s.count(10)){
        cout<<"10 is present"<<endl;
    }
    else{
        cout<<"10 is not present"<<endl;
    }
    for(auto it = s.begin(); it!=s.end();it++){
        cout<<*it<<" ";
    }
    cout<<endl;
    Person p1 , p2 , p3, p4, p5;
    p1.age = 21; p1.name = "Anurag";
    p2.age = 30; p2.name = "John";
    p3.age = 12; p3.name = "Harry";
    p4.age = 48; p4.name = "Amit";
    p5.age = 54; p5.name = "Zack";
    set<Person>s1;
    s1.insert(p1);
    s1.insert(p2);
    s1.insert(p3);
    s1.insert(p4);
    s1.insert(p5);
    for(auto it = s1.begin(); it!=s1.end();it++){
        cout<<it->age<<" "<<it->name<<endl;
    }
    return 0;
}