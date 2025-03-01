#include <stdio.h>
#include "ft_printf.h"

// printf("---TESTS---\n");
// printf("1-->5d\n");
// ret1 = ft_printf("|%5d|\n", 42);
// ret2 = printf("|%5d|\n", 42);
// printf("Returns: %d | %d\n", ret1, ret2);

// printf("\n2-->05d\n");
// ret1 = ft_printf("|%05d|\n", 42);
// ret2 = printf("|%05d|\n", 42);
// printf("Returns: %d | %d\n", ret1, ret2);

// printf("\n3-->.d\n");
// ret1 = ft_printf("|%.d|\n", 42);
// ret2 = printf("|%.d|\n", 42);
// printf("Returns: %d | %d\n", ret1, ret2);

// printf("\n4-->0.d\n");
// ret1 = ft_printf("|%0.d|\n", 42);
// ret2 = printf("|%0.d|\n", 42);
// printf("Returns: %d | %d\n", ret1, ret2);

// printf("\n5-->7.3d\n");
// ret1 = ft_printf("|%7.3d|\n", 42);
// ret2 = printf("|%7.3d|\n", 42);
// printf("Returns: %d | %d\n", ret1, ret2);

// printf("\n6-->07.3d\n");
// ret1 = ft_printf("|%07.3d|\n", 42);
// ret2 = printf("|%07.3d|\n", 42);
// printf("Returns: %d | %d\n", ret1, ret2);

// printf("\n7-->.5d\n");
// ret1 = ft_printf("|%.5d|\n", 42);
// ret2 = printf("|%.5d|\n", 42);
// printf("Returns: %d | %d\n", ret1, ret2);

// printf("\n8-->3.5d\n");
// ret1 = ft_printf("|%3.5d|\n", 42);
// ret2 = printf("|%3.5d|\n", 42);
// printf("Returns: %d | %d\n", ret1, ret2);

// printf("\n9-->10.d\n");
// ret1 = ft_printf("|%10.d|\n", 42);
// ret2 = printf("|%10.d|\n", 42);
// printf("Returns: %d | %d\n", ret1, ret2);

// printf("\n10-->010.d\n");
// ret1 = ft_printf("|%010.d|\n", 42);
// ret2 = printf("|%010.d|\n", 42);
// printf("Returns: %d | %d\n", ret1, ret2);

// printf("\n11-->04.d\n");
// ret1 = ft_printf("|%04.d|\n", 42);
// ret2 = printf("|%04.d|\n", 42);
// printf("Returns: %d | %d\n", ret1, ret2);

// printf("\n12-->.0d\n");
// ret1 = ft_printf("|%.0d|\n", 42);
// ret2 = printf("|%.0d|\n", 42);
// printf("Returns: %d | %d\n", ret1, ret2);

// printf("\n13-->0.0d\n");
// ret1 = ft_printf("|%0.0d|\n", 42);
// ret2 = printf("|%0.0d|\n", 42);
// printf("Returns: %d | %d\n", ret1, ret2);

// printf("\n14-->8.8d\n");
// ret1 = ft_printf("|%8.8d|\n", 42);
// ret2 = printf("|%8.8d|\n", 42);
// printf("Returns: %d | %d\n", ret1, ret2);

// printf("\n15-->08.8d\n");
// ret1 = ft_printf("|%08.8d|\n", 42);
// ret2 = printf("|%08.8d|\n", 42);
// printf("Returns: %d | %d\n", ret1, ret2);

// printf("\n16-->...d\n");
// ret1 = ft_printf("|%...d|\n", 0);
// ret2 = printf("|%...d|\n", 0);
// printf("Returns: %d | %d\n", ret1, ret2);

// printf("\n17-->5.d\n");
// ret1 = ft_printf("|%5.d|\n", 0);
// ret2 = printf("|%5.d|\n", 0);
// printf("Returns: %d | %d\n", ret1, ret2);

// printf("\n18-->05.d\n");
// ret1 = ft_printf("|%05.d|\n", 0);
// ret2 = printf("|%05.d|\n", 0);
// printf("Returns: %d | %d\n", ret1, ret2);




