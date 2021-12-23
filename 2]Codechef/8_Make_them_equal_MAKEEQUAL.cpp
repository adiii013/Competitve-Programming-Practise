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
    rep(0,a){
        cin>>arr[i];
    }  
    sort(arr,arr+a);
    cout<<arr[a-1] - arr[0]<<endl;
  }

return 0;
}