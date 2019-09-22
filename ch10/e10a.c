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

void ssort(struct entry dict[], int entries)
{
        void strcopy(char target[], char source[]);
        int compareStrings(const char s1[], const char s2[]);
        int i, j;
        struct entry temp;

        for (i = 0; i < entries - 1; ++i){
                for (j = 0; j < entries - 1; ++j){
                        if (compareStrings(dict[j].word, dict[j + 1].word) > 0) {
                                strcopy(temp.word, dict[j].word);
                                strcopy(temp.definition, dict[j].definition);

                                strcopy(dict[j].word, dict[j + 1].word);
                                strcopy(dict[j].definition, dict[j + 1].definition);

                                strcopy(dict[j + 1].word, temp.word);
                                strcopy(dict[j + 1].definition, temp.definition);

                                /* temp = (struct entry){
                                        .word = { [0 ... 14] = '\0' },
                                        .definition = { [0 ... 49] = '\0' }
                                }; */
                        }
                }
        }
}

void strcopy(char target[], char source[])
{
        int index;

        for (index = 0; source[index] != '\0'; ++index) {
                target[index] = source[index];
        }

        target[index] = '\0';
}

int compareStrings(const char s1[], const char s2[])
{
	int index = 0, result;

	while (s1[index] == s2[index] && s1[index] != '\0' && s2[index] != '\0')
		++index;

	if (s1[index] < s2[index])
		result = -1;	/* s1  <  s2 */
	else if (s1[index] == s2[index])
		result = 0;	/* s1  == s2 */
	else
		result = 1;	/* s1  >  s2 */

	return result;
}

unsigned long int countStruct(struct entry d[], unsigned long int c)
{
        /**
         *  xxx: 计算结构体数组中的元素个数
         *      可以工作，但未验证
         */

        unsigned long int index, count, size;
        size = c / sizeof(struct entry);
        count = 0;

        for (index = 0; index < size; ++index){
                if (d[index].word[0] != '\0') {
                        ++count;
                }
        }

        return count;
}

int main(void)
{
        unsigned long int countStruct(struct entry d[], unsigned long int c);
        void ssort(struct entry dict[], int entries);

        unsigned long int index, entries;
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
        entries = countStruct(dictionary, sizeof(dictionary));

        printf("\n排序前：\n==================\t=====================================\n");
        for (index = 0; index < entries; ++index) {
                printf("%-3ld%-15s\t%s\n", index + 1, dictionary[index].word, dictionary[index].definition);
        }
	// void qsort(void *base, size_t nitems, size_t size, int (*compar)(const void *, const void*))
        // qsort(dictionary, 10, 65, (__compar_fn_t)strcmp);

        ssort(dictionary, countStruct(dictionary, sizeof(dictionary)));

        printf("\n排序后：\n==================\t=====================================\n");

        for (index = 0; index < entries; ++index) {
                printf("%-3ld%-15s\t%s\n", index + 1, dictionary[index].word, dictionary[index].definition);
        }

        return 0;
}