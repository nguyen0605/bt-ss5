#include <iostream>
#include <stdio.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	unsigned a,b,BCNN,i=1;
	printf("Nhap vao so nguyen duong thu nhat: ");
	scanf("%u",&a);
	printf("Nhap vao so nguyen duong thu hai: ");
	scanf("%u",&b);
	while(1)
	{
		if(i%a==0 && i%b==0)
		{
			BCNN=i;
			break;
		}
		else
		{
			i++;
		}
	}
	printf("Boi chung nho nhat cua %u va %u la %u",a,b,BCNN);
	return 0;
}
