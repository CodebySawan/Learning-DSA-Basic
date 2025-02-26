#include<iostream>
#include<vector>
#include<climits>

using namespace std;

int main(){

    vector<int>arr{1,2,2,3,4,5,6};
    vector<int>brr{7,2,3,3,8};

    vector<int>ans;

    for(int i=0;i<arr.size();i++){
        for(int j=i+1;j<arr.size();j++){
            if(arr[i]==arr[j]){
                arr[j]=INT_MIN;
            }
        }
    }

    for(int i=0;i<brr.size();i++){
        for(int j=i+1;j<brr.size();j++){
            if(brr[i]==brr[j]){
                brr[j]=INT_MIN;
            }
        }
    }

    for(int i=0;i<arr.size();i++){
        for(int j=0;j<brr.size();j++){
            if(arr[i]==brr[j]){
                brr[j]=INT_MIN;
                break;
            }
        }
    }

    for(int i=0;i<arr.size();i++){
        if(arr[i]!=INT_MIN){
            ans.push_back(arr[i]);
        }
    }

    for(int i=0;i<brr.size();i++){
        if(brr[i]!=INT_MIN){
            ans.push_back(brr[i]);
        }
    }


    for(auto k :ans){
        cout<<k <<" ";
    }








}

