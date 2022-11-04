// #include <stdio.h>
// #include <stdarg.h>
// #include "ft_printf.h"

// void	d(int i, ...)
// {
// 	va_list f;
// 	printf("fp_offset :%u\n", f->fp_offset);
// 	printf("gp_offset :%u\n", f->gp_offset);
// 	printf("reg_save_area :%llu\n", f->reg_save_area);
// 	printf("overflow_arg_area :%llu\n", f->overflow_arg_area);
// 	printf("===========================\n");

// 	va_start(f, i);
// 	int p = 0;
// 	while(p < 8)
// 	{
// 		printf("fp_offset :%u\n", f->fp_offset);
// 		printf("gp_offset :%u\n", f->gp_offset);
// 		printf("reg_save_area :%llu\n", f->reg_save_area);
// 		printf("overflow_arg_area :%llu\n", f->overflow_arg_area);
// 		printf("===========================\n");
// 		va_arg(f, int);
// 		p++;
// 	}
// }

// int main()
// {
// 	ft_printf("a %s s\n",NULL);
// 	printf("a %s s",NULL);
// 	//d(1,2,3,4,5);
// }