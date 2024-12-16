#include <iostream>
#include <stdio.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	int a=5,b;
	printf("Hay nhap vao mot so nguyen: ");
	do
	{
		scanf("%d",&b);
		if(b!=a)
		{
			printf("Sai roi! Hay thu lai nhe\n");
		}
	}
	while(b!=a);
	printf("Dung roi! So cho truoc la %d",a);
	return 0;
}
