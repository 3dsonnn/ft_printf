#include <stdio.h>
#include "ft_printf.h"

int main(void)
{
    int ret1, ret2;
    
    // Basic test
    printf("---WIDTH---\n");
    ret1 = ft_printf("|%5d|\n", 42);
    ret2 = printf("|%5d|\n", 42);
    printf("Returns: %d | %d\n", ret1, ret2);
    printf("\n---ZERO-PADING---\n");
    ret1 = ft_printf("|%05d|\n", 42);
    ret2 = printf("|%05d|\n", 42);
    printf("Returns: %d | %d\n", ret1, ret2);
    printf("\n---DOT---\n");
    ret1 = ft_printf("|%.5d|\n", 42);
    ret2 = printf("|%.5d|\n", 42);
    printf("Returns: %d | %d\n", ret1, ret2);


    printf("\n\n---WIDTH+DOT---\n");
    ret1 = ft_printf("|%9.5d|\n", 42);
    ret2 = printf("|%9.5d|\n", 42);
    printf("Returns: %d | %d\n", ret1, ret2);

    // printf("\n---LEFT-ALIGNMENT---\n");
    // ret1 = ft_printf("|%-5d|\n", 42);
    // ret2 = printf("|%-5d|\n", 42);
    // printf("Returns: %d | %d\n", ret1, ret2);
    // printf("\n---PLUS---\n");
    // ret1 = ft_printf("|%+d|\n", 42);
    // ret2 = printf("|%+d|\n", 42);
    // printf("Returns: %d | %d\n", ret1, ret2);
    
    return 0;
}
