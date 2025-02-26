#include<iostream>
#include<vector>

using namespace std;

int findunique(vector<int> &vect ){
    int ans=0;

    for(int i=0;i<vect.size();i++){
        ans=ans^vect[i];
    }
    return ans;
}

int main(){
    
    vector<int>array{1,2,3,1,2,3,4,5,4,6,6};

    cout<< findunique(array);

}