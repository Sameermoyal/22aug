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
        int min=i;
        for(int j=i+1;j<arr.size();j++){
            if(arr[min]>arr[j]){
                min=j;
            }
        }
        swap(arr[min],arr[i]);
    }
    for(auto it :arr){
        cout<<it<<" ";
    }
    
}