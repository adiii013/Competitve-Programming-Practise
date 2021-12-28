#include<bits/stdc++.h>
using namespace std;

#define vi vector<int>
#define vii vector<int,int>
#define rep(a,b) for(int i = a;i<b;i++)
#define pi pair<int,int>

typedef long long ll;

int sum(int height){
    return height*(height+1)/2;
}

int main(){
ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);

int t;cin>>t;

while(t--){
  int n;cin>>n;
  int height = 0;
  while(sum(height)<=n){
      height++;
  }
  cout<<height<<endl;
}

return 0;
}