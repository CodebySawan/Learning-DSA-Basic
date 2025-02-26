#include<iostream>
using namespace std;


void transpose(int arr1 [][3],int row, int col, int arr2[][3]){
    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            arr2[i][j]=arr1[j][i];
        }
    }
}

void printarray(int arr[][3],int row , int col){
    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            cout<<arr[i][j]<<" ";
        } cout<<endl;

    }cout<<endl;
}

int main(){
    int arr[3][3]={{10,12,15},{19,17,24},{26,29,22}};
    int transarray[3][3];

    printarray(arr,3,3);
    transpose(arr,3,3,transarray);
    printarray(transarray,3,3);
}