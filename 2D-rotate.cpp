#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

void inpArr(vector<vector<int>>& arr,int n){
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cin>>arr[i][j];
        }
    }
}

void rotateArr(vector<vector<int>>& arr,int n){
    
    //FIRST TAKE TRANSPOSE AND THEN REVERSE THE ROWS TO GET 90 DEGRESS ROTATED MATRIX
    for(int i=0;i<n;i++){
        for(int j=0;j<i;j++){
            swap(arr[i][j],arr[j][i]);
        }
    }

    for(int i=0;i<n;i++){
        reverse(arr[i].begin(),arr[i].end());
    }
}

void displayArray(vector<vector<int>>& arr , int n){
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
}


int main(){
    int n;
    cout<<"Enter the size of the square matrix :- "<<endl;
    cin>>n;

    vector<vector<int> > matrix(n,vector<int>(n));

    inpArr(matrix,n);
    cout<<"BEFORE ROTATING"<<endl;
    displayArray(matrix,n);
    rotateArr(matrix,n);
    cout<<"AFTER ROTATING"<<endl;
    displayArray(matrix,n);

return 0;
}