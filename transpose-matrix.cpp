#include<iostream>
#include<vector>

using namespace std;

/*THE ENTIRE LOGIC IS BASED ON SWAPPING THE FIRST ROW WITH THE FIRST COLUMN . BUT WE HAVE TO MAKE j RUN FROM 0 TO i , SO AS TO ENSURE THAT THE 
ELEMENT ALREADY SWAPPED IS NOT SWAPPED AGAIN . SO WE ONLY SWAP THE ELEMENTS UPTO THE DIAGONAL FOR A PARTICULAR ROW.*/

void transposeArray(vector<vector<int>>& arr,int n){
    for(int i=0;i<n;i++){
        for(int j=0;j<i;j++){
            swap(arr[i][j],arr[j][i]);
        }
    }
    return;
}

void displayArray(vector<vector<int>>& arr , int n){
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
    return;
}

int main(){
    int n;
    cout<<"Enter the size of the square matrix :- "<<endl;
    cin>>n;

    vector<vector<int> > matrix(n,vector<int>(n));

    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cin>>matrix[i][j];
        }
    }

    cout<<"BEFORE TRANSPOSE"<<endl;
    displayArray(matrix,n);

    transposeArray(matrix,n);

    cout<<"AFTER TRANSPOSE"<<endl;
    displayArray(matrix,n);

return 0;
}