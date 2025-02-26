#include<iostream>
#include<vector>

using namespace std;


// void sortf(vector<int> &vect){
//     int start =0;
//     int end = vect.size()-1;

//     while(start<end){
//         if(vect[start]==0){
//             start++;
//         }
//         else if(vect[end]==1){
//             end--;

//         }
//         else{
//             swap(vect[start],vect[end]);
//         }
//     }
//}


void sortf(vector<int> &vect){
    int i =0;
    int start =0;
    int end = vect.size()-1;

    while(start<end){
        if(vect[i]==0){
            swap(vect[i],vect[start]);
            start++;
            i++;
        }
        else{
            swap(vect[i],vect[end]);
            end--;
        }
    }
}




void output(vector<int> &vect){
    for(int i=0;i<vect.size();i++){
        cout<<vect[i]<<" ";
    }cout<<endl;
}

void input(vector<int> &vect){
    for(int i=0;i<vect.size();i++){
        cin>>vect[i];
    }
}

int main(){

    int n;
    cout<<"Enter the size of Arrays.";
    cin>> n;
    vector<int>main(n);

    input(main);
    output(main);
    sortf(main);
    output(main);



}