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
  int a,b,c;cin>>a>>b>>c;
  int mem = 2*abs(a-b);
  if(a>mem || b>mem || c>mem){
      cout<<-1<<endl;
  }
  else{
      int ans1 = c+mem/2;
      int ans2 = c-mem/2;
      if(ans1<=mem) cout<<ans1<<endl;
      else cout<<ans2<<endl;
  }
  
}

return 0;
}