#include <stdio.h>

// _=1;main($){for(;_%$?:(_+=$=1);++$*$>_&&printf("%i|",$=_));}

int main(void)
{
        float x = 6.5f;
        int i = *(int*)&x;

        printf("%i\n", i);

        return 0;
}