#include<iostream>
#include<vector>
using namespace std;
vector<int> n_vec;
vector<int> m_vec;
int n,m;
int dfs(int u)
{
	if(u==n)
		return 0; 
	for(int i=0;i<n-(n-m);i++)
	{
		m_vec.push_back(n_vec[u]);
	}
	for(auto x:m_vec)
		cout<<x;
	return dfs(u+1);
	cout<<endl;
	
}
int main(){
	cin>>n>>m;
	for(int i=0;i<n;i++)
	{
		n_vec.push_back(i+1);
		cout<<n_vec[i];
	}	
	dfs(0);
	return 0;
} 
	/*���룺5 3
	�����
	1 2 3 
	1 2 4 
	1 2 5 
	1 3 4 
	1 3 5 
	1 4 5 
	2 3 4 
	2 3 5 
	2 4 5 
	3 4 5 
	
	��Χ��
	n m 
	n>=m>=0
	n+(n-m)<=25 
	
	���ɣ�n<n+1<n+2  
	
	˼·�� dfs
	1. 
	*/
