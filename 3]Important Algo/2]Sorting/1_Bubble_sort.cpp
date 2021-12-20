#include<iostream>
using namespace std;

int main(){
    int n;cin>>n;
    int arr[n];
    for(int i = 0;i<n;i++){
        cin>>arr[i];
    }
    int counter = n;
    while(counter){
        for(int i = 0;i<counter-1;i++){
            if(arr[i+1]<arr[i]){
                int temp = arr[i+1];
                arr[i+1]=arr[i];
                arr[i]=temp;
            }
        }
        counter--;
    }
    for(int i = 0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}