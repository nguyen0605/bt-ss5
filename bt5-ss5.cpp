#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	int n,result;
    for(n=1;n<10;n++)
    {
    	for(int i=1;i<=10;i++)
		{
			result=n*i;
			printf("%d x %d = %d\n",n,i,result); 
		}
	}
	return 0;
}
