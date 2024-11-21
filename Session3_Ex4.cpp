#include <stdio.h>

int main() {
    float toan; 
    float van; 
	float anh;
	
	printf("Nhap diem toan : ");
	scanf("%f",&toan);
	
	printf("Nhap diem van: ");
	scanf("%f",&van); 
	
	printf("Nhap diem anh : ");
	scanf("%f",&anh);
	
	float tong;
	float trungbinh; 
	
	tong = toan + van + anh;
	trungbinh = tong / 3;
	
	printf("Diem trung binh la: %.2f", trungbinh); 

	return 0;
 
}
