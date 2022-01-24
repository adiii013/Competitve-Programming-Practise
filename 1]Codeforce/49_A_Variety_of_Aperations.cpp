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
  int a,b;cin>>a>>b;
  if(abs(a-b)%2!=0)cout<<-1<<endl;
  else if(a==b && a==0 && b==0) cout<<0<<endl;
  else if(a==b) cout<<1<<endl;
  else cout<<2<<endl;
}

return 0;
}