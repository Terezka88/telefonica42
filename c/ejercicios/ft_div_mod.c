// Online C compiler to run C program online
#include <stdio.h>

void ft_div_mod(int a, int b, int *div, int *mod)
{
 *div = a / b;
 *mod = a % b;
 printf("div = %d .... mod = %d", *div, *mod);
}

int main() {
    // Write C code here
    int a;
    a = 0;

    int b;
    b = 0;
    
    int *div;
    div = &a;
    
    int *mod;
    mod = &b;
    
    ft_div_mod(10, 3, div, mod);
    
    printf("\n");
    printf("div = %d .... mod = %d", a, b);
    return 0;
}