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
      int a;cin>>a;
      int arr[a];
      rep(0,a)cin>>arr[i];
      int l=0,r=a-1;
      if(arr[0]!=1 || a%2==0){
          cout<<"no"<<endl;
      }
      else{
          bool flag = true;
      while(l<=r){
          if(arr[l]!=arr[r]){
              flag = false;
              break;
          }
          l++;r--;
          if(arr[l-1]!=l){
              flag = false;
              break;
          }
      }
      if(flag) cout<<"yes"<<endl;
      else cout<<"no"<<endl;
      }
  }

return 0;
}