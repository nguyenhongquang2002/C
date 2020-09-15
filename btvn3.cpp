#include <stdio.h>
#include <conio.h>
int main(){
	int ngay,thang,nam,s;
	printf("nhap ngay:");
	scanf("%d",&ngay);
	printf("nhap thang:");
	scanf("%d",&thang);
	printf("nhap nam:");
	scanf("%d",&nam);
	s=ngay;
	for(int i=1;i<thang;i++){
		switch(i){
			case 4:
			case 6:
			case 9:
			case 11:
			s+=30;
			break;
			case 2:
			s+=(nam %4 ==0 && nam % 100 != 0 || nam % 400 == 0)?29:28;
			break;
			default: s+=31;
		}
	    }if(nam %4 ==0 && nam % 100!= 0 || nam % 400 == 0){
	    	printf("ngay %d thang %d nam %d la ngay thu %d trong nam va la nam nhuan",ngay,thang,nam,s);
	    }else{
	    printf("ngay %d thang %d nam %d la ngay thu %d trong nam va la nam khong nhuan",ngay,thang,nam,s);
	    }
	    return 0;
    }
