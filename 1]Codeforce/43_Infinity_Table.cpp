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

int t;cin>>t;
while(t--){
  int n;cin>>n;
  int count = 1,start = 1,row=1;
  while(n>count){
      start+=2;
      count+=start;
      row++;
  }
  int column = 1;
  int temp = row;
  while(count!=n){
    if(column<temp){
        column++;
    }
    else row--;
    count--;
  }
  cout<<row<<" "<<column<<endl;

}

return 0;
}