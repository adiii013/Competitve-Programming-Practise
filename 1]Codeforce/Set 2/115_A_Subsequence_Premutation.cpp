#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

 
int main(){
ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);

int t;cin>>t;
while(t--){
  int n;cin>>n;
  string s,temp;cin>>s;
  temp = s;
  int count = 0;
  sort(temp.begin(),temp.end());
  for(int i = 0;i<n;i++){
      if(s[i]!=temp[i]) count++;
  }
  cout<<count<<endl;
}
return 0;
}