// Basic test
// printf("---WIDTH---\n");
// ret1 = ft_printf("|%5d|\n", 42);
// ret2 = printf("|%5d|\n", 42);
// printf("Returns: %d | %d\n", ret1, ret2);
// printf("\n---ZERO-PADING---\n");
// ret1 = ft_printf("|%05d|\n", 42);
// ret2 = printf("|%05d|\n", 42);
// printf("Returns: %d | %d\n", ret1, ret2);
// printf("\n---DOT---\n");
// ret1 = ft_printf("|%.5d|\n", 42);
// ret2 = printf("|%.5d|\n", 42);
// printf("Returns: %d | %d\n", ret1, ret2);


// printf("\n\n---WIDTH+DOT---\n");
// ret1 = ft_printf("|%9.5d|\n", 42);
// ret2 = printf("|%9.5d|\n", 42);
// printf("Returns: %d | %d\n", ret1, ret2);

// printf("\n\n---ZERO+WIDTH---\n");
// ret1 = ft_printf("|%05d|\n", 42);
// ret2 = printf("|%05d|\n", 42);
// printf("Returns: %d | %d\n", ret1, ret2);

// printf("\n\n---ZERO+DOT---\n");
// ret1 = ft_printf("|%09.10d|\n", 42);
// ret2 = printf("|%09.10d|\n", 42);
// printf("Returns: %d | %d\n", ret1, ret2);


// printf("\n---LEFT-ALIGNMENT---\n");
// ret1 = ft_printf("|%-5d|\n", 42);
// ret2 = printf("|%-5d|\n", 42);
// printf("Returns: %d | %d\n", ret1, ret2);
// printf("\n---PLUS---\n");
// ret1 = ft_printf("|%+d|\n", 42);
// ret2 = printf("|%+d|\n", 42);
// printf("Returns: %d | %d\n", ret1, ret2);

