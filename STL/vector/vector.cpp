#include <iostream>
#include <vector>
using namespace std;
int main(){
    // vector<int>vec;
    // vec.push_back(1);
    // vec.push_back(2);
    // vec.push_back(3);
    // cout<<vec.size()<<endl;
    // cout<<vec.capacity()<<endl;
    // vec.pop_back();
    // for(int value : vec){
    //     cout<<value<<" ";
    // }
    // cout<<endl;

    vector<int> vec = {1, 2, 3, 4, 5};
    cout << "capacity : " << vec.capacity() << endl;

    //forward loop
    vector<int>::iterator it;
    for( it=vec.begin() ; it!=vec.end();it++){
        cout<<*(it)<<" ";
    }
    cout<<endl;

    //backword loop
    for (auto it = vec.rbegin();it!=vec.rend();it++){
        cout<<*(it)<<" ";
    }

    cout<<endl;
    //earse
    vec.erase(vec.begin(),vec.begin()+2);
    for (auto it = vec.begin();it!=vec.end();it++){
        cout<<*(it)<<" ";
    }

    return 0;
}