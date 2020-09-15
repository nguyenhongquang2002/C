#include <stdio.h>
int main(){
	int a;
	printf("nhap a=");
	scanf("%d",&a);
	if(a>=2&&a<7){
		printf("day la thu hai den thu bay \n");
	}else{
		if(a==8){
			printf("day la chu nhat \n");
		}else{
			printf("khong phai la ngay trong tuan \n");
		}
	}
}
