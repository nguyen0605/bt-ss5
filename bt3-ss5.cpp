#include <iostream>
#include <stdio.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	unsigned n, sum=0;
	printf("Nhap vao mot so nguyen duong: ");
	scanf("%u",&n);
	for(int i=1;i<=n;i++)
	{
		sum+=i;
	}
	printf("Tong tu 1 den %u la %u",n,sum);
	return 0;
}
