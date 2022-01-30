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
      int a,b,n;cin>>a>>b>>n;
      int total = a*b;
      bool flag = true;
      while(flag){
           if(a%2 == 0){
               a /= 2;
           }
           else if(b%2==0){
               b /= 2;
           }
           else{
               flag =false;
           }
      }
      if(total/(a*b)>=n) cout<<"YES"<<endl;
      else cout<<"NO"<<endl;
  }

return 0;
}