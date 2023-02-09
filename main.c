// CAGR Calculation
#include <stdio.h>
#include <math.h>

int main () {
    // Variables
    float initial, final, period, cagr;
    // Instructions
    printf("CAGR Calculation\n");
    printf("Enter Initial Amount: ");
    scanf("%f", &initial);
    printf("Enter Final Amount: ");
    scanf("%f", &final);
    printf("Enter Time Period: ");
    scanf("%f", &period);
    // Ouput
    cagr = (pow(final/initial, 1/period)) - 1;
    printf("CAGR (%%) = %f", cagr * 100);
    return 0;
}
