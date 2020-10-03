#include <stdio.h>
#include <string.h>
int main(){
	
	int n;
	printf("Nhap n=");
	scanf("%d",&n);
	char ars[n][20];
	for(int i=0;i<n;i++){
		  printf("Nhap chuoi thu %d: ",i);
		  scanf("%s",ars[i]);
	}
	
	for(int i=0;i<n-1;i++){
		for(int j=0;j<n-1-i;j++){
		
			if(strcmp(ars[j],ars[j+1])>0){
				char temp[20];
				strcpy(temp,ars[j]);
				strcpy(ars[j],ars[j+1]);
				strcpy(ars[j+1],temp);
			}
		}
		
		
	}
	printf("Cac chuoi sap xep theo thu tu alphabe: \n");
	for(int i=0;i<n;i++){
		printf("%s\n",ars[i]);
	}
}
