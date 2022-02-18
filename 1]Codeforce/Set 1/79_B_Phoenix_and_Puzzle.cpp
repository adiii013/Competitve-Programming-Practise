#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

bool isSquare(int x){
  int y = sqrt(x);
  return y*y==x;
}
 
int main(){
ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);

int t;cin>>t;
while(t--){
    int n;
  cin>>n;
  if(n%2==0 && isSquare(n/2)) cout<<"YES"<<endl;
  else if(n%4==0 && isSquare(n/4)) cout<<"YES"<<endl;
  else cout<<"NO"<<endl;
}
return 0;
}