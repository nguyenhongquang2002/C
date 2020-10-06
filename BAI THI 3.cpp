#include <stdio.h>
#include<math.h>
int main(int argc, const char * argv[]) {
    float a,b,c,s,p;
    printf("Nhap canh a: ");
    scanf("%f",&a);
    printf("Nhap canh b: ");
    scanf("%f",&b);
    printf("Nhap canh c: ");
    scanf("%f",&c);
    if(a+b>=c&&b+c>=a&&a+c>=b){
        printf("\n3 Canh vua nhap tao thanh 1 tam giac");
        p=(a+b+c)/2;
        s=sqrt(p*(p-a)*(p-b)*(p-c));
        printf("\nDien tich tam giac la:%.1f\nChu vi tam giac la: %.2f\n",s,a+b+c);
        }
    else{
    printf("3 canh vua nhap khong la tam giac");
    }
	}
