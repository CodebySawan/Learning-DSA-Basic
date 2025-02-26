#include<iostream>
using namespace std;


void print(int arr[],int size){
    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }cout<<endl;
}


void reverse(int arr[],int size){
    int start=0;
    int end=size-1;

    while(start<=end){
        swap(arr[start],arr[end]);
        start++;
        end--;
    }

}


void input(int arr[],int size){
    for(int i=0;i<size;i++){
        cin>>arr[i];
    }
}

int main(){
    int arr[7];
    int brr[8];

    input(arr,7);
    input(brr,8);

    reverse(arr,7);
    reverse(brr,8);

    print(arr,7);
    print(brr,8);

}