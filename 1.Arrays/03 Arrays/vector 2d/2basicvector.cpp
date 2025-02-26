#include<iostream>
#include<vector>
using namespace std;

void output(vector<vector<int>> &arr){

    for(int i=0;i<arr.size();i++){
        for(int j=0; j<arr[i].size();j++){
            cout<<arr[i][j]<<" ";
        }cout<<endl;
    }

}

int main(){
    vector<vector<int>> vect(3,vector<int>(5,1));

    output(vect);

    
}