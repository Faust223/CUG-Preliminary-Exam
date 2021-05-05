#include<iostream>
#include<vector>
#include<cstring>
#define MAX 101
using namespace std;
vector<int> state;
int main(){
	char st[MAX];
	char end[MAX];
	int sum=0;
	cin.getline(st,MAX);
	cin.getline(end,MAX);
	for(int i=0;i<strlen(st);i++)
		if(st[i]!=end[i])
			state.push_back(i);
	for(int j=state.size()-1;j>0;j-=2)
		sum=sum+state[j]-state[j-1];
	cout<<sum<<endl;
	return 0;
}
//* 正面 o 反面
	// 输入：
	//初始状态：****** ****
	//结束状态：o****o ****
	//输出：5 
	//思路：1. 


