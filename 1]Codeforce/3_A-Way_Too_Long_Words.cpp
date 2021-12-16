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
    string s;cin>>s;
    int count  = 0;
    int len = s.length();
    if(len<=10) cout<<s<<endl;
    else{
      cout<<s[0]<<len-2<<s[len-1]<<endl;
    }
  }
 
return 0;
}