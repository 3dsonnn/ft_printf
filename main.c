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



// printf("*****BASIC FLAG TESTS*****\n\n");
    
    // printf("1-->+d\n");
    // ret1 = ft_printf("|%+d|\n", 42);
    // ret2 = printf("|%+d|\n", 42);
    // printf("Returns: %d | %d\n\n", ret1, ret2);

    // printf("2--> d\n");
    // ret1 = ft_printf("|% d|\n", 42);
    // ret2 = printf("|% d|\n", 42);
    // printf("Returns: %d | %d\n\n", ret1, ret2);

    // printf("3-->-d\n");
    // ret1 = ft_printf("|%-d|\n", 42);
    // ret2 = printf("|%-d|\n", 42);
    // printf("Returns: %d | %d\n\n", ret1, ret2);

    // printf("(neg)4-->+d\n");
    // ret1 = ft_printf("|%+d|\n", -42);
    // ret2 = printf("|%+d|\n", -42);
    // printf("Returns: %d | %d\n\n", ret1, ret2);

    // printf("(neg)5--> d\n");
    // ret1 = ft_printf("|% d|\n", -42);
    // ret2 = printf("|% d|\n", -42);
    // printf("Returns: %d | %d\n\n", ret1, ret2);

    // printf("\n*****WIDTH AND ALIGNMENT TESTS*****\n\n");

    // printf("6-->+5d\n");
    // ret1 = ft_printf("|%+5d|\n", 42);
    // ret2 = printf("|%+5d|\n", 42);
    // printf("Returns: %d | %d\n\n", ret1, ret2);

    // printf("7-->-5d\n");
    // ret1 = ft_printf("|%-5d|\n", 42);
    // ret2 = printf("|%-5d|\n", 42);
    // printf("Returns: %d | %d\n\n", ret1, ret2);

    // printf("8--> 6d\n");
    // ret1 = ft_printf("|% 6d|\n", 42);
    // ret2 = printf("|% 6d|\n", 42);
    // printf("Returns: %d | %d\n\n", ret1, ret2);

    // printf("9-->-+6d\n");
    // ret1 = ft_printf("|%-+6d|\n", -42);
    // ret2 = printf("|%-+6d|\n", -42);
    // printf("Returns: %d | %d\n\n", ret1, ret2);

    // printf("(neg)10-->+5d\n");
    // ret1 = ft_printf("|%+5d|\n", -42);
    // ret2 = printf("|%+5d|\n", -42);
    // printf("Returns: %d | %d\n\n", ret1, ret2);

    // printf("\n*****WITH 0 FLAG TESTS*****\n\n");

    // printf("11-->05d\n");
    // ret1 = ft_printf("|%05d|\n", 42);
    // ret2 = printf("|%05d|\n", 42);
    // printf("Returns: %d | %d\n\n", ret1, ret2);

    // printf("12-->+05d\n");
    // ret1 = ft_printf("|%+05d|\n", 42);
    // ret2 = printf("|%+05d|\n", 42);
    // printf("Returns: %d | %d\n\n", ret1, ret2);

    // printf("13-->-05d\n");
    // ret1 = ft_printf("|%-05d|\n", 42);
    // ret2 = printf("|%-05d|\n", 42);
    // printf("Returns: %d | %d\n\n", ret1, ret2);

    // printf("(neg)14-->- 06d\n");
    // ret1 = ft_printf("|%- 06d|\n", -42);
    // ret2 = printf("|%- 06d|\n", -42);
    // printf("Returns: %d | %d\n\n", ret1, ret2);

    // printf("15-->-+06d\n");
    // ret1 = ft_printf("|%-+06d|\n", 42);
    // ret2 = printf("|%-+06d|\n", 42);
    // printf("Returns: %d | %d\n\n", ret1, ret2);

    // printf("\n*****WITH PRECISION TESTS*****\n\n");

    // printf("16-->.5d\n");
    // ret1 = ft_printf("|%.5d|\n", 42);
    // ret2 = printf("|%.5d|\n", 42);
    // printf("Returns: %d | %d\n\n", ret1, ret2);

    // printf("17-->+.5d\n");
    // ret1 = ft_printf("|%+.5d|\n", 42);
    // ret2 = printf("|%+.5d|\n", 42);
    // printf("Returns: %d | %d\n\n", ret1, ret2);

    // printf("18--> .4d\n");
    // ret1 = ft_printf("|% .4d|\n", 42);
    // ret2 = printf("|% .4d|\n", 42);
    // printf("Returns: %d | %d\n\n", ret1, ret2);

    // printf("19-->7.3d\n");
    // ret1 = ft_printf("|%7.3d|\n", 42);
    // ret2 = printf("|%7.3d|\n", 42);
    // printf("Returns: %d | %d\n\n", ret1, ret2);

    // printf("20-->-7.3d\n");
    // ret1 = ft_printf("|%-7.3d|\n", 42);
    // ret2 = printf("|%-7.3d|\n", 42);
    // printf("Returns: %d | %d\n\n", ret1, ret2);

    // printf("\n*****COMPLEX COMBINATIONS TESTS*****\n\n");

    // printf("21-->+07.4d\n");
    // ret1 = ft_printf("|%+07.4d|\n", 42);
    // ret2 = printf("|%+07.4d|\n", 42);
    // printf("Returns: %d | %d\n\n", ret1, ret2);

    // printf("22-->-+7.4d\n");
    // ret1 = ft_printf("|%-+7.4d|\n", 42);
    // ret2 = printf("|%-+7.4d|\n", 42);
    // printf("Returns: %d | %d\n\n", ret1, ret2);

    // printf("23-->+06.d\n");
    // ret1 = ft_printf("|%+06.d|\n", 42);
    // ret2 = printf("|%+06.d|\n", 42);
    // printf("Returns: %d | %d\n\n", ret1, ret2);

    // printf("(neg)24--> 8.5d\n");
    // ret1 = ft_printf("|% 8.5d|\n", -42);
    // ret2 = printf("|% 8.5d|\n", -42);
    // printf("Returns: %d | %d\n\n", ret1, ret2);

    // printf("25-->-+08.5d\n");
    // ret1 = ft_printf("|%-+08.5d|\n", 42);
    // ret2 = printf("|%-+08.5d|\n", 42);
    // printf("Returns: %d | %d\n\n", ret1, ret2);

    // printf("\n*****EDGE CASES TESTS*****\n\n");

    // printf("26-->+.d\n");
    // ret1 = ft_printf("|%+.d|\n", 0);
    // ret2 = printf("|%+.d|\n", 0);
    // printf("Returns: %d | %d\n\n", ret1, ret2);

    // printf("27-->-5.d\n");
    // ret1 = ft_printf("|%-5.d|\n", 0);
    // ret2 = printf("|%-5.d|\n", 0);
    // printf("Returns: %d | %d\n\n", ret1, ret2);

    // printf("28-->+5.0d\n");
    // ret1 = ft_printf("|%+5.0d|\n", 0);
    // ret2 = printf("|%+5.0d|\n", 0);
    // printf("Returns: %d | %d\n\n", ret1, ret2);



    //  WELEPY's
    // printf("original: | %+d |\n", 0);
    // ft_printf("mine  : | %+d |\n", 0);
	// printf("original: | %+d |\n", -1);
    // ft_printf("mine  : | %+d |\n", -1);
	// printf("original: | %+d |\n", 9);
    // ft_printf("mine  : | %+d |\n", 9);
	// printf("original: | %+d |\n", 10);
    // ft_printf("mine  : | %+d |\n", 10);
	// printf("original: | %+d |\n", 11);
    // ft_printf("mine  : | %+d |\n", 11);
	// printf("original: | %+d |\n", 15);
    // ft_printf("mine  : | %+d |\n", 15);
	// printf("original: | %+d |\n", 16);
    // ft_printf("mine  : | %+d |\n", 16);
	// printf("original: | %+d |\n", 17);
    // ft_printf("mine  : | %+d |\n", 17);
	// printf("original: | %+d |\n", 99);
    // ft_printf("mine  : | %+d |\n", 99);
	// printf("original: | %+d |\n", 100);
    // ft_printf("mine  : | %+d |\n", 100);
	// printf("original: | %+d |\n", 101);
    // ft_printf("mine  : | %+d |\n", 101);
	// printf("original: | %+d |\n", -9);
    // ft_printf("mine  : | %+d |\n", -9);
	// printf("original: | %+d |\n", -10);
    // ft_printf("mine  : | %+d |\n", -10);
	// printf("original: | %+d |\n", -11);
    // ft_printf("mine  : | %+d |\n", -11);
	// printf("original: | %+d |\n", -14);
    // ft_printf("mine  : | %+d |\n", -14);
	// printf("original: | %+d |\n", -15);
    // ft_printf("mine  : | %+d |\n", -15);
	// printf("original: | %+d |\n", -16);
    // ft_printf("mine  : | %+d |\n", -16);
	// printf("original: | %+d |\n", -99);
    // ft_printf("mine  : | %+d |\n", -99);
	// printf("original: | %+d |\n", -100);
    // ft_printf("mine  : | %+d |\n", -100);
	// printf("original: | %+d |\n", -101);
    // ft_printf("mine  : | %+d |\n", -101);
	// printf("original: | %+d |\n", INT_MAX);
    // ft_printf("mine  : | %+d |\n", INT_MAX);
	// printf("original: | %+d |\n", INT_MIN);
    // ft_printf("mine  : | %+d |\n", INT_MIN);
	// printf("original: | %+d |\n", LONG_MAX);
    // ft_printf("mine  : | %+d |\n", LONG_MAX);
	// printf("original: | %+d |\n", LONG_MIN);
    // ft_printf("mine  : | %+d |\n", LONG_MIN);
	// printf("original: | %+d |\n", UINT_MAX);
    // ft_printf("mine  : | %+d |\n", UINT_MAX);
	// printf("original: | %+d |\n", ULONG_MAX);
    // ft_printf("mine  : | %+d |\n", ULONG_MAX);
	// printf("original: | %+d |\n", 9223372036854775807LL);
    // ft_printf("mine  : | %+d |\n", 9223372036854775807LL);
	// printf("original: | %+d %+d %+d %+d %+d %+d %+d |\n", INT_MAX, INT_MIN, LONG_MAX, LONG_MIN, ULONG_MAX, 0, -42);
    // ft_printf("mine  : | %+d %+d %+d %+d %+d %+d %+d |\n", INT_MAX, INT_MIN, LONG_MAX, LONG_MIN, ULONG_MAX, 0, -42);
	// printf("original: | %+i |\n", 0);
    // ft_printf("mine  : | %+i |\n", 0);
	// printf("original: | %+i |\n", -1);
    // ft_printf("mine  : | %+i |\n", -1);
	// printf("original: | %+i |\n", 1);
    // ft_printf("mine  : | %+i |\n", 1);
	// printf("original: | %+i |\n", 9);
    // ft_printf("mine  : | %+i |\n", 9);
	// printf("original: | %+i |\n", 10);
    // ft_printf("mine  : | %+i |\n", 10);
	// printf("original: | %+i |\n", 11);
    // ft_printf("mine  : | %+i |\n", 11);
	// printf("original: | %+i |\n", 15);
    // ft_printf("mine  : | %+i |\n", 15);
	// printf("original: | %+i |\n", 16);
    // ft_printf("mine  : | %+i |\n", 16);
	// printf("original: | %+i |\n", 17);
    // ft_printf("mine  : | %+i |\n", 17);
	// printf("original: | %+i |\n", 99);
    // ft_printf("mine  : | %+i |\n", 99);
	// printf("original: | %+i |\n", 100);
    // ft_printf("mine  : | %+i |\n", 100);
	// printf("original: | %+i |\n", 101);
    // ft_printf("mine  : | %+i |\n", 101);
	// printf("original: | %+i |\n", -9);
    // ft_printf("mine  : | %+i |\n", -9);
	// printf("original: | %+i |\n", -10);
    // ft_printf("mine  : | %+i |\n", -10);
	// printf("original: | %+i |\n", -11);
    // ft_printf("mine  : | %+i |\n", -11);
	// printf("original: | %+i |\n", -14);
    // ft_printf("mine  : | %+i |\n", -14);
	// printf("original: | %+i |\n", -15);
    // ft_printf("mine  : | %+i |\n", -15);
	// printf("original: | %+i |\n", -16);
    // ft_printf("mine  : | %+i |\n", -16);
	// printf("original: | %+i |\n", -99);
    // ft_printf("mine  : | %+i |\n", -99);
	// printf("original: | %+i |\n", -100);
    // ft_printf("mine  : | %+i |\n", -100);
	// printf("original: | %+i |\n", -101);
    // ft_printf("mine  : | %+i |\n", -101);
	// printf("original: | %+i |\n", INT_MAX);
    // ft_printf("mine  : | %+i |\n", INT_MAX);
	// printf("original: | %+i |\n", INT_MIN);
    // ft_printf("mine  : | %+i |\n", INT_MIN);
	// printf("original: | %+i |\n", LONG_MAX);
    // ft_printf("mine  : | %+i |\n", LONG_MAX);
	// printf("original: | %+i |\n", LONG_MIN);
    // ft_printf("mine  : | %+i |\n", LONG_MIN);
	// printf("original: | %+i |\n", UINT_MAX);
    // ft_printf("mine  : | %+i |\n", UINT_MAX);
	// printf("original: | %+i |\n", ULONG_MAX);
    // ft_printf("mine  : | %+i |\n", ULONG_MAX);
	// printf("original: | %+i |\n", 9223372036854775807LL);
    // ft_printf("mine  : | %+i |\n", 9223372036854775807LL);
	// printf("original: | %+i %+i %+i %+i %+i %+i %+i |\n", INT_MAX, INT_MIN, LONG_MAX, LONG_MIN, ULONG_MAX, 0, -42);
    // ft_printf("mine  : | %+i %+i %+i %+i %+i %+i %+i |\n", INT_MAX, INT_MIN, LONG_MAX, LONG_MIN, ULONG_MAX, 0, -42);

