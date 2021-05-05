#include<iostream>
//µÝ¹é 
//ì³²¨À­ÆõÊýÁÐ 

using namespace std;
int dfs(int n){ 
	if(n==1) return 1;
	if(n==2) return 1;
	return dfs(n-1)+dfs(n-2);
}

int main1(){
	int n;
	cin>>n;
	cout<<dfs(n);
	
	
	return 0;
}










 
