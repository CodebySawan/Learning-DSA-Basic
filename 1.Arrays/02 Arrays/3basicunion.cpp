#include<iostream>
#include<vector>

using namespace std;

int main(){

    vector<int>arr{1,2,3,4,5};
    vector<int>brr{6,7,8};

    vector<int>ans;

    for(int i=0;i<arr.size();i++){
        ans.push_back(arr[i]);
    }

    for(int i=0;i<brr.size();i++){
        ans.push_back(brr[i]);
    }


    for(auto k:ans){
        cout<<k<<" ";
    }




}