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
  if(n%2==0 && n>2){
    cout<<"YES"<<endl;
  }
  else{
    cout<<"NO"<<endl;
  }
 
return 0;
}