/**
 * 计算一段文本的单词数目
 */
#include <stdbool.h>
#include <stdio.h>

void readLine(char buffer[])
{
        char character;
        int i = 0;

        do {
                character = getchar();
                buffer[i] = character;
                ++i;
        } while (character != '\n');

        buffer[i - 1] = '\0';
}

bool alphabetic(const char c)
{
	//TODO: 以下判定代码需要重构，太难看了
        if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z')) {
                return true;
        } else if ((c == '+') || (c == '-') || (c == '\'') || (c == ',') || (c == '.')) {
                return true;
        } else if (c >= '0' && c <= '9') {
                return true;
        } else {
                return false;
        }
}

int countWords(const char string[])
{
        int i, wordCount = 0;
        bool lookingForWord = true, alphabetic(const char c);
        bool numberFlag = false;
        bool wordFlag = false;

        for (i = 0; string[i] != '\0'; ++i) { /* 根据练习题要求改定， 增加对数字和“ ' ” 的判定 */
                if (alphabetic(string[i])) { 
			//TODO: 以下判定代码需要重构，太难看了
                        if (lookingForWord && ((string[i] >= 'a' && string[i] <= 'z') || (string[i] >= 'A' && string[i] <= 'Z'))) {
                                ++wordCount;
                                lookingForWord = false;
                                wordFlag = true;
                        } else if (lookingForWord && ((string[i] >= '0') && string[i] <= '9')) {
                                ++wordCount;
                                lookingForWord = false;
                                numberFlag = true;
                        } else if ((wordFlag && string[i] == '\'') && lookingForWord) {
                                ++wordCount;
                                lookingForWord = false;
                        } else if ((string[i] == '-' || string[i] == '+') && lookingForWord) {
                                ++wordCount;
                                lookingForWord = false;
                                numberFlag = true;
                        } else if (((string[i] >= '0' && string[i] <= '9')) && numberFlag && lookingForWord) {
                                ++wordCount;
                                lookingForWord = false;
				numberFlag = true;
                        } else if ((numberFlag && (string[i] == ',' || string[i] == '.') && lookingForWord)) {
                                ++wordCount;
                                lookingForWord = false;
                        }
                } else {
                        lookingForWord = true;
                        numberFlag = false;
                        wordFlag = false;
                }
        }

        return wordCount;
}

int main(void)
{
        char text[81];
        int totalWords = 0;

        int countWords(const char string[]);
        void readLine(char buffer[]);

        bool endOfText = false;

        printf("Type in your text.\n");
        printf("When you are done, press 'RETURN'.\n\n");

        while (!endOfText) {
                readLine(text);
                if (text[0] == '\0') {
                        endOfText = true;
                } else {
                        totalWords += countWords(text);
                }
        }
        printf("\nThere are %i words in the above text.\n", totalWords);

        return 0;
}
