#include <stdio.h>
int main(){
	int n,i;
	printf("n=");
	scanf("%d",&n);
	int arr[n];
	//
	bool flag=false;
//
	for(int i=0;i<n;i++){
		flag=true;
		while(flag){
			printf("nhap gia tri :");
			scanf("%d",&arr[i]);
			if(i==0) {
				flag = false;
			} else{								
				for(int j=0;j<i;j++){
					if(arr[j]==arr[i]){
						printf("yeu cau nhap lai\n");
						flag = true;
						break;
					}else {
						flag = false;
					}
				}
			}
		}
	}
	printf("mang sau khi nhap :\n");		
	for(int i=0;i<n;i++){
		printf("%5d", arr[i]);
	}
}
