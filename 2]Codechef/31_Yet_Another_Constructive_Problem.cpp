#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

 
int main(){
ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);

int t;cin>>t;
while(t--){
  int n;cin>>n;
  int a = n;
  int b = n | (1<<28);
  int c = n | (1<<29);
  cout<<a<<" "<<b<<" "<<c<<endl;
}
return 0;
}