#include<iostream>
using namespace std;

int main(){
    int array[10]={0,1,0,1,1,0,0,1,0,1};

    int zero=0;
    int one=0;

    for(int i=0;i<10;i++){
        if(array[i]==0){
            zero++;
        }
        else{
            one++;
        }
    }

    cout<<"no. of zeros are "<<zero<<endl<<"no. of ones are "<<one<<endl;
}