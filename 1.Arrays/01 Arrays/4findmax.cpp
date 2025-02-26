#include<iostream>
#include<climits>
using namespace std;


int maxfind(int arr[],int size){
    int max = INT_MIN;

    for(int i=0;i<size;i++){
        if(arr[i]>max){
            max=arr[i];
        }
    }

    cout<<max;
}

int main(){
    int array[10];
    cout<<"Enter the array ";

    for(int i=0; i<10; i++){
        cin>>array[i];
    }

    maxfind(array,10);


}
