// Online C compiler to run C program online
#include <stdio.h>

void ft_ultimate_div_mod(int *a, int *b)
{
 int c;
 c = *a;
 
 *a = *a / *b;
 *b = c % *b;
 printf("div = %d .... mod = %d", *a, *b);
}

int main() {
    // Write C code here
    int c;
    c = 10;
    int d;
    d = 3;
    
    int *a = &c;
    int *b = &d;


ft_ultimate_div_mod(a, b);
}