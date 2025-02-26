#include<iostream>
using namespace std;


void update(int arr[],int size){
    arr[1]=26;
    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

void printArray(int arr[], int size){

    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}


int main(){
    int arr[5]={1,2,3,4,5};
    int brr[5]={1,2};
    int crr[5]={1};
    int drr[5]={0};
    int err[5];
    int frr[5];
    cout<<"Enter the array digits ";

    for(int i=0;i<5;i++){
        cin>>frr[i];
    }

    printArray(arr,5);
    printArray(brr,5);
    printArray(crr,5);
    printArray(drr,5);
    printArray(err,5);
    printArray(frr,5);

    //pass by reference logic
    update(frr,5);
    printArray(frr,5);
}