#include <stdio.h>
int main(){
	int n; 
	printf("nhap n =");
	scanf("%d",&n);
	int arr[n];
	for(int i=0;i<n;i++){
		printf("nhap gia tri :");
		scanf("%d",&arr[i]);
	}
	printf("mang sau khi nhap la :\n");
	for(int i=0;i<n;i++){
		printf("%d\n",arr[i]); 
	}
	int solecuoi;
	for(int i=0;i<n;i++){
		if(arr[i]%2!=0){
//			printf("n\ cac so le trong mang :%d",arr[i]); 
			solecuoi = arr[i];
        	printf("%d",arr[i]); 
		} 
	} 
}
