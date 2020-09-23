#include <stdio.h>
int main(){
	int n;
	printf("Nhap so n: ");
	scanf("%d",&n);
	printf("Tat ca cac so chan tu 1 den %d la:  ",n);
	for(int i=1;i<=n;i++){
		if(i%2==0){
			printf("%d",i);
		}
	}
}
