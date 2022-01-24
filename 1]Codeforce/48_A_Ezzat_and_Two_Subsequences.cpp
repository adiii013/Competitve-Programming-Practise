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
  float n;cin>>n;
  vector<float> v(n);
  double sum = 0;
  rep(i,0,n){
      cin>>v[i];
      sum+=v[i];
  }
  sort(all(v));
  sum-=v[n-1];
  sum/=(n-1);
  cout<<fixed<<setprecision(9)<<sum+v[n-1]<<endl;
}

return 0;
}