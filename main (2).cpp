//bubble sort

#include<bits/stdc++.h>
using namespace std;

void swap(int &a,int &b){
    int temp=a;
    a=b;
    b=temp;
}

int main(){
    vector<int>arr={23,89,98,78,67,5,3,2,1} ;
    
    for(int i=0;i<arr.size();i++){
        
        for(int j=0;j<arr.size()-1-i;j++){
            if(arr[j]>arr[j+1]){
                 swap(arr[j],arr[j+1]);
            }
        }
       
    }
    for(auto it :arr){
        cout<<it<<" ";
    }
    
}