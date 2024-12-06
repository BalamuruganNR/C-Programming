#include <stdio.h>

int main(){

	int a[2][3]={{1,2,3},{4,5,6}};

	int *p;
	int **q;

	p=&a[2][3];
	q=&p;
	
	printf("%d\n",*(*(a+0))+1);//it print the value
	printf("%d\n",*(*(a+1))+2);// it also same 
	printf("%p\n",&q); //it print the address of q
	printf("%p\n",(*(a+0)+2);
	printf("%p",&p);






return 0;
}
