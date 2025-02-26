#include<iostream>
using namespace std;


bool linesearch(int arr[],int size,int key){
    for(int i=0;i<size;i++){
        if(key==arr[i]){
            return true;
        }
    }
     return false;

}


int main(){

    int array[10]={2,3,4,6,8,9,10,11,12,14};

    cout<<"Enter the key to check ";
    int key;
    cin>>key;


    int ans = linesearch(array,10,key);

    if(ans){
        cout<<"Found";
    }
    else{
        cout<<"Not Found ";
    }

    

}