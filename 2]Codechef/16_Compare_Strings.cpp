#include<bits/stdc++.h>
using namespace std;

#define vi vector<int>
#define vii vector<int,int>
#define rep(a,b) for(int i = a;i<b;i++)
#define pi pair<int,int>
#define all(a) (a).begin(),(a).end()

typedef long long ll;

int main(){
ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#ifndef ONLINE_JUDGE
freopen("D:\\Competitive Programming Practise\\5]Input Output\\input.txt","r",stdin);
freopen("D:\\Competitive Programming Practise\\5]Input Output\\output.txt","w",stdout);
#endif

int t;cin>>t;
while(t--){
  int n;cin>>n;
  string a,b;cin>>a>>b;
  int arr[n] = {0};
  if(a[n-1]<b[n-1]){
     arr[n-1] = 1;
  }
  for(int i = n-1;i>=0;i--){
      if(a[i]<b[i]){
          arr[i]=1;
      }
      else if(a[i]==b[i]){
          if(arr[i+1]==1){
              arr[i]=1;
          }
      }
  }
  int sum = 0;
  cout<<accumulate(arr,arr+n,sum)<<endl;
}

return 0;
}