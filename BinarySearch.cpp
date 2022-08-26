#include<iostream>
using namespace std;
int BinarySearch(int arr[],int n,int key)
{
    int s=0;
    int e=n-1;
    while(s<=e){
        int mid=(s+e)/2;
        if(arr[mid] == key)
            return mid;
        else if(arr[mid] > key){
            e=mid-1;
        }
        else{
            s=mid+1;
        }
    }
    return -1;
}
int main()
{
    int arr[]={1,2,3,4,5,6,7,8,9};
    int n=sizeof(arr)/sizeof(int);
    int key=6;
    int index=BinarySearch(arr,n,key);
    if(index!=1){
        cout<<key<<"element at"<<index<<endl;
    }
    else{
        cout<<"element not found"<<endl;
    }
    return 0;
}
