#include<iostream>
using namespace std;

void inpArr(int arr[][3],int row,int col){
    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            cin>>arr[i][j];
        }
    }
}

void outArr(int arr[][3],int row,int col){
    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            cout<<arr[i][j]<<" ";
        }
    cout<<endl;
    }
}

void largestRowSum(int arr[][3],int row,int col){
    int maxi=0;
    int ans=0;
    for(int i=0;i<row;i++){
        int sum=0;
        for(int j=0;j<col;j++){
            sum+=arr[i][j];
        }
        if(sum>maxi){        
            maxi=sum;       //Comparing the sum and then storing the row index in a variable
            ans=i;
        }
    }
    cout<<"The largest row sum is :- "<<maxi<<endl;
    cout<<"The row number is :- "<<ans+1<<endl;
}

int main(){
    int arr[3][3];
    inpArr(arr,3,3);
    outArr(arr,3,3);
    largestRowSum(arr,3,3);

return 0;
}