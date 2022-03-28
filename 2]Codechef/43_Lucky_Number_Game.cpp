#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

 
int main(){
ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);

int t;cin>>t;
while(t--){
  int n,a,b;cin>>n>>a>>b;
  int ali = 0,bob = 0, albo = 0;
  for(int i = 0;i<n;i++){
      int d;cin>>d;
      
      if(d%a==0 && d%b==0) albo++;
      else if(d%a==0) bob++;
      else if(d%b==0) ali++;
  }
  if(albo>0) bob++;
  if(bob>ali) cout<<"BOB\n";
  else cout<<"ALICE\n";
}
return 0;
}