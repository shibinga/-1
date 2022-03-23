#include"stdio.h"
#include"string.h"
#pragma warning(disable:4996)

int task(char s[], char w[])
{
	int slen = strlen(s),wlen = strlen(w), count = 0;
	for (int i = 0; i <= slen - wlen; i++) {
		char* pw = new char[wlen + 1];
		pw[wlen] = '\0';
		for (int j = 0; j < wlen; j++) pw[j] = s[i + j];
		if (strcmp(pw, w) == 0) count++;
		delete[] pw;
	}
	return count;
}

int main()
{
	char s[100], w[30];
	printf("请输入英文句子\n");
	gets_s(s,100);
	printf("请输入单词\n");
	gets_s(w, 30);
	_strlwr(s);
	_strlwr(w);
	printf("句子中单词出现的数为%d", task(s, w));
	return 0;
}

