#include<bits/stdc++.h>
using namespace std;

#define vi vector<int>
#define vii vector<int,int>
#define rep(a,b) for(int i = a;i<b;i++)
#define pi pair<int,int>
#define all(a) (a).begin(),(a).end()

typedef long long ll;

int main(){
ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);

int t;cin>>t;
while(t--){
  int n,a,b;cin>>n>>a>>b;
  int ans = (n+1)/2;
  if((a+b)%2==0) cout<<0<<endl;
  else{
      cout<<1<<endl;
  }
}

return 0;
}