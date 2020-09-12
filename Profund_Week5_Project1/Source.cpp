#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

char shift(int i, int Cipher, char* Text) {
    return Text[i] + Cipher;
}

int len(const char In[256]) {
	int count = 0;
	for (count = 0; count < 256; count++) {
		if (In[count] <= 0 || In[count] > 127) {
			break;
		}
	}
	return count;
}

int main()
{
	int Cipher = 4;
    char Text[256];
    printf("Enter Text : ");
	scanf("%[^\n]", &Text);
	if (len(Text) == 0) {
		printf("Error : No text enter");
		return 0;
	}
	for (int i = 0; i < len(Text); i++) {
		Text[i] = shift(i, Cipher, Text);
	}
	printf("Atbash encoded Text : %s", Text);
    return 0;
}