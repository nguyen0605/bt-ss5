#include <iostream>
#include <stdio.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	int n,result;
	printf("Nhap vao mot so nguyen duong (1-10): ");
	scanf("%d",&n);
	if(n<1 || n>10)
	{
		printf("So nhap vao khong hop le!");
	}
	else
	{
		for(int i=1;i<=10;i++)
		{
			result=n*i;
			printf("%d x %d = %d\n",n,i,result); 
		}
	}
	return 0;
}
