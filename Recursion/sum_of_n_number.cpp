#include<iostream>
using namespace std;
int sumOfNum(int n){
    if(n==0) return 0;
    return n+sumOfNum(n-1);
}
int main(){
    cout<<"Sum of first 5 natural numbers is: " << sumOfNum(5) << endl;
    return 0;
}