//具体更具题目需要，其实是yxc的解题方法。 
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


