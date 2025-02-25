#include <stdio.h>
#include "ft_printf.h"

int main(void)
{
    int ret1, ret2;
    
    // Basic test
    ret1 = ft_printf("%%\n");
    ret2 = printf("%%\n");
    printf("Returns: %d | %d\n", ret1, ret2);
    ret1 = ft_printf("%5%\n");
    ret2 = printf("%5%\n");
    printf("Returns: %d | %d\n", ret1, ret2);
    ret1 = ft_printf("%-5%\n");
    ret2 = printf("%-5%\n");
    printf("Returns: %d | %d\n", ret1, ret2);
    ret1 = ft_printf("%05%\n");
    ret2 = printf("%05%\n");
    printf("Returns: %d | %d\n", ret1, ret2);
    ret1 = ft_printf("%+%\n");
    ret2 = printf("%+%\n");
    printf("Returns: %d | %d\n", ret1, ret2);
    ret1 = ft_printf("% #%\n");
    ret2 = printf("% #%\n");
    printf("Returns: %d | %d\n", ret1, ret2);
    ret1 = ft_printf("%.5%\n");
    ret2 = printf("%.5%\n");
    printf("Returns: %d | %d\n", ret1, ret2);
    
    return 0;
}
