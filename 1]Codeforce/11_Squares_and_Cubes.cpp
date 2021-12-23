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
      set<int> b;
      for(int i =1;i*i<=a;i++) b.insert(i*i);
      for(int i = 1;i*i*i<=a;i++) b.insert(i*i*i);
      cout<<b.size()<<endl;
  }

return 0;
}