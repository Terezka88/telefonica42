// Online C compiler to run C program online
#include <stdio.h>

void ft_rev_int_tab(int *tab, int size){
    
    int i;
    int tmp;
    
    for(i = 0; i < size / 2; i++){
        tmp = tab[i];
        tab[i] = tab[size - 1 - i];
        tab[size - 1 - i] = tmp;
    }

}

int main() {
    // Write C code here
    int A[] = {1, 2, 3, 4};
    
    int *p;
    p = A;
    
    ft_rev_int_tab(p, 4);
    
    int j;
    for(j=0; j<4; j++){
        printf("%d", A[j]);
    }
    
    return 0;
}