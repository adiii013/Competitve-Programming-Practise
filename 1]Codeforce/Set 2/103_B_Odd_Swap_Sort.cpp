#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

 
int main(){
ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);

int t;cin>>t;
while(t--){
  int n;cin>>n;
  vector<int> even,odd,v1,v2;
  for(int i = 0;i<n;i++){
      int c;cin>>c;
      if(c%2==0){
          even.push_back(c);
          v1.push_back(c);
      }
      else{
          odd.push_back(c);
          v2.push_back(c);
      }
  }
  sort(v1.begin(),v1.end());
  sort(v2.begin(),v2.end());
  if(v1==even && v2==odd){
      cout<<"YES\n";
  }
  else cout<<"NO\n";
}
return 0;
}