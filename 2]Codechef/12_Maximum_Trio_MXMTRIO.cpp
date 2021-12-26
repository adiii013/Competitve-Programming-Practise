#include<bits/stdc++.h>
using namespace std;

#define vi vector<int>
#define vii vector<int,int>
#define rep(a,b) for(int i = a;i<b;i++)
#define pi pair<int,int>
#define ll long long
#define sza(x) ((int)x.size())
#define all(a) (a).begin(),(a).end()

int main(){
ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);

int t;cin>>t;

while(t--){
  int n;cin>>n;
  vector<long long> a(n);
  for(long long i = 0;i<n;i++) cin>>a[i];
  sort(all(a));
  cout<<(a[sza(a)-1]-a[0])*a[sza(a)-2]<<endl;
}

return 0;
}