// #include <iostream>
// #include <vector>
// using namespace std;
// class stack
// {
//     vector<int> v;
// public:
//     void push(int data)
//     {
//         v.push_back(data);
//     }
//     void pop()
//     {
//         v.pop_back();
//     }
//     int top()
//     {
//         return v[v.size() - 1];
//     }

// } ;
// int main()
// {
//     stack s;
//     s.push(10);
//     s.push(20);
//     cout << "Top element: " << s.top() << endl; 
//     s.pop();
//     cout << "Top element after pop: " << s.top() << endl; 
//     return 0;
// }

#include<iostream>
#include<stack>
using namespace std;
class myStack {
    stack<int> s;
public:
    void push(int data) {
        s.push(data);
    }
    void pop() {
        s.pop();
    }
    int top() {
        return s.top();
    }
};
            