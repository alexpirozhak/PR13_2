#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <conio.h>
#include "macro.h"

void main()
{
	puts("Lab 13.2. Using macros and preprocessing directive");
	int x, y, x_kvadr, y_plus_z_kv, maxim, minim;
	char ch;
	
	do
	{
		puts("enter sense of x");
		scanf("%d", &x);
		PRINTI(x);
		puts("enter sense of y");
		scanf("%d", &y);
		PRINTI(y);

#if z<5 && z>0
		puts("define maximum");
		x_kvadr = SQR(x);
		PRINTI(x_kvadr);
		PRINTI(z);
		PRINTI(x * y * z);
		PRINTI(x_kvadr + y + z);
		maxim = MAX(x_kvadr + y + z, x * y * z);
		PRINTI(maxim);
#else
		puts("define minimum");
		x_kvadr = SQR(x);
		PRINTI(x_kvadr);
		y_plus_z_kv = SQR(y + z);
		PRINTI(y_plus_z_kv);
		PRINTI(z);
		PRINTI(x * y);
		minim = MIN(x_kvadr + y_plus_z_kv, x * y);
		PRINTI(minim);
#endif
		puts("Repeat? y /n "); ch = _getch();
	} while (ch == 'y');
}

