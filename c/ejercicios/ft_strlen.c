// Online C compiler to run C program online
#include <stdio.h>

int ft_strlen(char *str){
    
    int count;
    count = 0;
    
    while(*str != '\0'){
        count++;
        str++;
    }
    
    return count;
}

int main() {
    // Write C code here
    int out;
    out = ft_strlen("Hola");
    printf("%d", out);
    return 0;
}