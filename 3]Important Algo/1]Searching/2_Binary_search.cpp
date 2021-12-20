#include<iostream>
using namespace std;

int binarySearch(int arr[],int l,int r,int a){
    if(l<=r){
        int mid = 1+ (r-l)/2;
        if(arr[mid]==a) return mid+1;
        if(arr[mid]>a) return binarySearch(arr,l,mid-1,a);
        else return binarySearch(arr,mid+1,r,a);
    }
    return -1;
}

int main(){
    int n;cin>>n;
    int arr[n];
    for(int i = 0;i<n;i++){
        cin>>arr[i];
    }
    int a;cin>>a;
    cout<<binarySearch(arr,0,n-1,a)<<endl;
    return 0;
}