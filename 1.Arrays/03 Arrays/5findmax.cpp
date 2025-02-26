#include<iostream>
#include<climits>
using namespace std;

int maxfind(int arr[][3],int col,int row){
    int max=INT_MIN;
    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            if(arr[i][j]>max){
                max=arr[i][j];
            }
        }
    }
    return max;
}


int main(){
    int arr[3][3]={{10,12,15},{19,17,24},{26,29,22}};

    
    cout<<"Max no. in the array "<<(maxfind(arr,3,3));

    
    
}