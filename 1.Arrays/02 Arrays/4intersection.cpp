#include<iostream>
#include<vector>

using namespace std;

int main(){
    vector<int>arr{1,2,2,3,4,5,6};
    vector<int>brr{2,2,4,6};

    vector<int>result;


    for(int i=0;i<arr.size();i++){
        for(int j=0;j<brr.size();j++){
            if(arr[i]==brr[j]){
                result.push_back(brr[j]);
                brr[j]=-1;
                break;
            }
        }
    }

    for( auto k : result ){
        cout<<k<<" ";
    }

}