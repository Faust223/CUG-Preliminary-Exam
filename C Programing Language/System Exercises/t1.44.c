#include<stdio.h>
int main(){
	
	int i=1,j=0;
	while(i)
		switch(i){
			case 1: i+=1; j++; printf("i: %d,j: %d",i,j); break;
			case 2: i+=2; j++; printf("i: %d,j: %d",i,j); break;
			case 3: i+=3; j++; printf("i: %d,j: %d",i,j); break;
			default: i--; j++; printf("i: %d,j: %d",i,j); break; 
			
			
		}
		
	//����������������ѭ�� 
	printf("i: %d,j: %d",i,j);
	
	
	return 0;
} 
