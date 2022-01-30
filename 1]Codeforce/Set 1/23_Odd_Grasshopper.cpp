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

ll t;cin>>t;
while(t--){
  ll a,b;cin>>a>>b;
  ll count = b -(b%4)+1;
  while(count<=b){
      if(a%2==0){
          a -= count;
      }
      else{
          a += count;
      }
      count++;
  }
  cout<<a<<endl;
}

return 0;
}