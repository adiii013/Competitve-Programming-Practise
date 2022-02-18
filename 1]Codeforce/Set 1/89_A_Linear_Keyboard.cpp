#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

void diff(string &s,string &temp){
    int ans = 0;
    for(int i = 0;i<temp.length()-1;i++){
        int a = s.find(temp[i]);
        int b = s.find(temp[i+1]);
        ans+=abs(a-b);
    }
    cout<<ans<<endl;
}

int main(){
ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);

int t;cin>>t;
while(t--){
  string s;cin>>s;
  string temp;cin>>temp;
  if(temp.length()==1){
      cout<<0<<endl;
      continue;
  }
  diff(s,temp);
}
return 0;
}