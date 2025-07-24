/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: framador <N/A>                             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/24 13:26:32 by framador          #+#    #+#             */
/*   Updated: 2025/07/24 13:57:28 by Mal              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <stdio.h>

#define MAX 1
#define MIN 0

static void check(char param, int custom, int original)
{
	if (custom != original) {
        printf("Custom ft_printf and printf return different values for %%%c\n", param);
		printf("%d, %d\n", custom, original);
	}
}

static void check_limits(int max_or_min, char param, int custom, int original)
{
	char *m_o_m = 
		max_or_min == 1 
			? "maximum"
			: "minimum";  
	if (custom != original) {
        printf("Custom ft_printf and printf return different values for %s value of %%%c\n", m_o_m, param);
		printf("%d, %d\n", custom, original);
	}
}

int main() {

    int custom_printf_result, printf_result;
    char c = 'A';
    char *str = "Hello, World!";
    void *ptr = &c;
    int num = 42;
    int hexNum = 255;
	
    // Test %c
	
    custom_printf_result = ft_printf("%%c: %c\n", c);
    printf_result = printf("%%c: %c\n", c);
    check('c', custom_printf_result, printf_result);

    // Test %s
	
    custom_printf_result = ft_printf("%%s: %s\n", str);
    printf_result = printf("%%s: %s\n", str);
    check('s', custom_printf_result, printf_result);
	
    // Test %p
	
    custom_printf_result = ft_printf("%%p: %p\n", ptr);
    printf_result = printf("%%p: %p\n", ptr);
    check('p', custom_printf_result, printf_result);


    // Test %d and %i
	
    custom_printf_result = ft_printf("%%d: %d\n", num);
    printf_result = printf("%%d: %d\n", num);
    check('d', custom_printf_result, printf_result);
    
    custom_printf_result = ft_printf("%%i: %i\n", num);
    printf_result = printf("%%i: %i\n", num);
    check('i', custom_printf_result, printf_result);


    // Test %x and %X
	
    custom_printf_result = ft_printf("%%x: %x\n", hexNum);
    printf_result = printf("%%x: %x\n", hexNum);
    check('x', custom_printf_result, printf_result);
	
    custom_printf_result = ft_printf("%%X: %X\n", hexNum);
    printf_result = printf("%%X: %X\n", hexNum);
    check('x', custom_printf_result, printf_result);

    // Test %%
	
    custom_printf_result = ft_printf("%%%%: %%\n");
    printf_result = printf("%%%%: %%\n");
    check('%', custom_printf_result, printf_result);
	// Test maximum and minimum values
	
    custom_printf_result = ft_printf("%%d: %d\n", INT_MAX);
    printf_result = printf("%%d: %d\n", INT_MAX);
	check_limits(MAX, 'd', custom_printf_result, printf_result);
	
    custom_printf_result = ft_printf("%%d: %d\n", INT_MIN);
    printf_result = printf("%%d: %d\n", INT_MIN);
    check_limits(MIN, 'd', custom_printf_result, printf_result);
	
    custom_printf_result = ft_printf("%%u: %u\n", UINT_MAX);
    printf_result = printf("%%u: %u\n", UINT_MAX);
    check_limits(MAX, 'u', custom_printf_result, printf_result);
	
    custom_printf_result = ft_printf("%%x: %x\n", UINT_MAX);
    printf_result = printf("%%x: %x\n", UINT_MAX);
    check_limits(MAX, 'u', custom_printf_result, printf_result);
	
    custom_printf_result = ft_printf("%%X: %X\n", UINT_MAX);
    printf_result = printf("%%X: %X\n", UINT_MAX);
    check_limits(MAX, 'X', custom_printf_result, printf_result);
	
    return 0;
}
