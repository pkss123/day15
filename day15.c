#include <stdio.h>
#include <string.h>


int main() {

	char text[50] = "Have a nice day";
	//printf("text : %s\n", text);
	//printf("text의 전체 크기 : %d\n", sizeof(text));
	//printf("text의 문자 수 : %d\n", strlen(text));

	//int cnt = 0;

	//for (int i = 0; i < strlen(text); i++) {
	//	putchar(text[i]);
	//	cnt++;
	//}
	//printf(" >> 총 %d개 문자\n", cnt);

	//int j = 0;
	//while (text[j] != '\0') {
	//	putchar(text[j]);
	//	j++;
	//}
	//puts("");

	/*
		strcpy(문자열1, 문자열2)
		 문자열2에 들어있는 데이터를 문자열1로 복사
		
		strcpy_s(문자열1, 허용크기, 문자열2)
		 문자열2의 값을 문자열1로 복사할 때 허용크기 내인지 확인
	*/

	//char dataA[10];
	//strcpy_s(dataA, sizeof(dataA), "copy test");
	//printf("dataA : %s\n", dataA);

	//char dataB[] = "2021 C";
	//strcpy_s(dataA, sizeof(dataA), dataB);
	//printf("dataA : %s\n", dataA);

	/*
		strcat(문자열1, 문자열2)
		 문자열2의 값을 문자열1 뒤에 이어 붙이는 함수

		strcat_s(문자열1, 허용크기, 문자열2)
		 
	*/

	//char base[10] = "abc";
	//char stn[] = "def";
	//
	//printf("base : %s\n", base);

	//strcat_s(base, sizeof(base), stn);
	//printf("base : %s\nstn : %s\n", base, stn);

	/*
		strcmp(문자열1, 문자열2)
		 두 문자열의 값이 같은지 확인
		 같으면 0 반환, 다르면 -1 or 1 반환
	*/

	//char stnA[10] = "abc";
	//char stnB[5] = "def";
	//char stnC[] = "abc";

	//printf("stnA : %s\nstnB : %s\nstnC : %s\n", stnA, stnB, stnC);
	//puts("");
	//printf("stnA, stnB 같은가요 : %d\n", strcmp(stnA, stnB));	// 첫글자 a가 d보다 빨라서 -1
	//printf("stnA, stnC 같은가요 : %d\n", strcmp(stnA, stnC));
	//printf("stnB, stnC 같은가요 : %d\n", strcmp(stnB, stnC));	// 첫글자 d가 a보다 느려서 1

	//if (strcmp(stnA, stnC) == 0)		// ( !strcmp(stnA,stnC) )
	//	puts("stnA, stnC : 같은 문자열");
	//else
	//	puts("stnA, stnC : 다른 문자열");

	//char f[20];
	//char s[20];

	//printf("1번 단어 : ");
	//gets_s(f, sizeof(f));
	//while (getchar() != '\n');

	//printf("2번 단어 : ");
	//gets_s(s, sizeof(s));
	//puts("");

	//if (strcmp(f, s) < 0)
	//	printf("%s %s\n", f, s);
	//else if (strcmp(f, s) > 0)
	//	printf("%s %s\n", s, f);
	//else
	//	printf("같은 단어 %s", f);

	char t[20];
	char e[5];

	printf("문장 : ");
	gets_s(t, sizeof(t));
	while (getchar() != '\n');

	printf("문자 : ");
	gets_s(e, sizeof(e));
	puts("");


}