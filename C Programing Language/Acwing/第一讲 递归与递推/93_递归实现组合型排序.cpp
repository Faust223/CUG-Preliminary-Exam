#include<iostream>
#define MAX 26
using namespace std;
int n,m;
int m_vec [MAX]={0};
void dfs(int u){
	if(u>m){ 
		for(int i=1;i<=m;i++)
			cout<<m_vec[i]<<" ";
		cout<<endl;
		return 0;
	}
	for(int i=u;i<=u+n-m;i++)
		if(i>m_vec[u-1]){
			m_vec[u]=i;
			dfs(u+1);
		} 
}
int main(){
	cin>>n>>m;
	dfs(1);
}
/*
N1=n-N0-(m-u);
   5-0-(3-1)
  =3
N2=n-N1-(m-u);
  =3
N3=n-N2-(m-u);
  =3

	
	/*
	N[0]=0;
	for(int j=0;j<m;j++){
		
		N[j]=n-n_vec[j]-(m-u);
		//u++;
		//u作为递归增加指标 
	}
	
	for(int y=0;y<m;y++)
		cout<<N[y];	
		*/
/*		
		
	for(int i=0;i<m;i++)
	{
	
		for(int j=0;j<(n-m)+1;j++)
		{
			N[i]=n_vec[j];
			cout<<N[i];
		}		
		printf("\n");
	}
*/




