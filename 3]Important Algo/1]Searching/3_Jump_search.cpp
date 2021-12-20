#include<iostream>
#include<cmath>
using namespace std;

int jumpSearch(int arr[],int n,int jump,int element){
    int low ;
    for(int i= 0;i<n;i+=jump){
        if(arr[i]==element) return i ;
        if(arr[i]<element) low = i ;
        if(arr[i]>element) break;
    }

    for(int i = low;i<n;i++){
        if(arr[i]==element)
        return i;
    }
    return -1;
}

int main(){
    int n;cin>>n;
    int arr[n];
    for(int i = 0;i<n;i++){
        cin>>arr[i];
    }
    int element ;cin>>element;
    int jump = sqrt(n);
    cout<<jumpSearch(arr,n,jump,element)<<endl;
    return 0;
}