int main(void)
{
    int ret1, ret2;

    // printf("*****BASIC FLAG TESTS*****\n\n");
    
    // printf("1-->+d\n");
    // ret1 = ft_printf("|%+d|\n", 42);
    // ret2 = printf("|%+d|\n", 42);
    // printf("Returns: %d | %d\n\n", ret1, ret2);

    // printf("2--> d\n");
    // ret1 = ft_printf("|% d|\n", 42);
    // ret2 = printf("|% d|\n", 42);
    // printf("Returns: %d | %d\n\n", ret1, ret2);

    // printf("3-->-d\n");
    // ret1 = ft_printf("|%-d|\n", 42);
    // ret2 = printf("|%-d|\n", 42);
    // printf("Returns: %d | %d\n\n", ret1, ret2);

    // printf("(neg)4-->+d\n");
    // ret1 = ft_printf("|%+d|\n", -42);
    // ret2 = printf("|%+d|\n", -42);
    // printf("Returns: %d | %d\n\n", ret1, ret2);

    // printf("(neg)5--> d\n");
    // ret1 = ft_printf("|% d|\n", -42);
    // ret2 = printf("|% d|\n", -42);
    // printf("Returns: %d | %d\n\n", ret1, ret2);

    // printf("\n*****WIDTH AND ALIGNMENT TESTS*****\n\n");

    // printf("6-->+5d\n");
    // ret1 = ft_printf("|%+5d|\n", 42);
    // ret2 = printf("|%+5d|\n", 42);
    // printf("Returns: %d | %d\n\n", ret1, ret2);

    // printf("7-->-5d\n");
    // ret1 = ft_printf("|%-5d|\n", 42);
    // ret2 = printf("|%-5d|\n", 42);
    // printf("Returns: %d | %d\n\n", ret1, ret2);

    // printf("8--> 6d\n");
    // ret1 = ft_printf("|% 6d|\n", 42);
    // ret2 = printf("|% 6d|\n", 42);
    // printf("Returns: %d | %d\n\n", ret1, ret2);

    // printf("9-->-+6d\n");
    // ret1 = ft_printf("|%-+6d|\n", -42);
    // ret2 = printf("|%-+6d|\n", -42);
    // printf("Returns: %d | %d\n\n", ret1, ret2);

    // printf("(neg)10-->+5d\n");
    // ret1 = ft_printf("|%+5d|\n", -42);
    // ret2 = printf("|%+5d|\n", -42);
    // printf("Returns: %d | %d\n\n", ret1, ret2);

    // printf("\n*****WITH 0 FLAG TESTS*****\n\n");

    // printf("11-->05d\n");
    // ret1 = ft_printf("|%05d|\n", 42);
    // ret2 = printf("|%05d|\n", 42);
    // printf("Returns: %d | %d\n\n", ret1, ret2);

    // printf("12-->+05d\n");
    // ret1 = ft_printf("|%+05d|\n", 42);
    // ret2 = printf("|%+05d|\n", 42);
    // printf("Returns: %d | %d\n\n", ret1, ret2);

    // printf("13-->-05d\n");
    // ret1 = ft_printf("|%-05d|\n", 42);
    // ret2 = printf("|%-05d|\n", 42);
    // printf("Returns: %d | %d\n\n", ret1, ret2);

    // printf("(neg)14-->- 06d\n");
    // ret1 = ft_printf("|%- 06d|\n", -42);
    // ret2 = printf("|%- 06d|\n", -42);
    // printf("Returns: %d | %d\n\n", ret1, ret2);

    // printf("15-->-+06d\n");
    // ret1 = ft_printf("|%-+06d|\n", 42);
    // ret2 = printf("|%-+06d|\n", 42);
    // printf("Returns: %d | %d\n\n", ret1, ret2);

    // printf("\n*****WITH PRECISION TESTS*****\n\n");

    // printf("16-->.5d\n");
    // ret1 = ft_printf("|%.5d|\n", 42);
    // ret2 = printf("|%.5d|\n", 42);
    // printf("Returns: %d | %d\n\n", ret1, ret2);

    // printf("17-->+.5d\n");
    // ret1 = ft_printf("|%+.5d|\n", 42);
    // ret2 = printf("|%+.5d|\n", 42);
    // printf("Returns: %d | %d\n\n", ret1, ret2);

    // printf("18--> .4d\n");
    // ret1 = ft_printf("|% .4d|\n", 42);
    // ret2 = printf("|% .4d|\n", 42);
    // printf("Returns: %d | %d\n\n", ret1, ret2);

    // printf("19-->7.3d\n");
    // ret1 = ft_printf("|%7.3d|\n", 42);
    // ret2 = printf("|%7.3d|\n", 42);
    // printf("Returns: %d | %d\n\n", ret1, ret2);

    // printf("20-->-7.3d\n");
    // ret1 = ft_printf("|%-7.3d|\n", 42);
    // ret2 = printf("|%-7.3d|\n", 42);
    // printf("Returns: %d | %d\n\n", ret1, ret2);

    // printf("\n*****COMPLEX COMBINATIONS TESTS*****\n\n");

    // printf("21-->+07.4d\n");
    // ret1 = ft_printf("|%+07.4d|\n", 42);
    // ret2 = printf("|%+07.4d|\n", 42);
    // printf("Returns: %d | %d\n\n", ret1, ret2);

    // printf("22-->-+7.4d\n");
    // ret1 = ft_printf("|%-+7.4d|\n", 42);
    // ret2 = printf("|%-+7.4d|\n", 42);
    // printf("Returns: %d | %d\n\n", ret1, ret2);

    // printf("23-->+06.d\n");
    // ret1 = ft_printf("|%+06.d|\n", 42);
    // ret2 = printf("|%+06.d|\n", 42);
    // printf("Returns: %d | %d\n\n", ret1, ret2);

    // printf("(neg)24--> 8.5d\n");
    // ret1 = ft_printf("|% 8.5d|\n", -42);
    // ret2 = printf("|% 8.5d|\n", -42);
    // printf("Returns: %d | %d\n\n", ret1, ret2);

    // printf("25-->-+08.5d\n");
    // ret1 = ft_printf("|%-+08.5d|\n", 42);
    // ret2 = printf("|%-+08.5d|\n", 42);
    // printf("Returns: %d | %d\n\n", ret1, ret2);

    // printf("\n*****EDGE CASES TESTS*****\n\n");

    // printf("26-->+.d\n");
    // ret1 = ft_printf("|%+.d|\n", 0);
    // ret2 = printf("|%+.d|\n", 0);
    // printf("Returns: %d | %d\n\n", ret1, ret2);

    // printf("27-->-5.d\n");
    // ret1 = ft_printf("|%-5.d|\n", 0);
    // ret2 = printf("|%-5.d|\n", 0);
    // printf("Returns: %d | %d\n\n", ret1, ret2);

    // printf("28-->+5.0d\n");
    // ret1 = ft_printf("|%+5.0d|\n", 0);
    // ret2 = printf("|%+5.0d|\n", 0);
    // printf("Returns: %d | %d\n\n", ret1, ret2);



//     printf("1-->5u\n");
//     ret1 = ft_printf("|%5u|\n", 42);
//     ret2 = printf("|%5u|\n", 42);
//     printf("Returns: %d | %d\n\n", ret1, ret2);
// // Expected: |   42| (7 chars: | + 3 spaces + 42 + |\n), Returns: 7 | 7

// printf("2-->3u\n");
//     ret1 = ft_printf("|%3u|\n", 42);
//     ret2 = printf("|%3u|\n", 42);
//     printf("Returns: %d | %d\n\n", ret1, ret2);
// // Expected: |42| (5 chars: | + 42 + |\n), Returns: 5 | 5

// printf("3-->7u\n");
//     ret1 = ft_printf("|%7u|\n", 123456);
//     ret2 = printf("|%7u|\n", 123456);
//     printf("Returns: %d | %d\n\n", ret1, ret2);
// // Expected: | 123456| (9 chars: | + space + 123456 + |\n), Returns: 9 | 9

// printf("4-->05u\n");
//     ret1 = ft_printf("|%05u|\n", 42);
//     ret2 = printf("|%05u|\n", 42);
//     printf("Returns: %d | %d\n\n", ret1, ret2);
// // Expected: |00042| (7 chars: | + 00042 + |\n), Returns: 7 | 7

// printf("5-->08u\n");
//     ret1 = ft_printf("|%08u|\n", 123456);
//     ret2 = printf("|%08u|\n", 123456);
//     printf("Returns: %d | %d\n\n", ret1, ret2);
// // Expected: |00123456| (10 chars: | + 00123456 + |\n), Returns: 10 | 10

// printf("6-->03u\n");
//     ret1 = ft_printf("|%03u|\n", 42);
//     ret2 = printf("|%03u|\n", 42);
//     printf("Returns: %d | %d\n\n", ret1, ret2);
// // Expected: |42| (5 chars: | + 42 + |\n), Returns: 5 | 5

// printf("7-->.4u\n");
//     ret1 = ft_printf("|%.4u|\n", 42);
//     ret2 = printf("|%.4u|\n", 42);
//     printf("Returns: %d | %d\n\n", ret1, ret2);
// // Expected: |0042| (6 chars: | + 0042 + |\n), Returns: 6 | 6

// printf("8-->.6u\n");
//     ret1 = ft_printf("|%.6u|\n", 123456);
//     ret2 = printf("|%.6u|\n", 123456);
//     printf("Returns: %d | %d\n\n", ret1, ret2);
// // Expected: |123456| (8 chars: | + 123456 + |\n), Returns: 8 | 8

// printf("9-->.0u (42)\n");
//     ret1 = ft_printf("|%.0u|\n", 42);
//     ret2 = printf("|%.0u|\n", 42);
//     printf("Returns: %d | %d\n\n", ret1, ret2);
// // Expected: |42| (5 chars: | + 42 + |\n), Returns: 5 | 5

// printf("10-->.0u (0)\n");
//     ret1 = ft_printf("|%.0u|\n", 0);
//     ret2 = printf("|%.0u|\n", 0);
//     printf("Returns: %d | %d\n\n", ret1, ret2);
// // Expected: || (3 chars: | + |\n), Returns: 3 | 3


// printf("11-->-5u\n");
//     ret1 = ft_printf("|%-5u|\n", 42);
//     ret2 = printf("|%-5u|\n", 42);
//     printf("Returns: %d | %d\n\n", ret1, ret2);
// // Expected: |42   | (7 chars: | + 42 + 3 spaces + |\n), Returns: 7 | 7

// printf("12-->-8u\n");
//     ret1 = ft_printf("|%-8u|\n", 123456);
//     ret2 = printf("|%-8u|\n", 123456);
//     printf("Returns: %d | %d\n\n", ret1, ret2);
// // Expected: |123456  | (10 chars: | + 123456 + 2 spaces + |\n), Returns: 10 | 10

// printf("13-->-03u\n");
//     ret1 = ft_printf("|%-03u|\n", 42);
//     ret2 = printf("|%-03u|\n", 42);
//     printf("Returns: %d | %d\n\n", ret1, ret2);
// // Expected: |42 | (6 chars: | + 42 + space + |\n), Returns: 6 | 6


// printf("14-->+u\n");
//     ret1 = ft_printf("|%+u|\n", 42);
//     ret2 = printf("|%+u|\n", 42);
//     printf("Returns: %d | %d\n\n", ret1, ret2);
// // Expected: |42| (5 chars: | + 42 + |\n), Returns: 5 | 5

// printf("15-->+5u\n");
//     ret1 = ft_printf("|%+5u|\n", 42);
//     ret2 = printf("|%+5u|\n", 42);
//     printf("Returns: %d | %d\n\n", ret1, ret2);
// // Expected: |   42| (7 chars: | + 3 spaces + 42 + |\n), Returns: 7 | 7

// printf("16-->+05u\n");
//     ret1 = ft_printf("|%+05u|\n", 42);
//     ret2 = printf("|%+05u|\n", 42);
//     printf("Returns: %d | %d\n\n", ret1, ret2);
// // Expected: |00042| (7 chars: | + 00042 + |\n), Returns: 7 | 7


// printf("17--> u\n");
//     ret1 = ft_printf("|% u|\n", 42);
//     ret2 = printf("|% u|\n", 42);
//     printf("Returns: %d | %d\n\n", ret1, ret2);
// // Expected: |42| (5 chars: | + 42 + |\n), Returns: 5 | 5

// printf("18--> 6u\n");
//     ret1 = ft_printf("|% 6u|\n", 42);
//     ret2 = printf("|% 6u|\n", 42);
//     printf("Returns: %d | %d\n\n", ret1, ret2);
// // Expected: |    42| (8 chars: | + 4 spaces + 42 + |\n), Returns: 8 | 8

// printf("19--> 04u\n");
//     ret1 = ft_printf("|% 04u|\n", 42);
//     ret2 = printf("|% 04u|\n", 42);
//     printf("Returns: %d | %d\n\n", ret1, ret2);
// // Expected: |0042| (6 chars: | + 0042 + |\n), Returns: 6 | 6


// printf("20-->#u\n");
//     ret1 = ft_printf("|%#u|\n", 42);
//     ret2 = printf("|%#u|\n", 42);
//     printf("Returns: %d | %d\n\n", ret1, ret2);
// // Expected: |42| (5 chars: | + 42 + |\n), Returns: 5 | 5

// printf("21-->#6u\n");
//     ret1 = ft_printf("|%#6u|\n", 42);
//     ret2 = printf("|%#6u|\n", 42);
//     printf("Returns: %d | %d\n\n", ret1, ret2);
// // Expected: |    42| (8 chars: | + 4 spaces + 42 + |\n), Returns: 8 | 8

// printf("22-->#05u\n");
//     ret1 = ft_printf("|%#05u|\n", 42);
//     ret2 = printf("|%#05u|\n", 42);
//     printf("Returns: %d | %d\n\n", ret1, ret2);
// // Expected: |00042| (7 chars: | + 00042 + |\n), Returns: 7 | 7


// printf("23-->7.4u\n");
//     ret1 = ft_printf("|%7.4u|\n", 42);
//     ret2 = printf("|%7.4u|\n", 42);
//     printf("Returns: %d | %d\n\n", ret1, ret2);
// // Expected: |   0042| (9 chars: | + 3 spaces + 0042 + |\n), Returns: 9 | 9

// printf("24-->-7.4u\n");
//     ret1 = ft_printf("|%-7.4u|\n", 42);
//     ret2 = printf("|%-7.4u|\n", 42);
//     printf("Returns: %d | %d\n\n", ret1, ret2);
// // Expected: |0042   | (9 chars: | + 0042 + 3 spaces + |\n), Returns: 9 | 9

// printf("25-->+07.3u\n");
//     ret1 = ft_printf("|%+07.3u|\n", 42);
//     ret2 = printf("|%+07.3u|\n", 42);
//     printf("Returns: %d | %d\n\n", ret1, ret2);
// // Expected: |    042| (9 chars: | + 4 spaces + 042 + |\n), Returns: 9 | 9

// printf("26-->-+5.3u\n");
//     ret1 = ft_printf("|%-+5.3u|\n", 42);
//     ret2 = printf("|%-+5.3u|\n", 42);
//     printf("Returns: %d | %d\n\n", ret1, ret2);
// // Expected: |042  | (7 chars: | + 042 + 2 spaces + |\n), Returns: 7 | 7

// printf("27--> 5.0u (0)\n");
//     ret1 = ft_printf("|% 5.0u|\n", 0);
//     ret2 = printf("|% 5.0u|\n", 0);
//     printf("Returns: %d | %d\n\n", ret1, ret2);
// // Expected: |     | (7 chars: | + 5 spaces + |\n), Returns: 7 | 7

//     printf("\n16-->...d\n");
//     ret1 = ft_printf("|%...d|\n", 0);
//     ret2 = printf("|%...d|\n", 0);
//     printf("Returns: %d | %d\n", ret1, ret2);

// printf("1-->x\n");
//     ret1 = ft_printf("|%x|\n", 42);
//     ret2 = printf("|%x|\n", 42);
//     printf("Returns: %d | %d\n\n", ret1, ret2);
// // |2a|, Returns: 5 | 5

// printf("2-->5x\n");
//     ret1 = ft_printf("|%5x|\n", 42);
//     ret2 = printf("|%5x|\n", 42);
//     printf("Returns: %d | %d\n\n", ret1, ret2);
// // |   2a|, Returns: 7 | 7

// printf("3-->05x\n");
//     ret1 = ft_printf("|%05x|\n", 42);
//     ret2 = printf("|%05x|\n", 42);
//     printf("Returns: %d | %d\n\n", ret1, ret2);
// // |0002a|, Returns: 7 | 7

// printf("4-->.4x\n");
//     ret1 = ft_printf("|%.4x|\n", 42);
//     ret2 = printf("|%.4x|\n", 42);
//     printf("Returns: %d | %d\n\n", ret1, ret2);
// // |002a|, Returns: 6 | 6

// printf("5-->-5x\n");
//     ret1 = ft_printf("|%-5x|\n", 42);
//     ret2 = printf("|%-5x|\n", 42);
//     printf("Returns: %d | %d\n\n", ret1, ret2);
// // |2a   |, Returns: 7 | 7

// printf("6-->#x\n");
//     ret1 = ft_printf("|%#x|\n", 42);
//     ret2 = printf("|%#x|\n", 42);
//     printf("Returns: %d | %d\n\n", ret1, ret2);
// // |0x2a|, Returns: 6 | 6

// printf("7-->#X\n");
//     ret1 = ft_printf("|%#X|\n", 42);
//     ret2 = printf("|%#X|\n", 42);
//     printf("Returns: %d | %d\n\n", ret1, ret2);
// // |0X2A|, Returns: 6 | 6

// printf("8-->7.3x\n");
//     ret1 = ft_printf("|%7.3x|\n", 42);
//     ret2 = printf("|%7.3x|\n", 42);
//     printf("Returns: %d | %d\n\n", ret1, ret2);
// // |    02a|, Returns: 9 | 9

// printf("9-->#8.4X\n");
//     ret1 = ft_printf("|%#8.4X|\n", 42);
//     ret2 = printf("|%#8.4X|\n", 42);
//     printf("Returns: %d | %d\n\n", ret1, ret2);
// |  0X002A|, Returns: 10 | 10

// printf("10-->.0x (0)\n");
//     ret1 = ft_printf("|%.0x|\n", 0);
//     ret2 = printf("|%.0x|\n", 0);
//     printf("Returns: %d | %d\n\n", ret1, ret2);
// // ||, Returns: 3 | 3

// printf("1-->#12.8x\n");
//     ret1 = ft_printf("|%#12.8x|\n", 123456);
//     ret2 = printf("|%#12.8x|\n", 123456);
//     printf("Returns: %d | %d\n\n", ret1, ret2);
// // Expected: |  0x0001e240| (14 chars: | + 2 spaces + 0x + 0001e240 + |\n)
// // Returns: 14 | 14
// // 123456 = 0x1e240, precision 8 pads to 0001e240, width 12 includes 0x

// printf("2-->-010.5x\n");
//     ret1 = ft_printf("|%-010.5x|\n", 42);
//     ret2 = printf("|%-010.5x|\n", 42);
//     printf("Returns: %d | %d\n\n", ret1, ret2);
// // Expected: |0002a     | (12 chars: | + 0002a + 5 spaces + |\n)
// // Returns: 12 | 12
// // Precision 5 -> 0002a, width 10, - overrides 0, pad right with spaces

// printf("3-->#15X\n");
//     ret1 = ft_printf("|%#15X|\n", 4294967295U); // UINT_MAX
//     ret2 = printf("|%#15X|\n", 4294967295U);
//     printf("Returns: %d | %d\n\n", ret1, ret2);
// // Expected: |     0XFFFFFFFF| (17 chars: | + 5 spaces + 0X + FFFFFFFF + |\n)
// // Returns: 17 | 17
// // 4294967295 = 0xffffffff, # adds 0X, width 15 pads left

// printf("4-->#-6.8x\n");
//     ret1 = ft_printf("|%#-6.8x|\n", 255);
//     ret2 = printf("|%#-6.8x|\n", 255);
//     printf("Returns: %d | %d\n\n", ret1, ret2);
// // Expected: |0x000000ff| (12 chars: | + 0x000000ff + |\n)
// // Returns: 12 | 12
// // 255 = 0xff, precision 8 -> 000000ff, # adds 0x, width 6 ignored (smaller)

// printf("5-->12.0x\n");
//     ret1 = ft_printf("|%12.0x|\n", 0);
//     ret2 = printf("|%12.0x|\n", 0);
//     printf("Returns: %d | %d\n\n", ret1, ret2);
// // Expected: |            | (14 chars: | + 12 spaces + |\n)
// // Returns: 14 | 14
// // Precision 0 + 0 -> empty, width 12 pads with spaces

// printf("6-->+ 08.4X\n");
//     ret1 = ft_printf("|%+ 08.4X|\n", 1234);
//     ret2 = printf("|%+ 08.4X|\n", 1234);
//     printf("Returns: %d | %d\n\n", ret1, ret2);
// // Expected: |    04D2| (10 chars: | + 4 spaces + 04D2 + |\n)
// // Returns: 10 | 10
// // 1234 = 0x4d2, precision 4 -> 04d2, + and ' ' ignored, 0 ignored due to precision

// printf("7-->#-10.12x\n");
//     ret1 = ft_printf("|%#-10.12x|\n", 987654);
//     ret2 = printf("|%#-10.12x|\n", 987654);
//     printf("Returns: %d | %d\n\n", ret1, ret2);
// // Expected: |0x0000000f1206| (16 chars: | + 0x0000000f1206 + |\n)
// // Returns: 16 | 16
// // 987654 = 0xf1206, precision 12 -> 0000000f1206, # adds 0x, width 10 ignored

// printf("8-->#6x\n");
//     ret1 = ft_printf("|%#6x|\n", 0);
//     ret2 = printf("|%#6x|\n", 0);
//     printf("Returns: %d | %d\n\n", ret1, ret2);
// // Expected: |     0| (8 chars: | + 5 spaces + 0 + |\n)
// // Returns: 8 | 8
// // 0 -> 0, # doesn’t add 0x for zero, width 6 pads left

// printf("9-->#+ -015.6X\n");
//     ret1 = ft_printf("|%#+ -015.6X|\n", 65535);
//     ret2 = printf("|%#+ -015.6X|\n", 65535);
//     printf("Returns: %d | %d\n\n", ret1, ret2);
// // Expected: |0X00FFFF         | (18 chars: | + 0X00FFFF + 9 spaces + |\n)
// // Returns: 18 | 18
// // 65535 = 0xffff, precision 6 -> 00ffff, # adds 0X, - pads right, +/' '/0 ignored

// printf("10-->#5.0X\n");
//     ret1 = ft_printf("|%#5.0X|\n", 42);
//     ret2 = printf("|%#5.0X|\n", 42);
//     printf("Returns: %d | %d\n\n", ret1, ret2);
// // Expected: |  0X2A| (8 chars: | + 2 spaces + 0X2A + |\n)
// // Returns: 8 | 8
// // 42 = 0x2a, precision 0 -> 2a, # adds 0X, width 5 pads left


    char *s2 = "Mussum Ipsum, cacilds vidis litro abertis. Posuere libero varius. Nullam a nisl ut ante blandit hendrerit. Aenean sit amet nisi. Atirei o pau no gatis, per gatis num morreus.";

    printf("%s\n", "start");

    printf("\n| %+d |\n", 0);
    ft_printf("| %+d |\n", 0);
	printf("\n| %+d |\n", -1);
    ft_printf("| %+d |\n", -1);
	printf("\n| %+d |\n", 9);
    ft_printf("| %+d |\n", 9);
	printf("\n| %+d |\n", 10);
    ft_printf("| %+d |\n", 10);
	printf("\n| %+d |\n", 11);
    ft_printf("| %+d |\n", 11);
	printf("\n| %+d |\n", 15);
    ft_printf("| %+d |\n", 15);
	printf("\n| %+d |\n", 16);
    ft_printf("| %+d |\n", 16);
	printf("\n| %+d |\n", 17);
    ft_printf("| %+d |\n", 17);
	printf("\n| %+d |\n", 99);
    ft_printf("| %+d |\n", 99);
	printf("\n| %+d |\n", 100);
    ft_printf("| %+d |\n", 100);
	printf("\n| %+d |\n", 101);
    ft_printf("| %+d |\n", 101);
	printf("\n| %+d |\n", -9);
    ft_printf("| %+d |\n", -9);
	printf("\n| %+d |\n", -10);
    ft_printf("| %+d |\n", -10);
	printf("\n| %+d |\n", -11);
    ft_printf("| %+d |\n", -11);
	printf("\n| %+d |\n", -14);
    ft_printf("| %+d |\n", -14);
	printf("\n| %+d |\n", -15);
    ft_printf("| %+d |\n", -15);
	printf("\n| %+d |\n", -16);
    ft_printf("| %+d |\n", -16);
	printf("\n| %+d |\n", -99);
    ft_printf("| %+d |\n", -99);
	printf("\n| %+d |\n", -100);
    ft_printf("| %+d |\n", -100);
	printf("\n| %+d |\n", -101);
    ft_printf("| %+d |\n", -101);
	printf("\n| %+d |\n", INT_MAX);
    ft_printf("| %+d |\n", INT_MAX);
	printf("\n| %+d |\n", INT_MIN);
    ft_printf("| %+d |\n", INT_MIN);
	printf("\n| %+d |\n", LONG_MAX);
    ft_printf("| %+d |\n", LONG_MAX);
	printf("\n| %+d |\n", LONG_MIN);
    ft_printf("| %+d |\n", LONG_MIN);
	printf("\n| %+d |\n", UINT_MAX);
    ft_printf("| %+d |\n", UINT_MAX);
	printf("\n| %+d |\n", ULONG_MAX);
    ft_printf("| %+d |\n", ULONG_MAX);
	printf("\n| %+d |\n", 9223372036854775807LL);
    ft_printf("| %+d |\n", 9223372036854775807LL);
	printf("\n| %+d %+d %+d %+d %+d %+d %+d |\n", INT_MAX, INT_MIN, LONG_MAX, LONG_MIN, ULONG_MAX, 0, -42);
    ft_printf("| %+d %+d %+d %+d %+d %+d %+d |\n", INT_MAX, INT_MIN, LONG_MAX, LONG_MIN, ULONG_MAX, 0, -42);
	printf("\n| %+i |\n", 0);
    ft_printf("| %+i |\n", 0);
	printf("\n| %+i |\n", -1);
    ft_printf("| %+i |\n", -1);
	printf("\n| %+i |\n", 1);
    ft_printf("| %+i |\n", 1);
	printf("\n| %+i |\n", 9);
    ft_printf("| %+i |\n", 9);
	printf("\n| %+i |\n", 10);
    ft_printf("| %+i |\n", 10);
	printf("\n| %+i |\n", 11);
    ft_printf("| %+i |\n", 11);
	printf("\n| %+i |\n", 15);
    ft_printf("| %+i |\n", 15);
	printf("\n| %+i |\n", 16);
    ft_printf("| %+i |\n", 16);
	printf("\n| %+i |\n", 17);
    ft_printf("| %+i |\n", 17);
	printf("\n| %+i |\n", 99);
    ft_printf("| %+i |\n", 99);
	printf("\n| %+i |\n", 100);
    ft_printf("| %+i |\n", 100);
	printf("\n| %+i |\n", 101);
    ft_printf("| %+i |\n", 101);
	printf("\n| %+i |\n", -9);
    ft_printf("| %+i |\n", -9);
	printf("\n| %+i |\n", -10);
    ft_printf("| %+i |\n", -10);
	printf("\n| %+i |\n", -11);
    ft_printf("| %+i |\n", -11);
	printf("\n| %+i |\n", -14);
    ft_printf("| %+i |\n", -14);
	printf("\n| %+i |\n", -15);
    ft_printf("| %+i |\n", -15);
	printf("\n| %+i |\n", -16);
    ft_printf("| %+i |\n", -16);
	printf("\n| %+i |\n", -99);
    ft_printf("| %+i |\n", -99);
	printf("\n| %+i |\n", -100);
    ft_printf("| %+i |\n", -100);
	printf("\n| %+i |\n", -101);
    ft_printf("| %+i |\n", -101);
	printf("\n| %+i |\n", INT_MAX);
    ft_printf("| %+i |\n", INT_MAX);
	printf("\n| %+i |\n", INT_MIN);
    ft_printf("| %+i |\n", INT_MIN);
	printf("\n| %+i |\n", LONG_MAX);
    ft_printf("| %+i |\n", LONG_MAX);
	printf("\n| %+i |\n", LONG_MIN);
    ft_printf("| %+i |\n", LONG_MIN);
	printf("\n| %+i |\n", UINT_MAX);
    ft_printf("| %+i |\n", UINT_MAX);
	printf("\n| %+i |\n", ULONG_MAX);
    ft_printf("| %+i |\n", ULONG_MAX);
	printf("\n| %+i |\n", 9223372036854775807LL);
    ft_printf("| %+i |\n", 9223372036854775807LL);
	printf("\n| %+i %+i %+i %+i %+i %+i %+i |\n", INT_MAX, INT_MIN, LONG_MAX, LONG_MIN, ULONG_MAX, 0, -42);
    ft_printf("| %+i %+i %+i %+i %+i %+i %+i |\n", INT_MAX, INT_MIN, LONG_MAX, LONG_MIN, ULONG_MAX, 0, -42);
	/*ZER0*/
	printf("\n| %01d |\n", 0);
    ft_printf("| %01d |\n", 0);
	printf("\n| %02d |\n", -1);
    ft_printf("| %02d |\n", -1);
	printf("\n| %04d |\n", 9);
    ft_printf("| %04d |\n", 9);
	printf("\n| %01d |\n", 10);
    ft_printf("| %01d |\n", 10);
	printf("\n| %02d |\n", 11);
    ft_printf("| %02d |\n", 11);
	printf("\n| %03d |\n", 15);
    ft_printf("| %03d |\n", 15);
	printf("\n| %04d |\n", 16);
    ft_printf("| %04d |\n", 16);
	printf("\n| %05d |\n", 17);
    ft_printf("| %05d |\n", 17);
	printf("\n| %01d |\n", 99);
    ft_printf("| %01d |\n", 99);
	printf("\n| %02d |\n", 100);
    ft_printf("| %02d |\n", 100);
	printf("\n| %03d |\n", 101);
    ft_printf("| %03d |\n", 101);
	printf("\n| %01d |\n", -9);
    ft_printf("| %01d |\n", -9);
	printf("\n| %02d |\n", -10);
    ft_printf("| %02d |\n", -10);
	printf("\n| %03d |\n", -11);
    ft_printf("| %03d |\n", -11);
	printf("\n| %04d |\n", -14);
    ft_printf("| %04d |\n", -14);
	printf("\n| %05d |\n", -15);
    ft_printf("| %05d |\n", -15);
	printf("\n| %06d |\n", -16);
    ft_printf("| %06d |\n", -16);
	printf("\n| %01d |\n", -99);
    ft_printf("| %01d |\n", -99);
	printf("\n| %02d |\n", -100);
    ft_printf("| %02d |\n", -100);
	printf("\n| %03d |\n", -101);
    ft_printf("| %03d |\n", -101);
	printf("\n| %09d |\n", INT_MAX);
    ft_printf("| %09d |\n", INT_MAX);
	printf("\n| %010d |\n", INT_MIN);
    ft_printf("| %010d |\n", INT_MIN);
	printf("\n| %011d |\n", LONG_MAX);
    ft_printf("| %011d |\n", LONG_MAX);
	printf("\n| %012d |\n", LONG_MIN);
    ft_printf("| %012d |\n", LONG_MIN);
	printf("\n| %013d |\n", UINT_MAX);
    ft_printf("| %013d |\n", UINT_MAX);
	printf("\n| %014d |\n", ULONG_MAX);
    ft_printf("| %014d |\n", ULONG_MAX);
	printf("\n| %015d |\n", 9223372036854775807LL);
    ft_printf("| %015d |\n", 9223372036854775807LL);
	printf("\n| %09d %010d %011d %012d %013d %014d %015d\n", INT_MAX, INT_MIN, LONG_MAX, LONG_MIN, ULONG_MAX, 0, -42);
    ft_printf("| %09d %010d %011d %012d %013d %014d %015d\n", INT_MAX, INT_MIN, LONG_MAX, LONG_MIN, ULONG_MAX, 0, -42);
	printf("\n| %01i |\n", 0);
    ft_printf("| %01i |\n", 0);
	printf("\n| %02i |\n", -1);
    ft_printf("| %02i |\n", -1);
	printf("\n| %03i |\n", 1);
    ft_printf("| %03i |\n", 1);
	printf("\n| %04i |\n", 9);
    ft_printf("| %04i |\n", 9);
	printf("\n| %01i |\n", 10);
    ft_printf("| %01i |\n", 10);
	printf("\n| %02i |\n", 11);
    ft_printf("| %02i |\n", 11);
	printf("\n| %03i |\n", 15);
    ft_printf("| %03i |\n", 15);
	printf("\n| %04i |\n", 16);
    ft_printf("| %04i |\n", 16);
	printf("\n| %05i |\n", 17);
    ft_printf("| %05i |\n", 17);
	printf("\n| %01i |\n", 99);
    ft_printf("| %01i |\n", 99);
	printf("\n| %02i |\n", 100);
    ft_printf("| %02i |\n", 100);
	printf("\n| %03i |\n", 101);
    ft_printf("| %03i |\n", 101);
	printf("\n| %01i |\n", -9);
    ft_printf("| %01i |\n", -9);
	printf("\n| %02i |\n", -10);
    ft_printf("| %02i |\n", -10);
	printf("\n| %03i |\n", -11);
    ft_printf("| %03i |\n", -11);
	printf("\n| %04i |\n", -14);
    ft_printf("| %04i |\n", -14);
	printf("\n| %05i |\n", -15);
    ft_printf("| %05i |\n", -15);
	printf("\n| %06i |\n", -16);
    ft_printf("| %06i |\n", -16);
	printf("\n| %01i |\n", -99);
    ft_printf("| %01i |\n", -99);
	printf("\n| %02i |\n", -100);
    ft_printf("| %02i |\n", -100);
	printf("\n| %03i |\n", -101);
    ft_printf("| %03i |\n", -101);
	printf("\n| %09i |\n", INT_MAX);
    ft_printf("| %09i |\n", INT_MAX);
	printf("\n| %010i |\n", INT_MIN);
    ft_printf("| %010i |\n", INT_MIN);
	printf("\n| %011i |\n", LONG_MAX);
    ft_printf("| %011i |\n", LONG_MAX);
	printf("\n| %012i |\n", LONG_MIN);
    ft_printf("| %012i |\n", LONG_MIN);
	printf("\n| %013i |\n", UINT_MAX);
    ft_printf("| %013i |\n", UINT_MAX);
	printf("\n| %014i |\n", ULONG_MAX);
    ft_printf("| %014i |\n", ULONG_MAX);
	printf("\n| %015i |\n", 9223372036854775807LL);
    ft_printf("| %015i |\n", 9223372036854775807LL);
	printf("\n| %09i %010i %011i %012i %013i %014i %015i\n", INT_MAX, INT_MIN, LONG_MAX, LONG_MIN, ULONG_MAX, 0, -42);
    ft_printf("| %09i %010i %011i %012i %013i %014i %015i\n", INT_MAX, INT_MIN, LONG_MAX, LONG_MIN, ULONG_MAX, 0, -42);
	printf("\n| %01u |\n", 0);
    ft_printf("| %01u |\n", 0);
	printf("\n| %02u |\n", -1);
    ft_printf("| %02u |\n", -1);
	printf("\n| %03u |\n", 1);
    ft_printf("| %03u |\n", 1);
	printf("\n| %04u |\n", 9);
    ft_printf("| %04u |\n", 9);
	printf("\n| %01u |\n", 10);
    ft_printf("| %01u |\n", 10);
	printf("\n| %02u |\n", 11);
    ft_printf("| %02u |\n", 11);
	printf("\n| %03u |\n", 15);
    ft_printf("| %03u |\n", 15);
	printf("\n| %04u |\n", 16);
    ft_printf("| %04u |\n", 16);
	printf("\n| %05u |\n", 17);
    ft_printf("| %05u |\n", 17);
	printf("\n| %01u |\n", 99);
    ft_printf("| %01u |\n", 99);
	printf("\n| %02u |\n", 100);
    ft_printf("| %02u |\n", 100);
	printf("\n| %03u |\n", 101);
    ft_printf("| %03u |\n", 101);
	printf("\n| %01u |\n", -9);
    ft_printf("| %01u |\n", -9);
	printf("\n| %02u |\n", -10);
    ft_printf("| %02u |\n", -10);
	printf("\n| %03u |\n", -11);
    ft_printf("| %03u |\n", -11);
	printf("\n| %04u |\n", -14);
    ft_printf("| %04u |\n", -14);
	printf("\n| %05u |\n", -15);
    ft_printf("| %05u |\n", -15);
	printf("\n| %06u |\n", -16);
    ft_printf("| %06u |\n", -16);
	printf("\n| %01u |\n", -99);
    ft_printf("| %01u |\n", -99);
	printf("\n| %02u |\n", -100);
    ft_printf("| %02u |\n", -100);
	printf("\n| %03u |\n", -101);
    ft_printf("| %03u |\n", -101);
	printf("\n| %09u |\n", INT_MAX);
    ft_printf("| %09u |\n", INT_MAX);
	printf("\n| %010u |\n", INT_MIN);
    ft_printf("| %010u |\n", INT_MIN);
	printf("\n| %011u |\n", LONG_MAX);
    ft_printf("| %011u |\n", LONG_MAX);
	printf("\n| %012u |\n", LONG_MIN);
    ft_printf("| %012u |\n", LONG_MIN);
	printf("\n| %013u |\n", UINT_MAX);
    ft_printf("| %013u |\n", UINT_MAX);
	printf("\n| %014u |\n", ULONG_MAX);
    ft_printf("| %014u |\n", ULONG_MAX);
	printf("\n| %015u |\n", 9223372036854775807LL);
    ft_printf("| %015u |\n", 9223372036854775807LL);
	printf("\n| %09u %010u %011u %012u %013u %014u %015u\n", INT_MAX, INT_MIN, LONG_MAX, LONG_MIN, ULONG_MAX, 0, -42);
    ft_printf("| %09u %010u %011u %012u %013u %014u %015u\n", INT_MAX, INT_MIN, LONG_MAX, LONG_MIN, ULONG_MAX, 0, -42);
	printf("\n| %01x |\n", 0);
    ft_printf("| %01x |\n", 0);
	printf("\n| %02x |\n", -1);
    ft_printf("| %02x |\n", -1);
	printf("\n| %03x |\n", 1);
    ft_printf("| %03x |\n", 1);
	printf("\n| %04x |\n", 9);
    ft_printf("| %04x |\n", 9);
	printf("\n| %01x |\n", 10);
    ft_printf("| %01x |\n", 10);
	printf("\n| %02x |\n", 11);
    ft_printf("| %02x |\n", 11);
	printf("\n| %03x |\n", 15);
    ft_printf("| %03x |\n", 15);
	printf("\n| %04x |\n", 16);
    ft_printf("| %04x |\n", 16);
	printf("\n| %05x |\n", 17);
    ft_printf("| %05x |\n", 17);
	printf("\n| %01x |\n", 99);
    ft_printf("| %01x |\n", 99);
	printf("\n| %02x |\n", 100);
    ft_printf("| %02x |\n", 100);
	printf("\n| %03x |\n", 101);
    ft_printf("| %03x |\n", 101);
	printf("\n| %01x |\n", -9);
    ft_printf("| %01x |\n", -9);
	printf("\n| %02x |\n", -10);
    ft_printf("| %02x |\n", -10);
	printf("\n| %03x |\n", -11);
    ft_printf("| %03x |\n", -11);
	printf("\n| %04x |\n", -14);
    ft_printf("| %04x |\n", -14);
	printf("\n| %05x |\n", -15);
    ft_printf("| %05x |\n", -15);
	printf("\n| %06x |\n", -16);
    ft_printf("| %06x |\n", -16);
	printf("\n| %01x |\n", -99);
    ft_printf("| %01x |\n", -99);
	printf("\n| %02x |\n", -100);
    ft_printf("| %02x |\n", -100);
	printf("\n| %03x |\n", -101);
    ft_printf("| %03x |\n", -101);
	printf("\n| %09x |\n", INT_MAX);
    ft_printf("| %09x |\n", INT_MAX);
	printf("\n| %010x |\n", INT_MIN);
    ft_printf("| %010x |\n", INT_MIN);
	printf("\n| %011x |\n", LONG_MAX);
    ft_printf("| %011x |\n", LONG_MAX);
	printf("\n| %012x |\n", LONG_MIN);
    ft_printf("| %012x |\n", LONG_MIN);
	printf("\n| %013x |\n", UINT_MAX);
    ft_printf("| %013x |\n", UINT_MAX);
	printf("\n| %014x |\n", ULONG_MAX);
    ft_printf("| %014x |\n", ULONG_MAX);
	printf("\n| %015x |\n", 9223372036854775807LL);
    ft_printf("| %015x |\n", 9223372036854775807LL);
	printf("\n| %09x %010x %011x %012x %013x %014x %015x\n", INT_MAX, INT_MIN, LONG_MAX, LONG_MIN, ULONG_MAX, 0, -42);
    ft_printf("| %09x %010x %011x %012x %013x %014x %015x\n", INT_MAX, INT_MIN, LONG_MAX, LONG_MIN, ULONG_MAX, 0, -42);
	printf("\n| %01X |\n", 0);
    ft_printf("| %01X |\n", 0);
	printf("\n| %02X |\n", -1);
    ft_printf("| %02X |\n", -1);
	printf("\n| %03X |\n", 1);
    ft_printf("| %03X |\n", 1);
	printf("\n| %04X |\n", 9);
    ft_printf("| %04X |\n", 9);
	printf("\n| %01X |\n", 10);
    ft_printf("| %01X |\n", 10);
	printf("\n| %02X |\n", 11);
    ft_printf("| %02X |\n", 11);
	printf("\n| %03X |\n", 15);
    ft_printf("| %03X |\n", 15);
	printf("\n| %04X |\n", 16);
    ft_printf("| %04X |\n", 16);
	printf("\n| %05X |\n", 17);
    ft_printf("| %05X |\n", 17);
	printf("\n| %01X |\n", 99);
    ft_printf("| %01X |\n", 99);
	printf("\n| %02X |\n", 100);
    ft_printf("| %02X |\n", 100);
	printf("\n| %03X |\n", 101);
    ft_printf("| %03X |\n", 101);
	printf("\n| %01X |\n", -9);
    ft_printf("| %01X |\n", -9);
	printf("\n| %02X |\n", -10);
    ft_printf("| %02X |\n", -10);
	printf("\n| %03X |\n", -11);
    ft_printf("| %03X |\n", -11);
	printf("\n| %04X |\n", -14);
    ft_printf("| %04X |\n", -14);
	printf("\n| %05X |\n", -15);
    ft_printf("| %05X |\n", -15);
	printf("\n| %06X |\n", -16);
    ft_printf("| %06X |\n", -16);
	printf("\n| %01X |\n", -99);
    ft_printf("| %01X |\n", -99);
	printf("\n| %02X |\n", -100);
    ft_printf("| %02X |\n", -100);
	printf("\n| %03X |\n", -101);
    ft_printf("| %03X |\n", -101);
	printf("\n| %09X |\n", INT_MAX);
    ft_printf("| %09X |\n", INT_MAX);
	printf("\n| %010X |\n", INT_MIN);
    ft_printf("| %010X |\n", INT_MIN);
	printf("\n| %011X |\n", LONG_MAX);
    ft_printf("| %011X |\n", LONG_MAX);
	printf("\n| %012X |\n", LONG_MIN);
    ft_printf("| %012X |\n", LONG_MIN);
	printf("\n| %013X |\n", UINT_MAX);
    ft_printf("| %013X |\n", UINT_MAX);
	printf("\n| %014X |\n", ULONG_MAX);
    ft_printf("| %014X |\n", ULONG_MAX);
	printf("\n| %015X |\n", 9223372036854775807LL);
    ft_printf("| %015X |\n", 9223372036854775807LL);
	printf("\n| %09X %010X %011X %012X %013X %014X %015X |\n", INT_MAX, INT_MIN, LONG_MAX, LONG_MIN, ULONG_MAX, 0, -42);
    ft_printf("| %09X %010X %011X %012X %013X %014X %015X |\n", INT_MAX, INT_MIN, LONG_MAX, LONG_MIN, ULONG_MAX, 0, -42);

	/*c*/
	printf("\n%c\n", '0');
    ft_printf("%c\n", '0');
	printf("\n %c \n", '0');
    ft_printf(" %c \n", '0');
	printf("\n %c\n", '0' - 256);
    ft_printf(" %c\n", '0' - 256);
	printf("\n%c \n", '0' + 256);
    ft_printf("%c \n", '0' + 256);
	printf("\n %c %c %c \n", '0', 0, '1');
    ft_printf(" %c %c %c \n", '0', 0, '1');
	printf("\n %c %c %c \n", ' ', ' ', ' ');
    ft_printf(" %c %c %c \n", ' ', ' ', ' ');
	printf("\n %c %c %c \n", '1', '2', '3');
    ft_printf(" %c %c %c \n", '1', '2', '3');
	printf("\n %c %c %c \n", '2', '1', 0);
    ft_printf(" %c %c %c \n", '2', '1', 0);
	printf("\n %c %c %c \n", 0, '1', '2');
    ft_printf(" %c %c %c \n", 0, '1', '2');

	/*d*/
	printf("\n %d \n", 0);
    ft_printf(" %d \n", 0);
	printf("\n %d \n", -1);
    ft_printf(" %d \n", -1);
	printf("\n %d \n", 1);
    ft_printf(" %d \n", 1);
	printf("\n %d \n", 9);
    ft_printf(" %d \n", 9);
	printf("\n %d \n", 10);
    ft_printf(" %d \n", 10);
	printf("\n %d \n", 11);
    ft_printf(" %d \n", 11);
	printf("\n %d \n", 15);
    ft_printf(" %d \n", 15);
	printf("\n %d \n", 16);
    ft_printf(" %d \n", 16);
	printf("\n %d \n", 17);
    ft_printf(" %d \n", 17);
	printf("\n %d \n", 99);
    ft_printf(" %d \n", 99);
	printf("\n %d \n", 100);
    ft_printf(" %d \n", 100);
	printf("\n %d \n", 101);
    ft_printf(" %d \n", 101);
	printf("\n %d \n", -9);
    ft_printf(" %d \n", -9);
	printf("\n %d \n", -10);
    ft_printf(" %d \n", -10);
	printf("\n %d \n", -11);
    ft_printf(" %d \n", -11);
	printf("\n %d \n", -14);
    ft_printf(" %d \n", -14);
	printf("\n %d \n", -15);
    ft_printf(" %d \n", -15);
	printf("\n %d \n", -16);
    ft_printf(" %d \n", -16);
	printf("\n %d \n", -99);
    ft_printf(" %d \n", -99);
	printf("\n %d \n", -100);
    ft_printf(" %d \n", -100);
	printf("\n %d \n", -101);
    ft_printf(" %d \n", -101);
	printf("\n %d \n", INT_MAX);
    ft_printf(" %d \n", INT_MAX);
	printf("\n %d \n", INT_MIN);
    ft_printf(" %d \n", INT_MIN);
	printf("\n %d \n", LONG_MAX);
    ft_printf(" %d \n", LONG_MAX);
	printf("\n %d \n", LONG_MIN);
    ft_printf(" %d \n", LONG_MIN);
	printf("\n %d \n", UINT_MAX);
    ft_printf(" %d \n", UINT_MAX);
	printf("\n %d \n", ULONG_MAX);
    ft_printf(" %d \n", ULONG_MAX);
	printf("\n %d \n", 9223372036854775807LL);
    ft_printf(" %d \n", 9223372036854775807LL);
	printf("\n %d %d %d %d %d %d %d\n", INT_MAX, INT_MIN, LONG_MAX, LONG_MIN, ULONG_MAX, 0, -42);
    ft_printf(" %d %d %d %d %d %d %d\n", INT_MAX, INT_MIN, LONG_MAX, LONG_MIN, ULONG_MAX, 0, -42);

	/*dot*/
	printf("\n%.s\n", "");
    ft_printf("%.s\n", "");
	printf("\n %.1s\n", "");
    ft_printf(" %.1s\n", "");
	printf("\n%.1s \n", "");
    ft_printf("%.1s \n", "");
	printf("\n %.s \n", "");
    ft_printf(" %.s \n", "");
	printf("\n %.s \n", "-");
    ft_printf(" %.s \n", "-");
	printf("\n %.2s %.1s \n", "\n", "-");
    ft_printf(" %.2s %.1s \n", "\n", "-");
	printf("\n %.3s %.2s \n", " - \n", "");
    ft_printf(" %.3s %.2s \n", " - \n", "");
	printf("\n %.1s %.2s %.3s %.4s \n", " - \n", "\n", "4\n", "");
    ft_printf(" %.1s %.2s %.3s %.4s \n", " - \n", "\n", "4\n", "");
	printf("\n %.2s %.3s %.4s %.5s %.1s \n", " - \n", "\n", "4\n", "\n", "2 ");
    ft_printf(" %.2s %.3s %.4s %.5s %.1s \n", " - \n", "\n", "4\n", "\n", "2 ");
	printf("\n %.1d \n", 0);
    ft_printf(" %.1d \n", 0);
	printf("\n %.2d \n", -1);
    ft_printf(" %.2d \n", -1);
	printf("\n %.2d \n", 1);
    ft_printf(" %.2d \n", 1);
	printf("\n %.1d \n", 9);
    ft_printf(" %.1d \n", 9);
	printf("\n %.2d \n", 10);
    ft_printf(" %.2d \n", 10);
	printf("\n %.3d \n", 11);
    ft_printf(" %.3d \n", 11);
	printf("\n %.4d \n", 15);
    ft_printf(" %.4d \n", 15);
	printf("\n %.5d \n", 16);
    ft_printf(" %.5d \n", 16);
	printf("\n %.6d \n", 17);
    ft_printf(" %.6d \n", 17);
	printf("\n %.1d \n", 99);
    ft_printf(" %.1d \n", 99);
	printf("\n %.2d \n", 100);
    ft_printf(" %.2d \n", 100);
	printf("\n %.3d \n", 101);
    ft_printf(" %.3d \n", 101);
	printf("\n %.1d \n", -9);
    ft_printf(" %.1d \n", -9);
	printf("\n %.2d \n", -10);
    ft_printf(" %.2d \n", -10);
	printf("\n %.3d \n", -11);
    ft_printf(" %.3d \n", -11);
	printf("\n %.4d \n", -14);
    ft_printf(" %.4d \n", -14);
	printf("\n %.1d \n", -15);
    ft_printf(" %.1d \n", -15);
	printf("\n %.2d \n", -16);
    ft_printf(" %.2d \n", -16);
	printf("\n %.3d \n", -99);
    ft_printf(" %.3d \n", -99);
	printf("\n %.3d \n", -100);
    ft_printf(" %.3d \n", -100);
	printf("\n %.4d \n", -101);
    ft_printf(" %.4d \n", -101);
	printf("\n %.8d \n", INT_MAX);
    ft_printf(" %.8d \n", INT_MAX);
	printf("\n %.9d \n", INT_MIN);
    ft_printf(" %.9d \n", INT_MIN);
	printf("\n %.10d \n", LONG_MAX);
    ft_printf(" %.10d \n", LONG_MAX);
	printf("\n %.11d \n", LONG_MIN);
    ft_printf(" %.11d \n", LONG_MIN);
	printf("\n %.12d \n", UINT_MAX);
    ft_printf(" %.12d \n", UINT_MAX);
	printf("\n %.13d \n", ULONG_MAX);
    ft_printf(" %.13d \n", ULONG_MAX);
	printf("\n %.14d \n", 9223372036854775807LL);
    ft_printf(" %.14d \n", 9223372036854775807LL);
	printf("\n %.8d %.9d %.10d %.11d %.12d %.13d %.14d\n", INT_MAX, INT_MIN, LONG_MAX, LONG_MIN, ULONG_MAX, 0, -42);
    ft_printf(" %.8d %.9d %.10d %.11d %.12d %.13d %.14d\n", INT_MAX, INT_MIN, LONG_MAX, LONG_MIN, ULONG_MAX, 0, -42);
	printf("\n %.1i \n", 0);
    ft_printf(" %.1i \n", 0);
	printf("\n %.2i \n", -1);
    ft_printf(" %.2i \n", -1);
	printf("\n %.2i \n", 1);
    ft_printf(" %.2i \n", 1);
	printf("\n %.1i \n", 9);
    ft_printf(" %.1i \n", 9);
	printf("\n %.2i \n", 10);
    ft_printf(" %.2i \n", 10);
	printf("\n %.3i \n", 11);
    ft_printf(" %.3i \n", 11);
	printf("\n %.4i \n", 15);
    ft_printf(" %.4i \n", 15);
	printf("\n %.5i \n", 16);
    ft_printf(" %.5i \n", 16);
	printf("\n %.6i \n", 17);
    ft_printf(" %.6i \n", 17);
	printf("\n %.1i \n", 99);
    ft_printf(" %.1i \n", 99);
	printf("\n %.2i \n", 100);
    ft_printf(" %.2i \n", 100);
	printf("\n %.3i \n", 101);
    ft_printf(" %.3i \n", 101);
	printf("\n %.1i \n", -9);
    ft_printf(" %.1i \n", -9);
	printf("\n %.2i \n", -10);
    ft_printf(" %.2i \n", -10);
	printf("\n %.3i \n", -11);
    ft_printf(" %.3i \n", -11);
	printf("\n %.4i \n", -14);
    ft_printf(" %.4i \n", -14);
	printf("\n %.1i \n", -15);
    ft_printf(" %.1i \n", -15);
	printf("\n %.2i \n", -16);
    ft_printf(" %.2i \n", -16);
	printf("\n %.3i \n", -99);
    ft_printf(" %.3i \n", -99);
	printf("\n %.3i \n", -100);
    ft_printf(" %.3i \n", -100);
	printf("\n %.4i \n", -101);
    ft_printf(" %.4i \n", -101);
	printf("\n %.8i \n", INT_MAX);
    ft_printf(" %.8i \n", INT_MAX);
	printf("\n %.9i \n", INT_MIN);
    ft_printf(" %.9i \n", INT_MIN);
	printf("\n %.10i \n", LONG_MAX);
    ft_printf(" %.10i \n", LONG_MAX);
	printf("\n %.11i \n", LONG_MIN);
    ft_printf(" %.11i \n", LONG_MIN);
	printf("\n %.12i \n", UINT_MAX);
    ft_printf(" %.12i \n", UINT_MAX);
	printf("\n %.13i \n", ULONG_MAX);
    ft_printf(" %.13i \n", ULONG_MAX);
	printf("\n %.14i \n", 9223372036854775807LL);
    ft_printf(" %.14i \n", 9223372036854775807LL);
	printf("\n %.8i %.9i %.10i %.11i %.12i %.13i %.14i\n", INT_MAX, INT_MIN, LONG_MAX, LONG_MIN, ULONG_MAX, 0, -42);
    ft_printf(" %.8i %.9i %.10i %.11i %.12i %.13i %.14i\n", INT_MAX, INT_MIN, LONG_MAX, LONG_MIN, ULONG_MAX, 0, -42);
	printf("\n %.1u \n", 0);
    ft_printf(" %.1u \n", 0);
	printf("\n %.2u \n", -1);
    ft_printf(" %.2u \n", -1);
	printf("\n %.2u \n", 1);
    ft_printf(" %.2u \n", 1);
	printf("\n %.1u \n", 9);
    ft_printf(" %.1u \n", 9);
	printf("\n %.2u \n", 10);
    ft_printf(" %.2u \n", 10);
	printf("\n %.3u \n", 11);
    ft_printf(" %.3u \n", 11);
	printf("\n %.4u \n", 15);
    ft_printf(" %.4u \n", 15);
	printf("\n %.5u \n", 16);
    ft_printf(" %.5u \n", 16);
	printf("\n %.6u \n", 17);
    ft_printf(" %.6u \n", 17);
	printf("\n %.1u \n", 99);
    ft_printf(" %.1u \n", 99);
	printf("\n %.2u \n", 100);
    ft_printf(" %.2u \n", 100);
	printf("\n %.3u \n", 101);
    ft_printf(" %.3u \n", 101);
	printf("\n %.1u \n", -9);
    ft_printf(" %.1u \n", -9);
	printf("\n %.2u \n", -10);
    ft_printf(" %.2u \n", -10);
	printf("\n %.3u \n", -11);
    ft_printf(" %.3u \n", -11);
	printf("\n %.4u \n", -14);
    ft_printf(" %.4u \n", -14);
	printf("\n %.1u \n", -15);
    ft_printf(" %.1u \n", -15);
	printf("\n %.2u \n", -16);
    ft_printf(" %.2u \n", -16);
	printf("\n %.3u \n", -99);
    ft_printf(" %.3u \n", -99);
	printf("\n %.3u \n", -100);
    ft_printf(" %.3u \n", -100);
	printf("\n %.4u \n", -101);
    ft_printf(" %.4u \n", -101);
	printf("\n %.8u \n", INT_MAX);
    ft_printf(" %.8u \n", INT_MAX);
	printf("\n %.9u \n", INT_MIN);
    ft_printf(" %.9u \n", INT_MIN);
	printf("\n %.10u \n", LONG_MAX);
    ft_printf(" %.10u \n", LONG_MAX);
	printf("\n %.11u \n", LONG_MIN);
    ft_printf(" %.11u \n", LONG_MIN);
	printf("\n %.12u \n", UINT_MAX);
    ft_printf(" %.12u \n", UINT_MAX);
	printf("\n %.13u \n", ULONG_MAX);
    ft_printf(" %.13u \n", ULONG_MAX);
	printf("\n %.14u \n", 9223372036854775807LL);
    ft_printf(" %.14u \n", 9223372036854775807LL);
	printf("\n %.8u %.9u %.10u %.11u %.12u %.13u %.14u\n", INT_MAX, INT_MIN, LONG_MAX, LONG_MIN, ULONG_MAX, 0, -42);
    ft_printf(" %.8u %.9u %.10u %.11u %.12u %.13u %.14u\n", INT_MAX, INT_MIN, LONG_MAX, LONG_MIN, ULONG_MAX, 0, -42);
	printf("\n %.1x \n", 0);
    ft_printf(" %.1x \n", 0);
	printf("\n %.2x \n", -1);
    ft_printf(" %.2x \n", -1);
	printf("\n %.2x \n", 1);
    ft_printf(" %.2x \n", 1);
	printf("\n %.1x \n", 9);
    ft_printf(" %.1x \n", 9);
	printf("\n %.2x \n", 10);
    ft_printf(" %.2x \n", 10);
	printf("\n %.3x \n", 11);
    ft_printf(" %.3x \n", 11);
	printf("\n %.4x \n", 15);
    ft_printf(" %.4x \n", 15);
	printf("\n %.5x \n", 16);
    ft_printf(" %.5x \n", 16);
	printf("\n %.6x \n", 17);
    ft_printf(" %.6x \n", 17);
	printf("\n %.1x \n", 99);
    ft_printf(" %.1x \n", 99);
	printf("\n %.2x \n", 100);
    ft_printf(" %.2x \n", 100);
	printf("\n %.3x \n", 101);
    ft_printf(" %.3x \n", 101);
	printf("\n %.1x \n", -9);
    ft_printf(" %.1x \n", -9);
	printf("\n %.2x \n", -10);
    ft_printf(" %.2x \n", -10);
	printf("\n %.3x \n", -11);
    ft_printf(" %.3x \n", -11);
	printf("\n %.4x \n", -14);
    ft_printf(" %.4x \n", -14);
	printf("\n %.1x \n", -15);
    ft_printf(" %.1x \n", -15);
	printf("\n %.2x \n", -16);
    ft_printf(" %.2x \n", -16);
	printf("\n %.3x \n", -99);
    ft_printf(" %.3x \n", -99);
	printf("\n %.3x \n", -100);
    ft_printf(" %.3x \n", -100);
	printf("\n %.4x \n", -101);
    ft_printf(" %.4x \n", -101);
	printf("\n %.8x \n", INT_MAX);
    ft_printf(" %.8x \n", INT_MAX);
	printf("\n %.9x \n", INT_MIN);
    ft_printf(" %.9x \n", INT_MIN);
	printf("\n %.10x \n", LONG_MAX);
    ft_printf(" %.10x \n", LONG_MAX);
	printf("\n %.11x \n", LONG_MIN);
    ft_printf(" %.11x \n", LONG_MIN);
	printf("\n %.12x \n", UINT_MAX);
    ft_printf(" %.12x \n", UINT_MAX);
	printf("\n %.13x \n", ULONG_MAX);
    ft_printf(" %.13x \n", ULONG_MAX);
	printf("\n %.14x \n", 9223372036854775807LL);
    ft_printf(" %.14x \n", 9223372036854775807LL);
	printf("\n %.8x %.9x %.10x %.11x %.12x %.13x %.14x\n", INT_MAX, INT_MIN, LONG_MAX, LONG_MIN, ULONG_MAX, 0, -42);
    ft_printf(" %.8x %.9x %.10x %.11x %.12x %.13x %.14x\n", INT_MAX, INT_MIN, LONG_MAX, LONG_MIN, ULONG_MAX, 0, -42);
	printf("\n %.1X \n", 0);
    ft_printf(" %.1X \n", 0);
	printf("\n %.2X \n", -1);
    ft_printf(" %.2X \n", -1);
	printf("\n %.2X \n", 1);
    ft_printf(" %.2X \n", 1);
	printf("\n %.1X \n", 9);
    ft_printf(" %.1X \n", 9);
	printf("\n %.2X \n", 10);
    ft_printf(" %.2X \n", 10);
	printf("\n %.3X \n", 11);
    ft_printf(" %.3X \n", 11);
	printf("\n %.4X \n", 15);
    ft_printf(" %.4X \n", 15);
	printf("\n %.5X \n", 16);
    ft_printf(" %.5X \n", 16);
	printf("\n %.6X \n", 17);
    ft_printf(" %.6X \n", 17);
	printf("\n %.1X \n", 99);
    ft_printf(" %.1X \n", 99);
	printf("\n %.2X \n", 100);
    ft_printf(" %.2X \n", 100);
	printf("\n %.3X \n", 101);
    ft_printf(" %.3X \n", 101);
	printf("\n %.1X \n", -9);
    ft_printf(" %.1X \n", -9);
	printf("\n %.2X \n", -10);
    ft_printf(" %.2X \n", -10);
	printf("\n %.3X \n", -11);
    ft_printf(" %.3X \n", -11);
	printf("\n %.4X \n", -14);
    ft_printf(" %.4X \n", -14);
	printf("\n %.1X \n", -15);
    ft_printf(" %.1X \n", -15);
	printf("\n %.2X \n", -16);
    ft_printf(" %.2X \n", -16);
	printf("\n %.3X \n", -99);
    ft_printf(" %.3X \n", -99);
	printf("\n %.3X \n", -100);
    ft_printf(" %.3X \n", -100);
	printf("\n %.4X \n", -101);
    ft_printf(" %.4X \n", -101);
	printf("\n %.8X \n", INT_MAX);
    ft_printf(" %.8X \n", INT_MAX);
	printf("\n %.9X \n", INT_MIN);
    ft_printf(" %.9X \n", INT_MIN);
	printf("\n %.10X \n", LONG_MAX);
    ft_printf(" %.10X \n", LONG_MAX);
	printf("\n %.11X \n", LONG_MIN);
    ft_printf(" %.11X \n", LONG_MIN);
	printf("\n %.12X \n", UINT_MAX);
    ft_printf(" %.12X \n", UINT_MAX);
	printf("\n %.13X \n", ULONG_MAX);
    ft_printf(" %.13X \n", ULONG_MAX);
	printf("\n %.14X \n", 9223372036854775807LL);
    ft_printf(" %.14X \n", 9223372036854775807LL);
	printf("\n %.8X %.9X %.10X %.11X %.12X %.13X %.14X\n", INT_MAX, INT_MIN, LONG_MAX, LONG_MIN, ULONG_MAX, 0, -42);
    ft_printf(" %.8X %.9X %.10X %.11X %.12X %.13X %.14X\n", INT_MAX, INT_MIN, LONG_MAX, LONG_MIN, ULONG_MAX, 0, -42);


	/*i*/
	printf("\n %i \n", 0);
    ft_printf(" %i \n", 0);
	printf("\n %i \n", -1);
    ft_printf(" %i \n", -1);
	printf("\n %i \n", 1);
    ft_printf(" %i \n", 1);
	printf("\n %i \n", 9);
    ft_printf(" %i \n", 9);
	printf("\n %i \n", 10);
    ft_printf(" %i \n", 10);
	printf("\n %i \n", 11);
    ft_printf(" %i \n", 11);
	printf("\n %i \n", 15);
    ft_printf(" %i \n", 15);
	printf("\n %i \n", 16);
    ft_printf(" %i \n", 16);
	printf("\n %i \n", 17);
    ft_printf(" %i \n", 17);
	printf("\n %i \n", 99);
    ft_printf(" %i \n", 99);
	printf("\n %i \n", 100);
    ft_printf(" %i \n", 100);
	printf("\n %i \n", 101);
    ft_printf(" %i \n", 101);
	printf("\n %i \n", -9);
    ft_printf(" %i \n", -9);
	printf("\n %i \n", -10);
    ft_printf(" %i \n", -10);
	printf("\n %i \n", -11);
    ft_printf(" %i \n", -11);
	printf("\n %i \n", -14);
    ft_printf(" %i \n", -14);
	printf("\n %i \n", -15);
    ft_printf(" %i \n", -15);
	printf("\n %i \n", -16);
    ft_printf(" %i \n", -16);
	printf("\n %i \n", -99);
    ft_printf(" %i \n", -99);
	printf("\n %i \n", -100);
    ft_printf(" %i \n", -100);
	printf("\n %i \n", -101);
    ft_printf(" %i \n", -101);
	printf("\n %i \n", INT_MAX);
    ft_printf(" %i \n", INT_MAX);
	printf("\n %i \n", INT_MIN);
    ft_printf(" %i \n", INT_MIN);
	printf("\n %i \n", LONG_MAX);
    ft_printf(" %i \n", LONG_MAX);
	printf("\n %i \n", LONG_MIN);
    ft_printf(" %i \n", LONG_MIN);
	printf("\n %i \n", UINT_MAX);
    ft_printf(" %i \n", UINT_MAX);
	printf("\n %i \n", ULONG_MAX);
    ft_printf(" %i \n", ULONG_MAX);
	printf("\n %i \n", 9223372036854775807LL);
    ft_printf(" %i \n", 9223372036854775807LL);
	printf("\n %i %i %i %i %i %i %i\n", INT_MAX, INT_MIN, LONG_MAX, LONG_MIN, ULONG_MAX, 0, -42);
    ft_printf(" %i %i %i %i %i %i %i\n", INT_MAX, INT_MIN, LONG_MAX, LONG_MIN, ULONG_MAX, 0, -42);

	/*minus*/
	printf("\n%-1c\n", '0');
    ft_printf("%-1c\n", '0');
	printf("\n %-2c \n", '0');
    ft_printf(" %-2c \n", '0');
	printf("\n %-3c\n", '0' - 256);
    ft_printf(" %-3c\n", '0' - 256);
	printf("\n%-4c \n", '0' + 256);
    ft_printf("%-4c \n", '0' + 256);
	printf("\n %-1c %-2c %-3c \n", '0', 0, '1');
    ft_printf(" %-1c %-2c %-3c \n", '0', 0, '1');
	printf("\n %-1c %-2c %-3c \n", ' ', ' ', ' ');
    ft_printf(" %-1c %-2c %-3c \n", ' ', ' ', ' ');
	printf("\n %-1c %-2c %-3c \n", '1', '2', '3');
    ft_printf(" %-1c %-2c %-3c \n", '1', '2', '3');
	printf("\n %-1c %-2c %-3c \n", '2', '1', 0);
    ft_printf(" %-1c %-2c %-3c \n", '2', '1', 0);
	printf("\n %-1c %-2c %-3c \n", 0, '1', '2');
    ft_printf(" %-1c %-2c %-3c \n", 0, '1', '2');
	printf("\n%1s\n", "");
    ft_printf("%1s\n", "");
	printf("\n%-1s\n", "");
    ft_printf("%-1s\n", "");
	printf("\n %-2s\n", "");
    ft_printf(" %-2s\n", "");
	printf("\n%-3s \n", "");
    ft_printf("%-3s \n", "");
	printf("\n %-0s \n", "");
    ft_printf(" %-0s \n", "");
	printf("\n %-s \n", "-");
    ft_printf(" %-s \n", "-");
	printf("\n %-1s %-2s \n", "\n", "-");
    ft_printf(" %-1s %-2s \n", "\n", "-");
	printf("\n %-3s %-4s \n", " - \n", "");
    ft_printf(" %-3s %-4s \n", " - \n", "");
	printf("\n %-2s %-3s %-4s %-5s \n", " - \n", "\n", "4\n", "");
    ft_printf(" %-2s %-3s %-4s %-5s \n", " - \n", "\n", "4\n", "");
	printf("\n %-3s %-3s %-4s %-5s %-3s \n", " - \n", "\n", "4\n", "\n", "2 ");
    ft_printf(" %-3s %-3s %-4s %-5s %-3s \n", " - \n", "\n", "4\n", "\n", "2 ");
	printf("\n %2p \n", -1);
    ft_printf(" %2p \n", -1);
	printf("\n %-2p \n", -1);
    ft_printf(" %-2p \n", -1);
	printf("\n %-2p \n", 1);
    ft_printf(" %-2p \n", 1);
	printf("\n %-2p \n", 15);
    ft_printf(" %-2p \n", 15);
	printf("\n %-3p \n", 16);
    ft_printf(" %-3p \n", 16);
	printf("\n %-4p \n", 17);
    ft_printf(" %-4p \n", 17);
	printf("\n %-9p %-10p \n", LONG_MIN, LONG_MAX);
    ft_printf(" %-9p %-10p \n", LONG_MIN, LONG_MAX);
	printf("\n %-11p %-12p \n", INT_MIN, INT_MAX);
    ft_printf(" %-11p %-12p \n", INT_MIN, INT_MAX);
	printf("\n %-13p %-14p \n", ULONG_MAX, -ULONG_MAX);
    ft_printf(" %-13p %-14p \n", ULONG_MAX, -ULONG_MAX);
	printf("\n %-1p %-2p \n", 0, 0);
    ft_printf(" %-1p %-2p \n", 0, 0);
	printf("\n %-1d \n", 0);
    ft_printf(" %-1d \n", 0);
	printf("\n %-2d \n", -1);
    ft_printf(" %-2d \n", -1);
	printf("\n %-3d \n", 1);
    ft_printf(" %-3d \n", 1);
	printf("\n %-4d \n", 9);
    ft_printf(" %-4d \n", 9);
	printf("\n %-1d \n", 10);
    ft_printf(" %-1d \n", 10);
	printf("\n %-2d \n", 11);
    ft_printf(" %-2d \n", 11);
	printf("\n %-3d \n", 15);
    ft_printf(" %-3d \n", 15);
	printf("\n %-4d \n", 16);
    ft_printf(" %-4d \n", 16);
	printf("\n %-5d \n", 17);
    ft_printf(" %-5d \n", 17);
	printf("\n %-1d \n", 99);
    ft_printf(" %-1d \n", 99);
	printf("\n %-2d \n", 100);
    ft_printf(" %-2d \n", 100);
	printf("\n %-3d \n", 101);
    ft_printf(" %-3d \n", 101);
	printf("\n %-1d \n", -9);
    ft_printf(" %-1d \n", -9);
	printf("\n %-2d \n", -10);
    ft_printf(" %-2d \n", -10);
	printf("\n %-3d \n", -11);
    ft_printf(" %-3d \n", -11);
	printf("\n %-4d \n", -14);
    ft_printf(" %-4d \n", -14);
	printf("\n %-5d \n", -15);
    ft_printf(" %-5d \n", -15);
	printf("\n %-6d \n", -16);
    ft_printf(" %-6d \n", -16);
	printf("\n %-1d \n", -99);
    ft_printf(" %-1d \n", -99);
	printf("\n %-2d \n", -100);
    ft_printf(" %-2d \n", -100);
	printf("\n %-3d \n", -101);
    ft_printf(" %-3d \n", -101);
	printf("\n %-9d \n", INT_MAX);
    ft_printf(" %-9d \n", INT_MAX);
	printf("\n %-10d \n", INT_MIN);
    ft_printf(" %-10d \n", INT_MIN);
	printf("\n %-11d \n", LONG_MAX);
    ft_printf(" %-11d \n", LONG_MAX);
	printf("\n %-12d \n", LONG_MIN);
    ft_printf(" %-12d \n", LONG_MIN);
	printf("\n %-13d \n", UINT_MAX);
    ft_printf(" %-13d \n", UINT_MAX);
	printf("\n %-14d \n", ULONG_MAX);
    ft_printf(" %-14d \n", ULONG_MAX);
	printf("\n %-15d \n", 9223372036854775807LL);
    ft_printf(" %-15d \n", 9223372036854775807LL);
	printf("\n %-9d %-10d %-11d %-12d %-13d %-14d %-15d\n", INT_MAX, INT_MIN, LONG_MAX, LONG_MIN, ULONG_MAX, 0, -42);
    ft_printf(" %-9d %-10d %-11d %-12d %-13d %-14d %-15d\n", INT_MAX, INT_MIN, LONG_MAX, LONG_MIN, ULONG_MAX, 0, -42);
	printf("\n %-1i \n", 0);
    ft_printf(" %-1i \n", 0);
	printf("\n %-2i \n", -1);
    ft_printf(" %-2i \n", -1);
	printf("\n %-3i \n", 1);
    ft_printf(" %-3i \n", 1);
	printf("\n %-4i \n", 9);
    ft_printf(" %-4i \n", 9);
	printf("\n %-1i \n", 10);
    ft_printf(" %-1i \n", 10);
	printf("\n %-2i \n", 11);
    ft_printf(" %-2i \n", 11);
	printf("\n %-3i \n", 15);
    ft_printf(" %-3i \n", 15);
	printf("\n %-4i \n", 16);
    ft_printf(" %-4i \n", 16);
	printf("\n %-5i \n", 17);
    ft_printf(" %-5i \n", 17);
	printf("\n %-1i \n", 99);
    ft_printf(" %-1i \n", 99);
	printf("\n %-2i \n", 100);
    ft_printf(" %-2i \n", 100);
	printf("\n %-3i \n", 101);
    ft_printf(" %-3i \n", 101);
	printf("\n %-1i \n", -9);
    ft_printf(" %-1i \n", -9);
	printf("\n %-2i \n", -10);
    ft_printf(" %-2i \n", -10);
	printf("\n %-3i \n", -11);
    ft_printf(" %-3i \n", -11);
	printf("\n %-4i \n", -14);
    ft_printf(" %-4i \n", -14);
	printf("\n %-5i \n", -15);
    ft_printf(" %-5i \n", -15);
	printf("\n %-6i \n", -16);
    ft_printf(" %-6i \n", -16);
	printf("\n %-1i \n", -99);
    ft_printf(" %-1i \n", -99);
	printf("\n %-2i \n", -100);
    ft_printf(" %-2i \n", -100);
	printf("\n %-3i \n", -101);
    ft_printf(" %-3i \n", -101);
	printf("\n %-9i \n", INT_MAX);
    ft_printf(" %-9i \n", INT_MAX);
	printf("\n %-10i \n", INT_MIN);
    ft_printf(" %-10i \n", INT_MIN);
	printf("\n %-11i \n", LONG_MAX);
    ft_printf(" %-11i \n", LONG_MAX);
	printf("\n %-12i \n", LONG_MIN);
    ft_printf(" %-12i \n", LONG_MIN);
	printf("\n %-13i \n", UINT_MAX);
    ft_printf(" %-13i \n", UINT_MAX);
	printf("\n %-14i \n", ULONG_MAX);
    ft_printf(" %-14i \n", ULONG_MAX);
	printf("\n %-15i \n", 9223372036854775807LL);
    ft_printf(" %-15i \n", 9223372036854775807LL);
	printf("\n %-9i %-10i %-11i %-12i %-13i %-14i %-15i\n", INT_MAX, INT_MIN, LONG_MAX, LONG_MIN, ULONG_MAX, 0, -42);
    ft_printf(" %-9i %-10i %-11i %-12i %-13i %-14i %-15i\n", INT_MAX, INT_MIN, LONG_MAX, LONG_MIN, ULONG_MAX, 0, -42);
	printf("\n %-1u \n", 0);
    ft_printf(" %-1u \n", 0);
	printf("\n %-2u \n", -1);
    ft_printf(" %-2u \n", -1);
	printf("\n %-3u \n", 1);
    ft_printf(" %-3u \n", 1);
	printf("\n %-4u \n", 9);
    ft_printf(" %-4u \n", 9);
	printf("\n %-1u \n", 10);
    ft_printf(" %-1u \n", 10);
	printf("\n %-2u \n", 11);
    ft_printf(" %-2u \n", 11);
	printf("\n %-3u \n", 15);
    ft_printf(" %-3u \n", 15);
	printf("\n %-4u \n", 16);
    ft_printf(" %-4u \n", 16);
	printf("\n %-5u \n", 17);
    ft_printf(" %-5u \n", 17);
	printf("\n %-1u \n", 99);
    ft_printf(" %-1u \n", 99);
	printf("\n %-2u \n", 100);
    ft_printf(" %-2u \n", 100);
	printf("\n %-3u \n", 101);
    ft_printf(" %-3u \n", 101);
	printf("\n %-1u \n", -9);
    ft_printf(" %-1u \n", -9);
	printf("\n %-2u \n", -10);
    ft_printf(" %-2u \n", -10);
	printf("\n %-3u \n", -11);
    ft_printf(" %-3u \n", -11);
	printf("\n %-4u \n", -14);
    ft_printf(" %-4u \n", -14);
	printf("\n %-5u \n", -15);
    ft_printf(" %-5u \n", -15);
	printf("\n %-6u \n", -16);
    ft_printf(" %-6u \n", -16);
	printf("\n %-1u \n", -99);
    ft_printf(" %-1u \n", -99);
	printf("\n %-2u \n", -100);
    ft_printf(" %-2u \n", -100);
	printf("\n %-3u \n", -101);
    ft_printf(" %-3u \n", -101);
	printf("\n %-9u \n", INT_MAX);
    ft_printf(" %-9u \n", INT_MAX);
	printf("\n %-10u \n", INT_MIN);
    ft_printf(" %-10u \n", INT_MIN);
	printf("\n %-11u \n", LONG_MAX);
    ft_printf(" %-11u \n", LONG_MAX);
	printf("\n %-12u \n", LONG_MIN);
    ft_printf(" %-12u \n", LONG_MIN);
	printf("\n %-13u \n", UINT_MAX);
    ft_printf(" %-13u \n", UINT_MAX);
	printf("\n %-14u \n", ULONG_MAX);
    ft_printf(" %-14u \n", ULONG_MAX);
	printf("\n %-15u \n", 9223372036854775807LL);
    ft_printf(" %-15u \n", 9223372036854775807LL);
	printf("\n %-9u %-10u %-11u %-12u %-13u %-14u %-15u\n", INT_MAX, INT_MIN, LONG_MAX, LONG_MIN, ULONG_MAX, 0, -42);
    ft_printf(" %-9u %-10u %-11u %-12u %-13u %-14u %-15u\n", INT_MAX, INT_MIN, LONG_MAX, LONG_MIN, ULONG_MAX, 0, -42);
	printf("\n %-1x \n", 0);
    ft_printf(" %-1x \n", 0);
	printf("\n %-2x \n", -1);
    ft_printf(" %-2x \n", -1);
	printf("\n %-3x \n", 1);
    ft_printf(" %-3x \n", 1);
	printf("\n %-4x \n", 9);
    ft_printf(" %-4x \n", 9);
	printf("\n %-1x \n", 10);
    ft_printf(" %-1x \n", 10);
	printf("\n %-2x \n", 11);
    ft_printf(" %-2x \n", 11);
	printf("\n %-3x \n", 15);
    ft_printf(" %-3x \n", 15);
	printf("\n %-4x \n", 16);
    ft_printf(" %-4x \n", 16);
	printf("\n %-5x \n", 17);
    ft_printf(" %-5x \n", 17);
	printf("\n %-1x \n", 99);
    ft_printf(" %-1x \n", 99);
	printf("\n %-2x \n", 100);
    ft_printf(" %-2x \n", 100);
	printf("\n %-3x \n", 101);
    ft_printf(" %-3x \n", 101);
	printf("\n %-1x \n", -9);
    ft_printf(" %-1x \n", -9);
	printf("\n %-2x \n", -10);
    ft_printf(" %-2x \n", -10);
	printf("\n %-3x \n", -11);
    ft_printf(" %-3x \n", -11);
	printf("\n %-4x \n", -14);
    ft_printf(" %-4x \n", -14);
	printf("\n %-5x \n", -15);
    ft_printf(" %-5x \n", -15);
	printf("\n %-6x \n", -16);
    ft_printf(" %-6x \n", -16);
	printf("\n %-1x \n", -99);
    ft_printf(" %-1x \n", -99);
	printf("\n %-2x \n", -100);
    ft_printf(" %-2x \n", -100);
	printf("\n %-3x \n", -101);
    ft_printf(" %-3x \n", -101);
	printf("\n %-9x \n", INT_MAX);
    ft_printf(" %-9x \n", INT_MAX);
	printf("\n %-10x \n", INT_MIN);
    ft_printf(" %-10x \n", INT_MIN);
	printf("\n %-11x \n", LONG_MAX);
    ft_printf(" %-11x \n", LONG_MAX);
	printf("\n %-12x \n", LONG_MIN);
    ft_printf(" %-12x \n", LONG_MIN);
	printf("\n %-13x \n", UINT_MAX);
    ft_printf(" %-13x \n", UINT_MAX);
	printf("\n %-14x \n", ULONG_MAX);
    ft_printf(" %-14x \n", ULONG_MAX);
	printf("\n %-15x \n", 9223372036854775807LL);
    ft_printf(" %-15x \n", 9223372036854775807LL);
	printf("\n %-9x %-10x %-11x %-12x %-13x %-14x %-15x\n", INT_MAX, INT_MIN, LONG_MAX, LONG_MIN, ULONG_MAX, 0, -42);
    ft_printf(" %-9x %-10x %-11x %-12x %-13x %-14x %-15x\n", INT_MAX, INT_MIN, LONG_MAX, LONG_MIN, ULONG_MAX, 0, -42);
	printf("\n %-1X \n", 0);
    ft_printf(" %-1X \n", 0);
	printf("\n %-2X \n", -1);
    ft_printf(" %-2X \n", -1);
	printf("\n %-3X \n", 1);
    ft_printf(" %-3X \n", 1);
	printf("\n %-4X \n", 9);
    ft_printf(" %-4X \n", 9);
	printf("\n %-1X \n", 10);
    ft_printf(" %-1X \n", 10);
	printf("\n %-2X \n", 11);
    ft_printf(" %-2X \n", 11);
	printf("\n %-3X \n", 15);
    ft_printf(" %-3X \n", 15);
	printf("\n %-4X \n", 16);
    ft_printf(" %-4X \n", 16);
	printf("\n %-5X \n", 17);
    ft_printf(" %-5X \n", 17);
	printf("\n %-1X \n", 99);
    ft_printf(" %-1X \n", 99);
	printf("\n %-2X \n", 100);
    ft_printf(" %-2X \n", 100);
	printf("\n %-3X \n", 101);
    ft_printf(" %-3X \n", 101);
	printf("\n %-1X \n", -9);
    ft_printf(" %-1X \n", -9);
	printf("\n %-2X \n", -10);
    ft_printf(" %-2X \n", -10);
	printf("\n %-3X \n", -11);
    ft_printf(" %-3X \n", -11);
	printf("\n %-4X \n", -14);
    ft_printf(" %-4X \n", -14);
	printf("\n %-5X \n", -15);
    ft_printf(" %-5X \n", -15);
	printf("\n %-6X \n", -16);
    ft_printf(" %-6X \n", -16);
	printf("\n %-1X \n", -99);
    ft_printf(" %-1X \n", -99);
	printf("\n %-2X \n", -100);
    ft_printf(" %-2X \n", -100);
	printf("\n %-3X \n", -101);
    ft_printf(" %-3X \n", -101);
	printf("\n %-9X \n", INT_MAX);
    ft_printf(" %-9X \n", INT_MAX);
	printf("\n %-10X \n", INT_MIN);
    ft_printf(" %-10X \n", INT_MIN);
	printf("\n %-11X \n", LONG_MAX);
    ft_printf(" %-11X \n", LONG_MAX);
	printf("\n %-12X \n", LONG_MIN);
    ft_printf(" %-12X \n", LONG_MIN);
	printf("\n %-13X \n", UINT_MAX);
    ft_printf(" %-13X \n", UINT_MAX);
	printf("\n %-14X \n", ULONG_MAX);
    ft_printf(" %-14X \n", ULONG_MAX);
	printf("\n %-15X \n", 9223372036854775807LL);
    ft_printf(" %-15X \n", 9223372036854775807LL);
	printf("\n %-9X %-10X %-11X %-12X %-13X %-14X %-15X\n", INT_MAX, INT_MIN, LONG_MAX, LONG_MIN, ULONG_MAX, 0, -42);
    ft_printf(" %-9X %-10X %-11X %-12X %-13X %-14X %-15X\n", INT_MAX, INT_MIN, LONG_MAX, LONG_MIN, ULONG_MAX, 0, -42);

	/*mix*/
	printf("\n%%%c%%%s%%%d%%%i%%%u%%%x%%%X%%%% %%%c%%%s%%%d%%%i%%%u%%%x%%%X%%%% %%%c%%%s%%%d%%%i%%%u%%%x%%%X%%%% %c%%\n", 'A', "42\n", 42, 42 ,42 , 42, 42, 'B', "-42\n", -42, -42 ,-42 ,-42, 42, 'C', "0\n", 0, 0 ,0 ,0, 42, 0);
    ft_printf("%%%c%%%s%%%d%%%i%%%u%%%x%%%X%%%% %%%c%%%s%%%d%%%i%%%u%%%x%%%X%%%% %%%c%%%s%%%d%%%i%%%u%%%x%%%X%%%% %c%%\n", 'A', "42\n", 42, 42 ,42 , 42, 42, 'B', "-42\n", -42, -42 ,-42 ,-42, 42, 'C', "0\n", 0, 0 ,0 ,0, 42, 0);

	/*p*/
	printf("\n %p \n", -1);
    ft_printf(" %p \n", -1);
	printf("\n %p \n", 1);
    ft_printf(" %p \n", 1);
	printf("\n %p \n", 15);
    ft_printf(" %p \n", 15);
	printf("\n %p \n", 16);
    ft_printf(" %p \n", 16);
	printf("\n %p \n", 17);
    ft_printf(" %p \n", 17);
	printf("\n %p %p \n", LONG_MIN, LONG_MAX);
    ft_printf(" %p %p \n", LONG_MIN, LONG_MAX);
	printf("\n %p %p \n", INT_MIN, INT_MAX);
    ft_printf(" %p %p \n", INT_MIN, INT_MAX);
	printf("\n %p %p \n", ULONG_MAX, -ULONG_MAX);
    ft_printf(" %p %p \n", ULONG_MAX, -ULONG_MAX);
	printf("\n %p %p \n", 0, 0);
    ft_printf(" %p %p \n", 0, 0);

	/*percent*/
	printf("\n %% ");
    ft_printf(" %% ");
	printf("\n %%%% ");
    ft_printf(" %%%% ");
	printf("\n %% %% %% ");
    ft_printf(" %% %% %% ");
	printf("\n %%  %%  %% ");
    ft_printf(" %%  %%  %% ");
	printf("\n %%   %%   %% ");
    ft_printf(" %%   %%   %% ");
	printf("\n%%");
    ft_printf("%%");
	printf("\n%% %%");
    ft_printf("%% %%");

	/*s*/
	printf("\n%s\n", "");
    ft_printf("%s\n", "");
	printf("\n %s\n", "");
    ft_printf(" %s\n", "");
	printf("\n%s \n", "");
    ft_printf("%s \n", "");
	printf("\n %s \n", "");
    ft_printf(" %s \n", "");
	printf("\n %s \n", "-");
    ft_printf(" %s \n", "-");
	printf("\n %s %s \n", "\n", "-");
    ft_printf(" %s %s \n", "\n", "-");
	printf("\n %s %s \n", " - \n", "");
    ft_printf(" %s %s \n", " - \n", "");
	printf("\n %s %s %s %s %s\n", " - \n", "\n", "4\n", "\n", s2);
    ft_printf(" %s %s %s %s %s\n", " - \n", "\n", "4\n", "\n", s2);
	printf("\n %s %s %s %s %s \n", " - \n", "\n", "4\n", "\n", "2 ");
    ft_printf(" %s %s %s %s %s \n", " - \n", "\n", "4\n", "\n", "2 ");
	printf("\n NULL %s NULL \n", NULL);
    ft_printf(" NULL %s NULL \n", NULL);

	/*hash*/
	printf("\n %#x \n", 0);
    ft_printf(" %#x \n", 0);
	printf("\n %#x \n", -1);
    ft_printf(" %#x \n", -1);
	printf("\n %#x \n", 1);
    ft_printf(" %#x \n", 1);
	printf("\n %#x \n", 9);
    ft_printf(" %#x \n", 9);
	printf("\n %#x \n", 10);
    ft_printf(" %#x \n", 10);
	printf("\n %#x \n", 11);
    ft_printf(" %#x \n", 11);
	printf("\n %#x \n", 15);
    ft_printf(" %#x \n", 15);
	printf("\n %#x \n", 16);
    ft_printf(" %#x \n", 16);
	printf("\n %#x \n", 17);
    ft_printf(" %#x \n", 17);
	printf("\n %#x \n", 99);
    ft_printf(" %#x \n", 99);
	printf("\n %#x \n", 100);
    ft_printf(" %#x \n", 100);
	printf("\n %#x \n", 101);
    ft_printf(" %#x \n", 101);
	printf("\n %#x \n", -9);
    ft_printf(" %#x \n", -9);
	printf("\n %#x \n", -10);
    ft_printf(" %#x \n", -10);
	printf("\n %#x \n", -11);
    ft_printf(" %#x \n", -11);
	printf("\n %#x \n", -14);
    ft_printf(" %#x \n", -14);
	printf("\n %#x \n", -15);
    ft_printf(" %#x \n", -15);
	printf("\n %#x \n", -16);
    ft_printf(" %#x \n", -16);
	printf("\n %#x \n", -99);
    ft_printf(" %#x \n", -99);
	printf("\n %#x \n", -100);
    ft_printf(" %#x \n", -100);
	printf("\n %#x \n", -101);
    ft_printf(" %#x \n", -101);
	printf("\n %#x \n", INT_MAX);
    ft_printf(" %#x \n", INT_MAX);
	printf("\n %#x \n", INT_MIN);
    ft_printf(" %#x \n", INT_MIN);
	printf("\n %#x \n", LONG_MAX);
    ft_printf(" %#x \n", LONG_MAX);
	printf("\n %#x \n", LONG_MIN);
    ft_printf(" %#x \n", LONG_MIN);
	printf("\n %#x \n", UINT_MAX);
    ft_printf(" %#x \n", UINT_MAX);
	printf("\n %#x \n", ULONG_MAX);
    ft_printf(" %#x \n", ULONG_MAX);
	printf("\n %#x \n", 9223372036854775807LL);
    ft_printf(" %#x \n", 9223372036854775807LL);
	printf("\n %#x %#x %#x %#x %#x %#x %#x\n", INT_MAX, INT_MIN, LONG_MAX, LONG_MIN, ULONG_MAX, 0, -42);
    ft_printf(" %#x %#x %#x %#x %#x %#x %#x\n", INT_MAX, INT_MIN, LONG_MAX, LONG_MIN, ULONG_MAX, 0, -42);
	printf("\n %#x%#x \n", INT_MAX, INT_MIN);
    ft_printf(" %#x%#x \n", INT_MAX, INT_MIN);
	printf("\n %#X \n", 0);
    ft_printf(" %#X \n", 0);
	printf("\n %#X \n", -1);
    ft_printf(" %#X \n", -1);
	printf("\n %#X \n", 1);
    ft_printf(" %#X \n", 1);
	printf("\n %#X \n", 9);
    ft_printf(" %#X \n", 9);
	printf("\n %#X \n", 10);
    ft_printf(" %#X \n", 10);
	printf("\n %#X \n", 11);
    ft_printf(" %#X \n", 11);
	printf("\n %#X \n", 15);
    ft_printf(" %#X \n", 15);
	printf("\n %#X \n", 16);
    ft_printf(" %#X \n", 16);
	printf("\n %#X \n", 17);
    ft_printf(" %#X \n", 17);
	printf("\n %#X \n", 99);
    ft_printf(" %#X \n", 99);
	printf("\n %#X \n", 100);
    ft_printf(" %#X \n", 100);
	printf("\n %#X \n", 101);
    ft_printf(" %#X \n", 101);
	printf("\n %#X \n", -9);
    ft_printf(" %#X \n", -9);
	printf("\n %#X \n", -10);
    ft_printf(" %#X \n", -10);
	printf("\n %#X \n", -11);
    ft_printf(" %#X \n", -11);
	printf("\n %#X \n", -14);
    ft_printf(" %#X \n", -14);
	printf("\n %#X \n", -15);
    ft_printf(" %#X \n", -15);
	printf("\n %#X \n", -16);
    ft_printf(" %#X \n", -16);
	printf("\n %#X \n", -99);
    ft_printf(" %#X \n", -99);
	printf("\n %#X \n", -100);
    ft_printf(" %#X \n", -100);
	printf("\n %#X \n", -101);
    ft_printf(" %#X \n", -101);
	printf("\n %#X \n", INT_MAX);
    ft_printf(" %#X \n", INT_MAX);
	printf("\n %#X \n", INT_MIN);
    ft_printf(" %#X \n", INT_MIN);
	printf("\n %#X \n", LONG_MAX);
    ft_printf(" %#X \n", LONG_MAX);
	printf("\n %#X \n", LONG_MIN);
    ft_printf(" %#X \n", LONG_MIN);
	printf("\n %#X \n", UINT_MAX);
    ft_printf(" %#X \n", UINT_MAX);
	printf("\n %#X \n", ULONG_MAX);
    ft_printf(" %#X \n", ULONG_MAX);
	printf("\n %#X \n", 9223372036854775807LL);
    ft_printf(" %#X \n", 9223372036854775807LL);
	printf("\n %#X %#X %#X %#X %#X %#X %#X\n", INT_MAX, INT_MIN, LONG_MAX, LONG_MIN, ULONG_MAX, 0, -42);
    ft_printf(" %#X %#X %#X %#X %#X %#X %#X\n", INT_MAX, INT_MIN, LONG_MAX, LONG_MIN, ULONG_MAX, 0, -42);

	/*space*/
	printf("\n% s\n", "");
    ft_printf("% s\n", "");
	printf("\n % 1s\n", "");
    ft_printf(" % 1s\n", "");
	printf("\n% 1s \n", "");
    ft_printf("% 1s \n", "");
	printf("\n % s \n", "");
    ft_printf(" % s \n", "");
	printf("\n % s \n", "-");
    ft_printf(" % s \n", "-");
	printf("\n % s % s \n", "\n", "-");
    ft_printf(" % s % s \n", "\n", "-");
	printf("\n % s % s \n", " - \n", "");
    ft_printf(" % s % s \n", " - \n", "");
	printf("\n % s % s % s % s \n", " - \n", "\n", "4\n", "");
    ft_printf(" % s % s % s % s \n", " - \n", "\n", "4\n", "");
	printf("\n % s % s % s % s % s \n", " - \n", "\n", "4\n", "\n", "2 ");
    ft_printf(" % s % s % s % s % s \n", " - \n", "\n", "4\n", "\n", "2 ");
	printf("\n % d \n", 0);
    ft_printf(" % d \n", 0);
	printf("\n % d \n", -1);
    ft_printf(" % d \n", -1);
	printf("\n % d \n", 1);
    ft_printf(" % d \n", 1);
	printf("\n % d \n", 9);
    ft_printf(" % d \n", 9);
	printf("\n % d \n", 10);
    ft_printf(" % d \n", 10);
	printf("\n % d \n", 11);
    ft_printf(" % d \n", 11);
	printf("\n % d \n", 15);
    ft_printf(" % d \n", 15);
	printf("\n % d \n", 16);
    ft_printf(" % d \n", 16);
	printf("\n % d \n", 17);
    ft_printf(" % d \n", 17);
	printf("\n % d \n", 99);
    ft_printf(" % d \n", 99);
	printf("\n % d \n", 100);
    ft_printf(" % d \n", 100);
	printf("\n % d \n", 101);
    ft_printf(" % d \n", 101);
	printf("\n % d \n", -9);
    ft_printf(" % d \n", -9);
	printf("\n % d \n", -10);
    ft_printf(" % d \n", -10);
	printf("\n % d \n", -11);
    ft_printf(" % d \n", -11);
	printf("\n % d \n", -14);
    ft_printf(" % d \n", -14);
	printf("\n % d \n", -15);
    ft_printf(" % d \n", -15);
	printf("\n % d \n", -16);
    ft_printf(" % d \n", -16);
	printf("\n % d \n", -99);
    ft_printf(" % d \n", -99);
	printf("\n % d \n", -100);
    ft_printf(" % d \n", -100);
	printf("\n % d \n", -101);
    ft_printf(" % d \n", -101);
	printf("\n % d \n", INT_MAX);
    ft_printf(" % d \n", INT_MAX);
	printf("\n % d \n", INT_MIN);
    ft_printf(" % d \n", INT_MIN);
	printf("\n % d \n", LONG_MAX);
    ft_printf(" % d \n", LONG_MAX);
	printf("\n % d \n", LONG_MIN);
    ft_printf(" % d \n", LONG_MIN);
	printf("\n % d \n", UINT_MAX);
    ft_printf(" % d \n", UINT_MAX);
	printf("\n % d \n", ULONG_MAX);
    ft_printf(" % d \n", ULONG_MAX);
	printf("\n % d \n", 9223372036854775807LL);
    ft_printf(" % d \n", 9223372036854775807LL);
	printf("\n % d % d % d % d % d % d % d\n", INT_MAX, INT_MIN, LONG_MAX, LONG_MIN, ULONG_MAX, 0, -42);
    ft_printf(" % d % d % d % d % d % d % d\n", INT_MAX, INT_MIN, LONG_MAX, LONG_MIN, ULONG_MAX, 0, -42);
	printf("\n % i \n", 0);
    ft_printf(" % i \n", 0);
	printf("\n % i \n", -1);
    ft_printf(" % i \n", -1);
	printf("\n % i \n", 1);
    ft_printf(" % i \n", 1);
	printf("\n % i \n", 9);
    ft_printf(" % i \n", 9);
	printf("\n % i \n", 10);
    ft_printf(" % i \n", 10);
	printf("\n % i \n", 11);
    ft_printf(" % i \n", 11);
	printf("\n % i \n", 15);
    ft_printf(" % i \n", 15);
	printf("\n % i \n", 16);
    ft_printf(" % i \n", 16);
	printf("\n % i \n", 17);
    ft_printf(" % i \n", 17);
	printf("\n % i \n", 99);
    ft_printf(" % i \n", 99);
	printf("\n % i \n", 100);
    ft_printf(" % i \n", 100);
	printf("\n % i \n", 101);
    ft_printf(" % i \n", 101);
	printf("\n % i \n", -9);
    ft_printf(" % i \n", -9);
	printf("\n % i \n", -10);
    ft_printf(" % i \n", -10);
	printf("\n % i \n", -11);
    ft_printf(" % i \n", -11);
	printf("\n % i \n", -14);
    ft_printf(" % i \n", -14);
	printf("\n % i \n", -15);
    ft_printf(" % i \n", -15);
	printf("\n % i \n", -16);
    ft_printf(" % i \n", -16);
	printf("\n % i \n", -99);
    ft_printf(" % i \n", -99);
	printf("\n % i \n", -100);
    ft_printf(" % i \n", -100);
	printf("\n % i \n", -101);
    ft_printf(" % i \n", -101);
	printf("\n % i \n", INT_MAX);
    ft_printf(" % i \n", INT_MAX);
	printf("\n % i \n", INT_MIN);
    ft_printf(" % i \n", INT_MIN);
	printf("\n % i \n", LONG_MAX);
    ft_printf(" % i \n", LONG_MAX);
	printf("\n % i \n", LONG_MIN);
    ft_printf(" % i \n", LONG_MIN);
	printf("\n % i \n", UINT_MAX);
    ft_printf(" % i \n", UINT_MAX);
	printf("\n % i \n", ULONG_MAX);
    ft_printf(" % i \n", ULONG_MAX);
	printf("\n % i \n", 9223372036854775807LL);
    ft_printf(" % i \n", 9223372036854775807LL);
	printf("\n % i % i % i % i % i % i % i\n", INT_MAX, INT_MIN, LONG_MAX, LONG_MIN, ULONG_MAX, 0, -42);
    ft_printf(" % i % i % i % i % i % i % i\n", INT_MAX, INT_MIN, LONG_MAX, LONG_MIN, ULONG_MAX, 0, -42);

	/*u*/
	printf("\n %u \n", 0);
    ft_printf(" %u \n", 0);
	printf("\n %u \n", -1);
    ft_printf(" %u \n", -1);
	printf("\n %u \n", 1);
    ft_printf(" %u \n", 1);
	printf("\n %u \n", 9);
    ft_printf(" %u \n", 9);
	printf("\n %u \n", 10);
    ft_printf(" %u \n", 10);
	printf("\n %u \n", 11);
    ft_printf(" %u \n", 11);
	printf("\n %u \n", 15);
    ft_printf(" %u \n", 15);
	printf("\n %u \n", 16);
    ft_printf(" %u \n", 16);
	printf("\n %u \n", 17);
    ft_printf(" %u \n", 17);
	printf("\n %u \n", 99);
    ft_printf(" %u \n", 99);
	printf("\n %u \n", 100);
    ft_printf(" %u \n", 100);
	printf("\n %u \n", 101);
    ft_printf(" %u \n", 101);
	printf("\n %u \n", -9);
    ft_printf(" %u \n", -9);
	printf("\n %u \n", -10);
    ft_printf(" %u \n", -10);
	printf("\n %u \n", -11);
    ft_printf(" %u \n", -11);
	printf("\n %u \n", -14);
    ft_printf(" %u \n", -14);
	printf("\n %u \n", -15);
    ft_printf(" %u \n", -15);
	printf("\n %u \n", -16);
    ft_printf(" %u \n", -16);
	printf("\n %u \n", -99);
    ft_printf(" %u \n", -99);
	printf("\n %u \n", -100);
    ft_printf(" %u \n", -100);
	printf("\n %u \n", -101);
    ft_printf(" %u \n", -101);
	printf("\n %u \n", INT_MAX);
    ft_printf(" %u \n", INT_MAX);
	printf("\n %u \n", INT_MIN);
    ft_printf(" %u \n", INT_MIN);
	printf("\n %u \n", LONG_MAX);
    ft_printf(" %u \n", LONG_MAX);
	printf("\n %u \n", LONG_MIN);
    ft_printf(" %u \n", LONG_MIN);
	printf("\n %u \n", UINT_MAX);
    ft_printf(" %u \n", UINT_MAX);
	printf("\n %u \n", ULONG_MAX);
    ft_printf(" %u \n", ULONG_MAX);
	printf("\n %u \n", 9223372036854775807LL);
    ft_printf(" %u \n", 9223372036854775807LL);
	printf("\n %u %u %u %u %u %u %u\n", INT_MAX, INT_MIN, LONG_MAX, LONG_MIN, ULONG_MAX, 0, -42);
    ft_printf(" %u %u %u %u %u %u %u\n", INT_MAX, INT_MIN, LONG_MAX, LONG_MIN, ULONG_MAX, 0, -42);

	/*xX*/
	printf("\n %X \n", 0);
    ft_printf(" %X \n", 0);
	printf("\n %X \n", -1);
    ft_printf(" %X \n", -1);
	printf("\n %X \n", 1);
    ft_printf(" %X \n", 1);
	printf("\n %X \n", 9);
    ft_printf(" %X \n", 9);
	printf("\n %X \n", 10);
    ft_printf(" %X \n", 10);
	printf("\n %X \n", 11);
    ft_printf(" %X \n", 11);
	printf("\n %X \n", 15);
    ft_printf(" %X \n", 15);
	printf("\n %X \n", 16);
    ft_printf(" %X \n", 16);
	printf("\n %X \n", 17);
    ft_printf(" %X \n", 17);
	printf("\n %X \n", 99);
    ft_printf(" %X \n", 99);
	printf("\n %X \n", 100);
    ft_printf(" %X \n", 100);
	printf("\n %X \n", 101);
    ft_printf(" %X \n", 101);
	printf("\n %X \n", -9);
    ft_printf(" %X \n", -9);
	printf("\n %X \n", -10);
    ft_printf(" %X \n", -10);
	printf("\n %X \n", -11);
    ft_printf(" %X \n", -11);
	printf("\n %X \n", -14);
    ft_printf(" %X \n", -14);
	printf("\n %X \n", -15);
    ft_printf(" %X \n", -15);
	printf("\n %X \n", -16);
    ft_printf(" %X \n", -16);
	printf("\n %X \n", -99);
    ft_printf(" %X \n", -99);
	printf("\n %X \n", -100);
    ft_printf(" %X \n", -100);
	printf("\n %X \n", -101);
    ft_printf(" %X \n", -101);
	printf("\n %X \n", INT_MAX);
    ft_printf(" %X \n", INT_MAX);
	printf("\n %X \n", INT_MIN);
    ft_printf(" %X \n", INT_MIN);
	printf("\n %X \n", LONG_MAX);
    ft_printf(" %X \n", LONG_MAX);
	printf("\n %X \n", LONG_MIN);
    ft_printf(" %X \n", LONG_MIN);
	printf("\n %X \n", UINT_MAX);
    ft_printf(" %X \n", UINT_MAX);
	printf("\n %X \n", ULONG_MAX);
    ft_printf(" %X \n", ULONG_MAX);
	printf("\n %X \n", 9223372036854775807LL);
    ft_printf(" %X \n", 9223372036854775807LL);
	printf("\n %X %X %X %X %X %X %X\n", INT_MAX, INT_MIN, LONG_MAX, LONG_MIN, ULONG_MAX, 0, -42);
    ft_printf(" %X %X %X %X %X %X %X\n", INT_MAX, INT_MIN, LONG_MAX, LONG_MIN, ULONG_MAX, 0, -42);
	printf("\n %X \n", 42);
    ft_printf(" %X \n", 42);
	printf("\n %X \n", -42);
    ft_printf(" %X \n", -42);
	printf("\n %x \n", 0);
    ft_printf(" %x \n", 0);
	printf("\n %x \n", -1);
    ft_printf(" %x \n", -1);
	printf("\n %x \n", 1);
    ft_printf(" %x \n", 1);
	printf("\n %x \n", 9);
    ft_printf(" %x \n", 9);
	printf("\n %x \n", 10);
    ft_printf(" %x \n", 10);
	printf("\n %x \n", 11);
    ft_printf(" %x \n", 11);
	printf("\n %x \n", 15);
    ft_printf(" %x \n", 15);
	printf("\n %x \n", 16);
    ft_printf(" %x \n", 16);
	printf("\n %x \n", 17);
    ft_printf(" %x \n", 17);
	printf("\n %x \n", 99);
    ft_printf(" %x \n", 99);
	printf("\n %x \n", 100);
    ft_printf(" %x \n", 100);
	printf("\n %x \n", 101);
    ft_printf(" %x \n", 101);
	printf("\n %x \n", -9);
    ft_printf(" %x \n", -9);
	printf("\n %x \n", -10);
    ft_printf(" %x \n", -10);
	printf("\n %x \n", -11);
    ft_printf(" %x \n", -11);
	printf("\n %x \n", -14);
    ft_printf(" %x \n", -14);
	printf("\n %x \n", -15);
    ft_printf(" %x \n", -15);
	printf("\n %x \n", -16);
    ft_printf(" %x \n", -16);
	printf("\n %x \n", -99);
    ft_printf(" %x \n", -99);
	printf("\n %x \n", -100);
    ft_printf(" %x \n", -100);
	printf("\n %x \n", -101);
    ft_printf(" %x \n", -101);
	printf("\n %x \n", INT_MAX);
    ft_printf(" %x \n", INT_MAX);
	printf("\n %x \n", INT_MIN);
    ft_printf(" %x \n", INT_MIN);
	printf("\n %x \n", LONG_MAX);
    ft_printf(" %x \n", LONG_MAX);
	printf("\n %x \n", LONG_MIN);
    ft_printf(" %x \n", LONG_MIN);
	printf("\n %x \n", UINT_MAX);
    ft_printf(" %x \n", UINT_MAX);
	printf("\n %x \n", ULONG_MAX);
    ft_printf(" %x \n", ULONG_MAX);
	printf("\n %x \n", 9223372036854775807LL);
    ft_printf(" %x \n", 9223372036854775807LL);
	printf("\n %x %x %x %x %x %x %x\n", INT_MAX, INT_MIN, LONG_MAX, LONG_MIN, ULONG_MAX, 0, -42);
    ft_printf(" %x %x %x %x %x %x %x\n", INT_MAX, INT_MIN, LONG_MAX, LONG_MIN, ULONG_MAX, 0, -42);
	printf("\n %x \n", 42);
    ft_printf(" %x \n", 42);
	printf("\n %x \n", -42);
    ft_printf(" %x \n", -42);




    return 0;
}
