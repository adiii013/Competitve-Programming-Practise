#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

 
int main(){
ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);

int t;cin>>t;
while(t--){
  int n;cin>>n;
  int maxie = 0;
  for(int i = 1;i<=n;i++){
      int c;cin>>c;
      maxie = max(c-i,maxie);
  }
  cout<<maxie<<endl;
}
return 0;
}