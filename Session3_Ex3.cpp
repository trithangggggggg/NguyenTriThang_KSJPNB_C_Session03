#include <stdio.h>

int main() {
    float R; //bán kính R 
    float C;
	float S; 
	
	printf("Nhap ban kinh R: ");
	scanf("%f",&R);
	C = 2 * 3.14 * R; // chu vi  
	S = 3.14 * R * R; // dien tich  
	
	printf("Chu vi hinh tron la: %.2f\n", C);
	printf("Dien tich hinh tron la: %.2f\n", S); 
	
	return 0;
 
}
