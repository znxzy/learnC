#include <stdbool.h>
#include <stdio.h>

int findString(const char source[], const char pattern[])
{
        int i, j, index;
        bool found = false;
        int stringLength(const char s[]);

        for (i = 0; source[i] != '\0'; ++i) {
		if (!found) {
                        if (source[i] == pattern[0]) {
                                j = 0;
                                if (pattern[j] != '\0') {
                                        while (pattern[j] == source[i + j]) {
                                                ++j;
                                        }
                                }
                                if ( j == stringLength(pattern)) {
                                        found = true;
                                        index = i;
                                } 
                        }
                }
	}

        if (!found) {
                index = -1;
        }

        return index;
}

int stringLength(const char s[])
{
        int result;

        result = 0;

        while (s[result] != '\0') {
                ++result;
        }

        return result;
}

int main(void)
{
        const char s1[] = "a chatterbox";
        const char s2[] = "hat";

        printf("\n%i\n", findString(s1, s2));

        return 0;
}