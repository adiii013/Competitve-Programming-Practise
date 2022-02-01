#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

 
int main(){
ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);

int t;cin>>t;
while(t--){
  int n;cin>>n;
  int arr[n];
  int height = 1,count = 0;
  for(int i= 0;i<n;i++){
      cin>>arr[i];
      if(arr[i]==1){
          if(arr[i-1]==1) count+=5;
          else count++;
      }
  }
  for(int i = 0;i<n-1;i++){
      if (arr[i]==0 && arr[i+1]==0) count = -2;
  }
 cout<<count+height<<endl;
}
return 0;
}