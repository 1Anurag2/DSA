#include <iostream>
using namespace std;
void show(int n){
    if(n == 0) return; 
    cout << n << " ";
    show(n - 1);
    
    cout << n << " ";  // it run after the recursive call returns  bactraking happens 
    
}
int main(){
    show(6);
    return 0;
}