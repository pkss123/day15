#include <stdio.h>
#include <string.h>


int main() {

	char text[50] = "Have a nice day";
	//printf("text : %s\n", text);
	//printf("text�� ��ü ũ�� : %d\n", sizeof(text));
	//printf("text�� ���� �� : %d\n", strlen(text));

	//int cnt = 0;

	//for (int i = 0; i < strlen(text); i++) {
	//	putchar(text[i]);
	//	cnt++;
	//}
	//printf(" >> �� %d�� ����\n", cnt);

	//int j = 0;
	//while (text[j] != '\0') {
	//	putchar(text[j]);
	//	j++;
	//}
	//puts("");

	/*
		strcpy(���ڿ�1, ���ڿ�2)
		 ���ڿ�2�� ����ִ� �����͸� ���ڿ�1�� ����
		
		strcpy_s(���ڿ�1, ���ũ��, ���ڿ�2)
		 ���ڿ�2�� ���� ���ڿ�1�� ������ �� ���ũ�� ������ Ȯ��
	*/

	//char dataA[10];
	//strcpy_s(dataA, sizeof(dataA), "copy test");
	//printf("dataA : %s\n", dataA);

	//char dataB[] = "2021 C";
	//strcpy_s(dataA, sizeof(dataA), dataB);
	//printf("dataA : %s\n", dataA);

	/*
		strcat(���ڿ�1, ���ڿ�2)
		 ���ڿ�2�� ���� ���ڿ�1 �ڿ� �̾� ���̴� �Լ�

		strcat_s(���ڿ�1, ���ũ��, ���ڿ�2)
		 
	*/

	//char base[10] = "abc";
	//char stn[] = "def";
	//
	//printf("base : %s\n", base);

	//strcat_s(base, sizeof(base), stn);
	//printf("base : %s\nstn : %s\n", base, stn);

	/*
		strcmp(���ڿ�1, ���ڿ�2)
		 �� ���ڿ��� ���� ������ Ȯ��
		 ������ 0 ��ȯ, �ٸ��� -1 or 1 ��ȯ
	*/

	//char stnA[10] = "abc";
	//char stnB[5] = "def";
	//char stnC[] = "abc";

	//printf("stnA : %s\nstnB : %s\nstnC : %s\n", stnA, stnB, stnC);
	//puts("");
	//printf("stnA, stnB �������� : %d\n", strcmp(stnA, stnB));	// ù���� a�� d���� ���� -1
	//printf("stnA, stnC �������� : %d\n", strcmp(stnA, stnC));
	//printf("stnB, stnC �������� : %d\n", strcmp(stnB, stnC));	// ù���� d�� a���� ������ 1

	//if (strcmp(stnA, stnC) == 0)		// ( !strcmp(stnA,stnC) )
	//	puts("stnA, stnC : ���� ���ڿ�");
	//else
	//	puts("stnA, stnC : �ٸ� ���ڿ�");

	//char f[20];
	//char s[20];

	//printf("1�� �ܾ� : ");
	//gets_s(f, sizeof(f));
	//while (getchar() != '\n');

	//printf("2�� �ܾ� : ");
	//gets_s(s, sizeof(s));
	//puts("");

	//if (strcmp(f, s) < 0)
	//	printf("%s %s\n", f, s);
	//else if (strcmp(f, s) > 0)
	//	printf("%s %s\n", s, f);
	//else
	//	printf("���� �ܾ� %s", f);

	char t[20];
	char e[5];

	printf("���� : ");
	gets_s(t, sizeof(t));
	while (getchar() != '\n');

	printf("���� : ");
	gets_s(e, sizeof(e));
	puts("");


}