#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

 
int main(){
ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);

int t;cin>>t;
while(t--){
  int a,b;cin>>a>>b;
  
  if(a==0){
      cout<<1<<"\n";
      continue;
  }

  cout<< a+2*b+1<<"\n";
}

return 0;
}