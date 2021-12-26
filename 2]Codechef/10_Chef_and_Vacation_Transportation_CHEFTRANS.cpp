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
  int x,y,z;cin>>x>>y>>z;
  int n = x+y;
  if(n<z) cout<<"PLANEBUS"<<endl;
  else if(n>z) cout<<"TRAIN"<<endl;
  else cout<<"EQUAL"<<endl;
}

return 0;
}