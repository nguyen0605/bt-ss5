#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	float a,b,result;
	printf("Nhap vao so thu nhat: ");
	scanf("%f",&a);
	printf("NHap vao so thu hai: ");
	scanf("%f",&b);
	int n=1,c;
	while(n==1)
	{
		printf("==CACULATOR==\n");
		printf("1. Tong 2 so\n");
		printf("2. Hieu 2 so\n");
		printf("3. Tich 2 so\n");
		printf("4. Thuong 2 so\n");
		printf("5. Thoat\n");
	    printf("Lua chon cua ban: \n");
	    scanf("%d",&c);
	    switch(c)
	    {
	    	case 1:
	    		result=a+b;
	    		printf("Tong cua %.2f va %.2f la %.2f\n",a,b,result);
	    		break;
	    	case 2:
	    		result=a-b;
	    		printf("Hieu cua %.2f va %.2f la %.2f\n",a,b,result);
	    		break;
	    	case 3:
	    		result=a*b;
	    		printf("Tich cua %.2f va %.2f la %.2f\n",a,b,result);
	    		break;
	    	case 4:
	    		result=a/b;
	    		printf("Hieu cua %.2f va %.2f la %.2f\n",a,b,result);
	    		break;
	    	case 5:
	    		n=2;
	    		break;
		}
	}
	return 0;
}
