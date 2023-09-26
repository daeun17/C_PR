#include <stdio.h>
int main(void)
{
	FILE* src = fopen("simple.txt", "rt");
	FILE* des = fopen("des.txt", "wt");
	char str[20];
	
	if (src == NULL || des == NULL)
	{
		puts("���Ͽ��� ����");
		return -1;
	}

	while (fgets(str,sizeof(str),src) != NULL)
	{
		fputs(str, des);
	}
	if (feof(src) != 0)
	{
		puts("���� ���� �Ϸ�");
	}
	else
	{
		puts("���� ���� ����");
	}

	fclose(src);
	fclose(des);
	return 0;
}