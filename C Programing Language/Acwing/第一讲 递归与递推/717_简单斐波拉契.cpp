#include<iostream> 
#include<vector>
using namespace std;
vector<int>a;
int main(){
	int n;
	cin>>n;
	a.push_back(1);
	a.push_back(1);
	for(int i = 2;i<n;i++)
		a.push_back(a[i-1]+a[i-2]);
	for(auto x : a){
		cout<<x<<" ";
		
	}
	return 0;
} 
