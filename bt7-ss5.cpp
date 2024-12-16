#include <iostream>
#include <stdio.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	unsigned a,b,UCLN;
	printf("Nhap vao so nguyen duong thu nhat: ");
	scanf("%u",&a);
	printf("Nhap vao so nguyen duong thu hai: ");
	scanf("%u",&b);
	for(int i=1;i<=a && i<=b;i++)
	{
		if(a%i==0 && b%i==0)
		{
			UCLN=i;
		}
	}
	printf("UCLN cua %u va %u la %u",a,b,UCLN);
	return 0;
}
