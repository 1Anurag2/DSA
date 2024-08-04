#include<iostream>
using namespace std;
int fun1(int num){
static int num =4;
num++;
cout<<"Static memory allocation : "<<num<<endl;
}
int main(){
int b = 5;
fun1(b);
fun1(b);
fun1(b);
fun1(b);
fun1(b);
fun1(b);
fun1(b);
return 0;
}