#include<bits/stdc++.h>
using namespace std;

#define vi vector<int>
#define vii vector<int,int>
#define rep(a,b) for(int i = a;i<b;i++)
#define pi pair<int,int>

typedef long long ll;

int main(){
ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);

int t;cin>>t;

while(t--){
  int a;cin>>a;
  int arr[a],arrsort[a];
  rep(0,a) {
      cin>>arr[i];
      arrsort[i]=arr[i];
  }
  sort(arrsort,arrsort+a);
  multiset<int> s,t;
  int ans = 0;
  rep(0,a){
    s.insert(arr[i]);
    t.insert(arrsort[i]);
    if(s==t){
       ans+=(*s.rbegin()-*s.begin());
       s.clear();
       t.clear();
    }
  }
  cout<<ans<<endl;
}

return 0;
}