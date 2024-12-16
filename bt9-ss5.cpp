#include <iostream>
#include <stdio.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	int choice,first_choice=0;
    float n1,n2,n3;
    do {
        printf("\n========== MENU ==========\n");
        printf("1. Nhap 3 so\n");
        printf("2. Tong 3 so\n");
        printf("3. Trung binh cong 3 so\n");
        printf("4. So nho nhat\n");
        printf("5. So lon nhat\n");
        printf("6. Thoat\n");
        printf("Lua chon cua ban: ");
        scanf("%d", &choice);
        if (choice!=1 && !first_choice && choice!=6) 
		{
            printf("Vui long chon 1 de nhap 3 so truoc khi thuc hien cac chuc nang khac!\n");
        } 
		else 
		{
            switch (choice) 
			{
                case 1:
                    printf("Nhap so thu nhat: ");
                    scanf("%f", &n1);
                    printf("Nhap so thu hai: ");
                    scanf("%f", &n2);
                    printf("Nhap so thu ba: ");
                    scanf("%f", &n3);
                    first_choice=1;
                    break;
                case 2:
                    printf("Tong 3 so: %.2f\n", n1+n2+n3);
                    break;
                case 3:
                    printf("Trung binh cong 3 so: %.2f\n", (n1+n2+n3)/3.0);
                    break;
                case 4: 
				{
                    float min=n1;
                    if (n2<min) min=n2;
                    if (n3<min) min=n3;
                    printf("So nho nhat: %.2f\n", min);
                    break;
                }
                case 5: 
				{
                    float max=n1;
                    if (n2>max) max=n2;
                    if (n3>max) max=n3;
                    printf("So lon nhat: %.2f\n", max);
                    break;
                }
                case 6:
                {
                    printf("Thoat chuong trinh.\n");
                    break;
                }
                default:
                    printf("Lua chon khong hop le. Vui long chon lai!\n");
                    break;
            }
        }
    } while (choice != 6);
	return 0;
}