int main(void)
{
    int ret1, ret2;

    printf("*****BASIC FLAG TESTS*****\n\n");
    
    printf("1-->+d\n");
    ret1 = ft_printf("|%+d|\n", 42);
    ret2 = printf("|%+d|\n", 42);
    printf("Returns: %d | %d\n\n", ret1, ret2);

    printf("2--> d\n");
    ret1 = ft_printf("|% d|\n", 42);
    ret2 = printf("|% d|\n", 42);
    printf("Returns: %d | %d\n\n", ret1, ret2);

    printf("3-->-d\n");
    ret1 = ft_printf("|%-d|\n", 42);
    ret2 = printf("|%-d|\n", 42);
    printf("Returns: %d | %d\n\n", ret1, ret2);

    printf("(neg)4-->+d\n");
    ret1 = ft_printf("|%+d|\n", -42);
    ret2 = printf("|%+d|\n", -42);
    printf("Returns: %d | %d\n\n", ret1, ret2);

    printf("(neg)5--> d\n");
    ret1 = ft_printf("|% d|\n", -42);
    ret2 = printf("|% d|\n", -42);
    printf("Returns: %d | %d\n\n", ret1, ret2);

    printf("\n*****WIDTH AND ALIGNMENT TESTS*****\n\n");

    printf("6-->+5d\n");
    ret1 = ft_printf("|%+5d|\n", 42);
    ret2 = printf("|%+5d|\n", 42);
    printf("Returns: %d | %d\n\n", ret1, ret2);

    printf("7-->-5d\n");
    ret1 = ft_printf("|%-5d|\n", 42);
    ret2 = printf("|%-5d|\n", 42);
    printf("Returns: %d | %d\n\n", ret1, ret2);

    printf("8--> 6d\n");
    ret1 = ft_printf("|% 6d|\n", 42);
    ret2 = printf("|% 6d|\n", 42);
    printf("Returns: %d | %d\n\n", ret1, ret2);

    printf("9-->-+6d\n");
    ret1 = ft_printf("|%-+6d|\n", -42);
    ret2 = printf("|%-+6d|\n", -42);
    printf("Returns: %d | %d\n\n", ret1, ret2);

    printf("(neg)10-->+5d\n");
    ret1 = ft_printf("|%+5d|\n", -42);
    ret2 = printf("|%+5d|\n", -42);
    printf("Returns: %d | %d\n\n", ret1, ret2);

    printf("\n*****WITH 0 FLAG TESTS*****\n\n");

    printf("11-->05d\n");
    ret1 = ft_printf("|%05d|\n", 42);
    ret2 = printf("|%05d|\n", 42);
    printf("Returns: %d | %d\n\n", ret1, ret2);

    printf("12-->+05d\n");
    ret1 = ft_printf("|%+05d|\n", 42);
    ret2 = printf("|%+05d|\n", 42);
    printf("Returns: %d | %d\n\n", ret1, ret2);

    printf("13-->-05d\n");
    ret1 = ft_printf("|%-05d|\n", 42);
    ret2 = printf("|%-05d|\n", 42);
    printf("Returns: %d | %d\n\n", ret1, ret2);

    printf("(neg)14-->- 06d\n");
    ret1 = ft_printf("|%- 06d|\n", -42);
    ret2 = printf("|%- 06d|\n", -42);
    printf("Returns: %d | %d\n\n", ret1, ret2);

    printf("15-->-+06d\n");
    ret1 = ft_printf("|%-+06d|\n", 42);
    ret2 = printf("|%-+06d|\n", 42);
    printf("Returns: %d | %d\n\n", ret1, ret2);

    printf("\n*****WITH PRECISION TESTS*****\n\n");

    printf("16-->.5d\n");
    ret1 = ft_printf("|%.5d|\n", 42);
    ret2 = printf("|%.5d|\n", 42);
    printf("Returns: %d | %d\n\n", ret1, ret2);

    printf("17-->+.5d\n");
    ret1 = ft_printf("|%+.5d|\n", 42);
    ret2 = printf("|%+.5d|\n", 42);
    printf("Returns: %d | %d\n\n", ret1, ret2);

    printf("18--> .4d\n");
    ret1 = ft_printf("|% .4d|\n", 42);
    ret2 = printf("|% .4d|\n", 42);
    printf("Returns: %d | %d\n\n", ret1, ret2);

    printf("19-->7.3d\n");
    ret1 = ft_printf("|%7.3d|\n", 42);
    ret2 = printf("|%7.3d|\n", 42);
    printf("Returns: %d | %d\n\n", ret1, ret2);

    printf("20-->-7.3d\n");
    ret1 = ft_printf("|%-7.3d|\n", 42);
    ret2 = printf("|%-7.3d|\n", 42);
    printf("Returns: %d | %d\n\n", ret1, ret2);

    printf("\n*****COMPLEX COMBINATIONS TESTS*****\n\n");

    printf("21-->+07.4d\n");
    ret1 = ft_printf("|%+07.4d|\n", 42);
    ret2 = printf("|%+07.4d|\n", 42);
    printf("Returns: %d | %d\n\n", ret1, ret2);

    printf("22-->-+7.4d\n");
    ret1 = ft_printf("|%-+7.4d|\n", 42);
    ret2 = printf("|%-+7.4d|\n", 42);
    printf("Returns: %d | %d\n\n", ret1, ret2);

    printf("23-->+06.d\n");
    ret1 = ft_printf("|%+06.d|\n", 42);
    ret2 = printf("|%+06.d|\n", 42);
    printf("Returns: %d | %d\n\n", ret1, ret2);

    printf("(neg)24--> 8.5d\n");
    ret1 = ft_printf("|% 8.5d|\n", -42);
    ret2 = printf("|% 8.5d|\n", -42);
    printf("Returns: %d | %d\n\n", ret1, ret2);

    printf("25-->-+08.5d\n");
    ret1 = ft_printf("|%-+08.5d|\n", 42);
    ret2 = printf("|%-+08.5d|\n", 42);
    printf("Returns: %d | %d\n\n", ret1, ret2);

    printf("\n*****EDGE CASES TESTS*****\n\n");

    printf("26-->+.d\n");
    ret1 = ft_printf("|%+.d|\n", 0);
    ret2 = printf("|%+.d|\n", 0);
    printf("Returns: %d | %d\n\n", ret1, ret2);

    printf("27-->-5.d\n");
    ret1 = ft_printf("|%-5.d|\n", 0);
    ret2 = printf("|%-5.d|\n", 0);
    printf("Returns: %d | %d\n\n", ret1, ret2);

    printf("28-->+5.0d\n");
    ret1 = ft_printf("|%+5.0d|\n", 0);
    ret2 = printf("|%+5.0d|\n", 0);
    printf("Returns: %d | %d\n\n", ret1, ret2);

    return 0;
}
