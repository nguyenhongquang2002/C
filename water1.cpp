#include <stdio.h>
int main(){
	
    int n;

        printf("Nhap n: ");
        scanf("%d", &n);
    
    int i;
    int S = 0;
    for(i = 1; i <= n; i++) 
    {
        S = S + i;
    }
 
    printf("S = %d\n", S);
 
    return 0;
}


