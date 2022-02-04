#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

 
int main(){
ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);

int t;cin>>t;
while(t--){
  int n;cin>>n;
  string arr[n-2];
  for(int i= 0;i<n-2;i++){
      cin>>arr[i];
  }
  string temp = "";
  for(int i = 0;i<n-2;i++){
      if(i==0) temp+=arr[i];
      else{
          string temp1 = arr[i-1];
          string temp2 = arr[i];
          if(temp2[0]!=temp1[1]){
              temp+=arr[i];
          }
          else{
              temp+=temp2[1];
          }
      }
  }
  while(temp.length()!=n) temp+='a';
  cout<<temp<<endl;
}
return 0;
}