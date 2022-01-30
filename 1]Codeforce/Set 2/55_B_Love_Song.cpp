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


  int a,b;cin>>a>>b;
  string s;cin>>s;
    int arr[a];

  rep(i,0,a){
      arr[i] = s[i]-96;
  }

  rep(i,1,a){
      arr[i] = arr[i-1]+arr[i];
  }
  
  while(b--){
      int l,r;cin>>l>>r;
      if(l==1) cout<<arr[r-1]<<endl;
      else{
          cout<<arr[r-1]-arr[l-2]<<endl;
      }
  }
return 0;
}