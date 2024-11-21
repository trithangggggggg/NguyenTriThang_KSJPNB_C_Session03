#include <stdio.h>

int main() {
    float celsius, fahrenheit;
    
    printf("Nhap nhiet do C (Celsius): ");
    scanf("%f", &celsius);
    
    fahrenheit = (celsius * 9 / 5) + 32;
    printf("Nhiet do tinh theo do Fahrenheit la: %.2f\n", fahrenheit);

    return 0;
}
