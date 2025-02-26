#include<iostream>
using namespace std;

void sumrow(int arr[][4],int row,int col){
    for(int i=0;i<row;i++){
        int sum =0;
        for(int j=0;j<col;j++){
            sum+=arr[i][j];
        }
        cout<<sum<<endl;
    }
}

void output(int arr[][4],int row,int col){
    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            cout<<arr[i][j];
        }
    }cout<<endl;
}

void input(int arr[][4],int row,int col){
    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            cin>>arr[i][j];
        }cout<<endl;
    }cout<<endl;
}

int main(){
    int arr[3][4];
    input(arr,3,4);
//output(arr,3,4);
    sumrow(arr,3,4);
}