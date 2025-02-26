#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

int main(){

    //create
    vector<int>arr;

    //size and capacity
    cout<<arr.size()<<endl;
    cout<<arr.capacity()<<endl;  //greater than equal to size;

    //size deciding for array
    vector<int>drr(10);
    for(int i=0;i<drr.size();i++){
        cout<<drr[i]<<" ";
    }cout<<endl;

    cout<<drr.size()<<endl;

    //inserting method-3
    arr.push_back(5);
    arr.push_back(6);
    cout<<arr.front()<<endl;
     cout<<arr[1]<<endl;
     cout<<arr.at(1)<<endl;
    cout<<arr.size()<<" "<<endl;

    for(int i=0;i<arr.size();i++){
        cout<<arr[i]<<" ";
    }cout<<endl;

    //inserting method-2
    int n;
    cin>>n;
    vector<int>brr(n,2);
    for(int i=0;i<brr.size();i++){
        cout<<brr[i]<<" ";
    }cout<<endl;

    //inserting method -1
    vector<int>crr{2,3,4,5};
}