#include<iostream>
using namespace std;

int main(){

    //declaration
    int arr[4][3];


    //initialisation
    int brr[4][3]={{1,2,3},{4,5,6},{7,8,9},{10,11,12}};


    //print 
    cout<<brr[2][1]<<endl; //8

    //operations
    brr[2][1] =13;
    cout<<brr[2][1]<<endl;

    //printing full 2d-array
    for(int i=0;i<4;i++){
        for(int j=0;j<3;j++){
            cout<<brr[i][j]<<" ";
        }cout<<endl;
    }cout<<endl;


    //column wise;
    for(int i=0;i<3;i++){
        for(int j=0;j<4;j++){
            cout<<brr[j][i]<<" ";
        }cout<<endl;
    }cout<<endl;



    //Taking input -- same process

    int crr[4][5];

    for(int i=0;i<4;i++){
        for(int j=0;j<5;j++){
            cin>>crr[i][j];
        }
    }cout<<endl;

    for(int i=0;i<4;i++){
        for(int j=0;j<5;j++){
            cout<<crr[i][j]<<" ";
        }cout<<endl;
    }cout<<endl;









}