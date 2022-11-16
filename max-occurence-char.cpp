#include<iostream>
#include<stdio.h>
#include<string>
using namespace std;



char getMaxOccuringChar(string str)
    {
        // Initialize an array of zero's and map each character to a position , e,g:- a-->0, b-->1, c-->2,.... z-->25 and increase the count of the letter found in the array
        
        int arr[26]={0};
        for(int i=0;i<str.length();i++){
            int no=str[i]-'a';
            arr[no]++;
        }
        
        //Check for the position of the letter of maximum occurence
        
        int maxi=-1, ans=0;
        for (int i=0;i<26;i++){
            if(maxi<arr[i]){
                ans=i;
                maxi=arr[i];
            }
        }
    return 'a'+ans;
    }

int main(){
    string s;
    cin>>s;
    char ch=getMaxOccuringChar(s);
    cout<<ch<<endl;
    return 0;
}