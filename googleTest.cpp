#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

#define N 255


struct letter 
{
	char letter;
	bool repeats;
	bool printed;
};


int main()
{
	char str[N];
	int length = 0;
	struct letter letters[N];
	int flag = 0;


	printf("Enter set of letters: ");
	scanf("%s", str);
	printf("\n");


	for (int i = 0; str[i] != '\0'; i++) {
		flag = 0;
		for (int j = 0; j < length; j++) {
			if (str[i] == letters[j].letter) {
				if (letters[j].printed == false)
					printf(" %c", str[i]);
				letters[j].printed = true;
				flag = 1;
				break;
			}
		}
		if (flag == 0)
			letters[length++].letter = str[i];
	}


	//for (int i = 0; i < length; i++) {
	//	if (letters[i].repeats == true)
	//		printf(" %c", letters[i].letter);
	//}


	//for (int i = 0; str[i] != '\0'; i++) {
	//	flag = 0;
	//	for (int j = 0; j < length; j++) {
	//		if (str[i] == letters[j]) {
	//			printf(" %c ", letters[j]);
	//			flag = 1;
	//			break;
	//		}
	//	}
	//	if (flag == 0) {
	//		letters[length++] = str[i];
	//	}
	//}
	return 0;
}