#include<iostream>
using namespace std;
bool findarray(int arr[][3], int col ,int row,int key){
    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            if(arr[i][j]==key){
                return true;
            }
        }
    }return false;    

}


int main(){
    int key;
    cin>>key;
    int arr[3][3]={{10,12,15},{19,17,24},{26,29,22}};

    
    if(findarray(arr,3,3,key)){
        cout<<"Key is found ";
    }
    else{
        cout<<"Key is not found ";
    }
}