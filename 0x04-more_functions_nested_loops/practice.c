#include <stdio.h>

int main(void)
{
	   int i, j;

    for (i = 48; i < 58; i++)
    {
        for (j = 48; j <58; j++)
        {
            if (i == 0)
            {
                continue;
            }
            putchar(i);
            putchar(j);
        }
        putchar('\n');
		}
}
