#include<iostream>
using namespace std;

void sumcol(int arr[][4],int row,int col){
    for(int i=0;i<col;i++){
        int sum =0;
        for(int j=0;j<row;j++){
            sum+=arr[j][i];
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
    sumcol(arr,3,4);
}