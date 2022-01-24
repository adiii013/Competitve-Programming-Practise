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
  int n;cin>>n;
  int j = 2,k =3;
  rep(i,0,n){
    cout<<j<<" ";
    if(i & 1){
      j+=3;
    }
    else{
      j++;
    }
  }
  cout<<endl;
}

return 0;
}