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
	//��һ����֧����ѡ 
	s[u]=2;
	dfs(u+1);
	s[u]=0;	//�ָ��ֳ� 
	
	//�ڶ�����֧��ѡ 
	s[u]=1;
	dfs(u+1);
	s[u]=0;
}
int main(){
	cin>>n;
	dfs(1); 
	return 0;
}



	//92.�ݹ�ʵ��ָ����ö�� 
	//1<=n<=15 
	//����  3
	
	//���  3
	//		2
	// 		2 3
	//		1
	//		1 3
	//		1 2
	//		1 2 3
	//�����������
	//�ݹ������� 
	//3��״̬��1����ʾѡ�� 0����ʾ��ѡ 2����ʾδָ�� 
