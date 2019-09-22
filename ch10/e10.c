/**
 * 第10章 练习题 10
 */

#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct entry {
        char word[15];
        char definition[50];
};

int main(void)
{
        struct entry dictionary[100] = {
                { "aardvark", "a burrowing African mammal" },
                { "abyss", "a bottomless pit" },
                { "acumen", "mentally sharp; keen" },
                { "aerie", "a high nest" },
                { "affix", "to append; attach" },
                { "agar", "a jelly made from seaweed" },
                { "ahoy", "a nautical call of greeting" },
                { "aigrette", "an ornamental cluster of feathers" },
                { "ajar", "partially opened" },
                { "addle", "to become confused" }
        };

        int i;

        for (i = 0; i < 10; ++i) {
                printf("%-3d%-15s\t%s\n", i + 1, dictionary[i].word, dictionary[i].definition);
        }
	// void qsort(void *base, size_t nitems, size_t size, int (*compar)(const void *, const void*))
        qsort(dictionary, 10, 65, (__compar_fn_t)strcmp);

        printf("==================\t=====================================\n");

        for (i = 0; i < 10; ++i) {
                printf("%-3d%-15s\t%s\n", i + 1, dictionary[i].word, dictionary[i].definition);
        }

        return 0;
}