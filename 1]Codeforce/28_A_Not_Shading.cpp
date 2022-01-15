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

int t;cin>>t;
while(t--){
  int n,m,r,c;
  cin>>n>>m>>r>>c;
  char arr[n][m];
  int row = 0,col = 0,row1=0,col1=0;
  rep(0,n){
      for(int j = 0 ;j<m;j++){
          cin>>arr[i][j];
          if(arr[i][j]=='B') row1++;
          
          }
  }
  rep(0,m) if(arr[r-1][i]=='B') row++;
  rep(0,n) if(arr[i][c-1]=='B') col++;
  if(row1==0) cout<<-1<<endl;
  else if(arr[r-1][c-1]=='B') cout<<0<<endl;
  else{
      if(row!=0 || col!=0)
      cout<<1<<endl;
      else cout<<2<<endl;
  }
}

return 0;
}