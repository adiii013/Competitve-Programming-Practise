#include<bits/stdc++.h>
using namespace std;

#define vi vector<int>
#define vii vector<int,int>
#define rep(a,b,c) for(int a = b;a<c;a++)
#define pi pair<int,int>
#define all(a) (a).begin(),(a).end()

typedef long long ll;

int main(){
ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);

int arr[1000];
int count = 1;
rep(i,0,1000){
  if(count%3==0 || count%10==3) count++;
  if(count%3==0 || count%10==3) count++;
  arr[i] = count;
  count++;
}
int t;cin>>t;
while(t--){
  int n;cin>>n;
  cout<<arr[n-1]<<endl;
}

return 0;
}