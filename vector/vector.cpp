#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
    vector<int>v(5,2);
    v.push_back(3);
    v.push_back(1);
    v.insert(v.begin()+1,4);
    v[3] = 55;
    v.erase(v.begin()+2);
    for(auto it = v.begin();it!=v.end();it++){
        cout<<*it<<" ";
    }
    cout<<endl;
    cout<<"Size: "<<v.size()<<endl;
    cout<<"Capacity: "<<v.capacity()<<endl;
    cout<<"Front: "<<v.front()<<endl;
    cout<<"Back: "<<v.back()<<endl;
    cout<<"Is Empty: "<<v.empty()<<endl;
    cout<<"Element at index 2: "<<v.at(2)<<endl;
    cout<<"Data pointer: "<<v.data()<<endl;
    cout<<"Max Size: "<<v.max_size()<<endl;


    sort(v.begin(),v.end());
    cout<<"Sorted Vector: ";
    for(auto it = v.begin();it!=v.end();it++){
        cout<<*it<<" ";
    }
    cout<<endl;

    // sort(v.rbegin(),v.rend());
    sort(v.begin(),v.end(),greater<int>());
    cout<<"Reverse Sorted Vector: ";
    for(auto it = v.begin();it!=v.end();it++){
        cout<<*it<<" ";
    }
    cout<<endl;

    cout<<"Binary Search for 4: "<<binary_search(v.begin(),v.end(),4)<<endl;
    cout<<"Lower Bound for 4: "<<lower_bound(v.begin(),v.end(),4)-v.begin()<<endl;
    cout<<"Upper Bound for 4: "<<upper_bound(v.begin(),v.end(),4)-v.begin()<<endl;

    cout<<"Find for 55: "<<find(v.begin(),v.end(),1)-v.begin()<<endl;

    v.clear();
    cout<<"Size after clear: "<<v.size()<<endl;
    return 0;
}