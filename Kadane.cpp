#include<iostream>
using namespace std;

int Max_SubArray(int arr[],int n){
    int cs=0;
    int largest=0;
    for(int i=0;i<n;i++){
        cs=cs+arr[i];
        if(cs<0)
            cs=0;
        largest=max(largest,cs);
    }
    return largest;
}

int main(){
    int arr[]={5,0,-1,0,1,2,-1};
    int n=sizeof(arr)/sizeof(int);
    cout<<Max_SubArray(arr,n)<<endl;
    return 0;
}