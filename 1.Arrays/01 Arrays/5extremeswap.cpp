//extreme swap - swapping extreme of 8 space array , 1-8;2-7;3-6;4-5;
#include<iostream>
using namespace std;

void update(int arr[],int size){
    int start=0;
    int end= size-1;

    while(start<=end){
        if(start==end){
            cout<<arr[start];
            break;
        }
        if (start<end){
            cout<<arr[start]<<" ";
            cout<<arr[end]<<" ";

            start++;
            end--;
        }
        
    }
    cout<<endl;
}

void input(int arr[],int size){
    for(int i=0;i<size;i++){
        cin>>arr[i];
    }
}

int main(){
    int array[7];
    int brray[8];

    input(array,7);
    input(brray,8);

    update(array,7);
    update(brray,8);

}