#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

 
int main(){
ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);

int t;cin>>t;
while(t--){
  int n,k;cin>>n>>k;
  if(k==1){
      cout<<"YES\n";
      for(int i = 0;i<n*k;i++){
        cout<<i+1<<endl;
      }
  }
  else{
      int m = n*k;
      int even = m/2;
      int odd = m-even;
      if(even%k!=0 && odd%k!=0){
          cout<<"NO\n";
      }
      else{
          int evenCount = 2;
          int oddCount = 1;
          cout<<"YES"<<endl;
          for(int i = 1;i<=n;i++){
              for(int j = 1;j<=k;j++){
                 if(evenCount<=m){
                     cout<<evenCount<<" ";
                     evenCount=evenCount+2;
                 }
                 else{
                     cout<<oddCount<<" ";
                     oddCount=oddCount+2;
                 }
              }
              cout<<endl;
          }
      }
  }
}
return 0;
}