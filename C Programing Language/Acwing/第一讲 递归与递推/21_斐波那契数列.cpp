//���������Ŀ��Ҫ����ʵ��yxc�Ľ��ⷽ���� 
class Solution{
public:
	int Fibonacci(int n){
		int a=0,b=1;
		while(n--){
			int c=a+b;
			a=b,b=c;
			
		}
		return a;
	}
	
};


