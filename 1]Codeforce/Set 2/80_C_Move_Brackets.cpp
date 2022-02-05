#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

 
int main(){
ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);

int t;cin>>t;
while(t--){
  int n;string s;
  cin>>n>>s;
  bool arr[n];
  memset(arr,1,sizeof(arr));
  for(int i= 0;i<n-1;i++){
      if(s[i]=='(' && arr[i]==1){
          for(int j = i+1;j<n;j++){
              if(s[j]==')' && arr[j]==1){
                  arr[i] = 0;
                  arr[j] = 0;
                  break;
              }
          }
      }
  }
  int count = accumulate(arr,arr+n,0);
  cout<<count/2<<endl;
}
return 0;
}