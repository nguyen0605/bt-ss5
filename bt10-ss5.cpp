#include <iostream>
#include <stdio.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	int n;
	printf("Nhap vao mot so nguyen bat ki: ");
	scanf("%d",&n);
	while(n!=0)
	{
		int temp=n%10;
		printf("%d\n",temp);
		n/=10;
	}
	return 0;
}
