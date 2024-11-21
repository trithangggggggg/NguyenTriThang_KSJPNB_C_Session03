#include <stdio.h>

int main(){
	float canh_day;
	float chieu_cao;
	
	printf("Moi nhap do dai canh day: ");
	scanf("%f",&canh_day);
	
	printf("Moi nhap chieu cao: ");
	scanf("%f",&chieu_cao);
	
	float dien_tich;
	dien_tich = canh_day * chieu_cao * 1 / 2;
	printf("dien tich ta giac la: %.2f\n",dien_tich);
	
	return 0;
}
