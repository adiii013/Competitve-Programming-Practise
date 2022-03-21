#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

 
int main(){
ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);

int t;cin>>t;
while(t--){
  string s;cin>>s;
  map<char,int> fr;
  for(char c: s) fr[c]++;
  for(int i =0;i<s.size();i++){
      if(--fr[s[i]]==0){
          cout<<s.substr(i)<<"\n";
          break;
      }
  }
}
return 0;
}