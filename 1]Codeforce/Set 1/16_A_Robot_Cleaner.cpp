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
  int r,c,ri,rc,dr,dc;cin>>r>>c>>ri>>rc>>dr>>dc;
  bool flag = true;
  int count = 0;
  bool frontr,frontc,backr,backc;
  if(ri<r){
     frontr = true;
     backr = false;
  }
  else{
     frontr = false;
     backr = true;
  }
  if(rc<c){
     frontc = true;
     backc = false;
  }
  else{
     frontc = false;
     backc = true;
  }
  while(flag){
      if(ri == dr || rc == dc){
        break;
      }
      if(frontr) ri++;
      if(frontc) rc++;
      if(backr) ri--;
      if(backc) rc--;
      if(ri==r){
         frontr = false;
         backr = true;
      }
      if(rc == c){
         frontc = false;
         backc = true;
      }
      if(ri==1){
         frontr = true;
         backr = false;
      }
      if(rc == 1){
         frontc = true;
         backc = false;
      }
      count++;
  }
  cout<<count<<endl;
}

return 0;
}