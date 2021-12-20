#include<iostream>
using namespace std;

int main(){
  int n;cin>>n;
  int arr[n];
  for(int i = 0;i<n;i++){
      cin>>arr[i];
  }
  int a;cin>>a;
  bool flag = false;
  for(int i = 0;i<n;i++){
      if(arr[i]==a){
          cout<<i+1<<endl;
          flag = true;
          break;
      }
  }
  if(flag == false){
      cout<<-1<<endl;
  }
  return 0;
}