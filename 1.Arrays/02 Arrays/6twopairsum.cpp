#include<iostream>
#include<vector>

using namespace std;

int main(){
    int n ,k ;

    cout<<"making an array\n";
    cout<<"Enter the size .\n";
    cin>>n;

    vector<int>arr(n);
    
    cout<<"Enter the elments .\n";

    for(int i=0;i<arr.size();i++){
        cin>>arr[i];
    }

    cout<<"Enter the two value sum .\n";
    cin>>k;

    bool found = false;

    for(int i=0;i<arr.size();i++){
        for(int j=i+1;j<arr.size();j++){
            if(arr[i]+arr[j]==k){
                cout<<arr[i]<<" ";
                cout<<arr[j];
                cout<<endl;  

                found= true;        
            }
        }
    }

    if(!found){
        cout<<" NO PAIR FOUND";
    }

}