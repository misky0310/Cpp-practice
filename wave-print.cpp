/* THOUGHT PROCESS
 We iterate with respect to the column index
(1) If the column index is even , we print column wise normally i.e, col remains constant and row goes from 0 to i
(2) If the column index is odd , we print column wise in the reverse order , i.e, col remains constant and row goes from i-1 to 0 
IN SHORT :- even column index --> printing is done from top to bottom ,achieved by setting row=0
odd column index --> printing is done from bottom to top , achieved by setting row=extreme row i.e, i-1   */


#include<iostream>
using namespace std;

void inpArr(int arr[][4],int i,int j){
    for(int row=0;row<i;row++){
        for(int col=0;col<j;col++){
            cin>>arr[row][col];
        }
    }
}

void outArr(int arr[][4],int i,int j){
    for(int row=0;row<i;row++){
        for(int col=0;col<j;col++){
            cout<<arr[row][col]<<" ";
        }
        cout<<endl;
    }
}

void waveOutArr(int arr[][4],int i,int j){
    for(int col=0;col<j;col++){
        if(col%2==0){
            for(int row=0;row<i;row++){
                cout<<arr[row][col]<<" ";
            }
        }                                                 
        else{
            for(int row=i-1;row>=0;row--){
                cout<<arr[row][col]<<" ";
            }
        }
    }

    }


int main(){

    int arr[4][4];
    inpArr(arr,4,4);
    outArr(arr,4,4);
    cout<<endl;
    waveOutArr(arr,4,4);

return 0;
}