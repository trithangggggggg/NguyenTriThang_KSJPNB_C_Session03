#include <stdio.h>

int main() {
    int toan; 
    int van; 
	int anh;
	
	
	printf("Nhap diem toan : ");
	scanf("%d",&toan);
	
	printf("Nhap diem van: ");
	scanf("%d",&van); 
	
	printf("Nhap diem anh : ");
	scanf("%d",&anh);
	
	float tong;
	float trungbinh; 
	
	tong = toan + van + anh;
	trungbinh = tong / 3;
	
	printf("Diem trung binh la: %.2f", trungbinh); 

	return 0;
 
}
