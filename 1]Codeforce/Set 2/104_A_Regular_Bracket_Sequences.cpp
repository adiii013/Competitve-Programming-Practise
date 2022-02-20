#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

 
int main(){
ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);

int t;cin>>t;
while(t--){
  int n;cin>>n;
  string s = "";
  for(int i = 0;i<2*n;i++){
      if(i%2==0) s+='(';
      else s+=')';
  }
  cout<<s<<endl;
  int count = 4;
  for(int j = 0;j<n-1;j++){
  
      for(int i = 1;i<=count;i++){
          if(i<=count/2){
             if(s[i-1]==')'){
                 s[i-1]='(';
             }
          }
          else{
              if(s[i-1]=='('){
                  s[i-1]=')';
              }
          }
      }
      count=count+2;
      cout<<s<<endl;
  }
}
return 0;
}