#include<bits/stdc++.h>
using namespace std;

#define vi vector<int>
#define vii vector<int,int>
#define rep(a,b) for(int i = a;i<b;i++)
#define pi pair<int,int>

typedef long long ll;

int main(){
ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);

  int n;cin>>n;
  while(n--){
      int p,q,m,n;cin>>p>>q>>m>>n;
      if((m*10+p)==(n*10+q)) cout<<"Draw"<<endl;
      else if((m*10+p)<(n*10+q)) cout<<"Chef"<<endl;
      else cout<<"Chefina"<<endl;
  }

return 0;
}