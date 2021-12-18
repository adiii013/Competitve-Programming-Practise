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
      ll a1,a2,b1,b2;cin>>a1>>a2>>b1>>b2;
      int a = min(a2,b2);
      a2 -= a;
      b2 -= a;
      if(a2>=7) cout<<'>'<<endl;
      else if(b2>=7) cout<<'<'<<endl;
      else{
          rep(0,a2) a1*=10;
          rep(0,b2) b1*=10;
          if(a1>b1) cout<<">"<<endl;
          else if(a1<b1) cout<<"<"<<endl;
          else cout<<'='<<endl;
      }
  }

return 0;
}