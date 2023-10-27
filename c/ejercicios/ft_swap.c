// Online C compiler to run C program online
#include <stdio.h>

void ft_swap(int *a, int *b){
    int c;
    
    c = *a;
    *a = *b;
    *b = c;
    
    printf("a = %d .... b = %d", *a, *b);
}

int main() {
    // Write C code here
    
    int p = 42;
    int *a = &p;
    
    int q = 24;
    int *b = &q;
    
    ft_swap(a, b);
    
    return 0;
}