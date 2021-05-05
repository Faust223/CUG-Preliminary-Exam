#include<iostream>
#include<cstring>
#include<algorithm>
#include<cstdio>
#define MAX 16
using namespace std;
int s[MAX];		
int n;
void dfs(int u){
	int i;
	if(u>n)
	{
		for(i=1;i<=n;i++)
			if(s[i]==1)
				cout<<i<<" ";
		printf("\n");	
		return;
	}
	//第一个分支，不选 
	s[u]=2;
	dfs(u+1);
	s[u]=0;	//恢复现场 
	
	//第二个分支，选 
	s[u]=1;
	dfs(u+1);
	s[u]=0;
}
int main(){
	cin>>n;
	dfs(1); 
	return 0;
}



	//92.递归实现指数型枚举 
	//1<=n<=15 
	//输入  3
	
	//输出  3
	//		2
	// 		2 3
	//		1
	//		1 3
	//		1 2
	//		1 2 3
	//深度优先搜索
	//递归搜索树 
	//3种状态：1：表示选择 0：表示不选 2：表示未指向 
