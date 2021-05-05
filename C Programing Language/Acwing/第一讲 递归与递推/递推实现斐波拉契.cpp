#include<iostream> 
#include<vector>
using namespace std;
vector<int>a;
int main(){
	//斐波拉契数列
	//递推实现 
	/*
递归：逆向推导 
递推：递正向推导 
递归与递推区别：相对于递归算法,递推算法免除了数据进出栈的过程，也就是说,不需要函数不断的向边界值靠拢,而直接从边界出发,直到求出函数值。

	例如：斐波拉契数列 
	1,1,2,3,5,8,13,21,34,55,89,144... 
	用户输入：n=7 
	边界值：1,1
	函数值： 13
	
	递推：从1，1开始计算（直接从边界值出发） 
	递归：一直向边界值1，1靠拢（从用户输入值7出发，像边界值1靠拢） 
	*/ 
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
