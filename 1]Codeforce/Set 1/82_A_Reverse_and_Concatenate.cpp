#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

 
int main(){
ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);

int t;cin>>t;
while(t--){
  int a,b;cin>>a>>b;
  string s;cin>>s;
  string temp = s;
  reverse(s.begin(),s.end());
  if(b==0) cout<<1<<endl;
  else if(s==temp){
      cout<<1<<endl;
  }
  else{
     cout<<2<<endl;
  }

}
return 0;
}