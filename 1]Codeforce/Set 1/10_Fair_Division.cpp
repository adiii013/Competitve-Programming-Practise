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
      int a;cin>>a;
      int cn1 = 0, cn2 = 0;
      rep(0,a){
          int c;cin>>c;
          if(c == 1) cn1++;
          else cn2++;
      }
      if((cn1 + 2* cn2)%2!=0){
          cout<<"NO"<<endl;
      }
      else{
          int sum = (cn1 + 2* cn2)/2;
          if(sum%2 == 0 || (sum%2 == 1 && cn1!=0)){
              cout<<"YES"<<endl;
          }
          else{
              cout<<"NO"<<endl;
          }
      }
  }

return 0;
}