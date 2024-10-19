#include <stdio.h>
#include <math.h>

int main() 
{
    float principal = 1000, rate = 5, time = 3;
    float compound_interest;
    int n = 4;
    
    compound_interest = principal * pow((1 + rate / (100 * n)), n * time);
    
    printf("Value of Principal is : %.2f\nValue of Rate is : %.2f\nValue of Time is : %.2f\n\n", principal, rate, time);
    printf("Compound interest is : %.2f\n", compound_interest);
    
    return 0;
}
