#include<bits/stdc++.h>
using namespace std;

#define vi vector<int>
#define vii vector<int,int>
#define rep(a,b) for(int i = a;i<b;i++)
#define pi pair<int,int>

typedef long long ll;

int main(){
ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);

  int n;
	cin>>n;
	for(int i=0;i<n;i++)
	{
		int x;
		cin>>x;
		string a;
		string b;
		int sum=0;
		cin>>a>>b;
		int arr[x]={0};
		if(a[x-1]<b[x-1]){
			arr[x-1]=1;

		}
		for(int i=x-2;i>=0;i--){
			if(a[i]<b[i]){
			 	arr[i]=1;
			}
			else if(a[i]==b[i]){
				if(arr[i+1]==1){
					arr[i]=1;
				}
			}
		}
		for(int i=0;i<x;i++){
			sum+=arr[i];
		}
		cout<<sum<<endl;
	}

return 0;
}