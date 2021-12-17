#include<bits/stdc++.h>
using namespace std;

#define vi vector<int>
#define vii vector<int,int>
#define rep(a,b) for(int i = a;i<b;i++)
#define pi pair<int,int>

typedef long long ll;

int main(){
ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);

  int n,k;cin>>n>>k;
  int minutes = 240 - k;
  int arr[n];
  rep(1,n+1){
      int a = 5*i;arr[i-1]=a; 
  }
  int check=0;
 bool flag = true;
  rep(0,n){
      
      check += arr[i];
      if(check>minutes){
          cout<<i<<endl;
          flag = false;
          break;
      }
  }
  if(flag) cout<<n<<endl;

return 0;
}