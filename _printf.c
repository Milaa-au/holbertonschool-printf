#include "main.h"
#include <stdarg.h>
#include <stdio.h>

int _printf(const char *format, ...)
{
	va_list args;
	int i = 0, count = 0, temp;

	if (format == NULL)
	{
		return (-1);
	}

	va_start(args, format);

	while (format[i] != '\0')
	{
		if (format[i] != '%')
		{
			 putchar(format[i]);
			count++;
		}
		else
		{
			
			temp = get_func(format[i], args);

            if (temp == -1)
            {
                count += putchar('%');
                count += putchar(format[i]);
            }
            else
            {
                count += temp;
            }
        }
        i++;
    }

	va_end(args);
	return (count);
}
