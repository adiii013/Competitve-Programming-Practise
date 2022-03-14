#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);

int t;cin>>t;
while(t--){
    int n;cin>>n;
  vector<int> v1;
  string s;cin>>s;
  map<int,int> mp;
  for(int i = 0 ;i<n;i++){
      int j  = i;int count = 0;
      while(s[i]==s[j]){
          j++;
          count++;
      }
      i = j-1;
      v1.push_back(count);
  }
  int total = 0;
  for(int i = 0;i<v1.size();i++){
      total += (v1[i]%2 + v1[i]/2);
  }
  cout<<total<<endl;
}
return 0;
}