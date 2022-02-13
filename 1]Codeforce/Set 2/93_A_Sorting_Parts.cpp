#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

 
int main(){
ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);

int t;cin>>t;
while(t--){
  int n;cin>>n;
  vector<int> v(n),temp(n);
  for(int i = 0;i<n;i++){
      cin>>v[i];
      temp[i] = v[i];
  }
  sort(temp.begin(),temp.end());
  bool flag = true;
  for(int i = 0;i<n-1;i++){
     if(v[i]!=temp[i]){
         flag = false;
         break;
     }
  }
   if(flag){
       cout<<"NO"<<endl;
   }
   else cout<<"YES"<<endl;
}
return 0;
}