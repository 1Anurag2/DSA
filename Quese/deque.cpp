#include<iostream>
#include<deque>
using namespace std;
int main(){
    deque<int> dq;
    dq.push_back(10);
    dq.push_back(20);
    dq.push_back(30);
    dq.push_front(5);
    dq.push_front(4);
    dq.push_front(3);
    dq.push_front(2);
    dq.push_front(1);
    for(int i:dq){
        cout<<i<<" ";
    }
    cout<<endl;
    dq.pop_back();
    dq.pop_front();
    for(int i:dq){
        cout<<i<<" ";
    }
    return 0;
}