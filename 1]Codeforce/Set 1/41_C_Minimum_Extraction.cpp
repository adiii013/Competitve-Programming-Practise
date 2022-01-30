#include<bits/stdc++.h>
using namespace std;

#define vi vector<int>
#define vii vector<int,int>
#define rep(a,b,c) for(int a = b;a<c;a++)
#define pi pair<int,int>
#define all(a) (a).begin(),(a).end()

typedef long long ll;

int main(){
ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);

int t;cin>>t;
while(t--){
  int n;cin>>n;
  vi v(n);
  rep(i,0,n) cin>>v[i];
  if(n==1){
      cout<<v[0]<<endl;
      continue;
  }
  sort(all(v));
  int temp = v[0];
  int curr;
  int result = v[0];  
  rep(i,1,n){      
    v[i] = v[i] - temp;
    temp+=v[i]; 
    result = max(v[i],result);    
  }
  cout<<result<<endl;
}

return 0;
}