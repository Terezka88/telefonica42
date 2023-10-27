// Online C compiler to run C program online
#include <stdio.h>

void ft_putstr(char *str){
    while(*str != '\0'){
        write(1, str, 1);
        str++;
    }
    
    int i;
    i = 0;
    
    while(str[i] != '\0'){
        write(1, &str[i], 1);
        i++;
    }
}

int main() {
    // Write C code here
    ft_putstr("Hola");

    return 0;
}