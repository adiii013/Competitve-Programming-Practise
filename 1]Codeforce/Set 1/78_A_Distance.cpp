#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

 
int main(){
ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);

int t;cin>>t;
while(t--){
  int a,b;cin>>a>>b;
  int dis = (a+b);
  int x = -1,y=-1;
  bool flag = false;
  for(int i = 0 ;i<=50;i++){
      for(int j = 0;j<=50;j++){
          if(2*(i+j) == dis && 2*(abs(a-i)+abs(b-j))==a+b){
              x = i,y = j;
              flag = true;
              break;
          }
      }
      if(flag) break;
  }
  cout<<x<<" "<<y<<endl;
}
return 0;
}