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
    long long arr[7];
    rep(0,7) cin>>arr[i];
    int a = arr[0];
    cout<<a<<" ";
    for(int i = 1;i<7;i++){
      for(int j = i+1;j<7;j++){
        if(a+arr[i]+arr[j]==arr[6]){
          cout<<arr[i]<<" "<<arr[j]<<endl;
          break;
        }
      }
    }
  }
 
return 0;
}