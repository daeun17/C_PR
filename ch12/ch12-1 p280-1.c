#include <stdio.h>
int main(void)
{
	int num1 = 100, num2 = 100;
	int* pnum;
	int* aa;
	pnum = &num1;//num1 의 주소를 반환하여 pnum에 저장
	printf("%p \n", pnum);
	aa = &pnum;
	printf("%p\n", aa);
	*aa += 30;//aa에 저장된 주소(pnum의 주소)에 있는 data(pnum에 저장된 data)에 +30해서 data 저장(pnum의 data가 더 이상 num1의 주소를 가리키지 않음)
	printf("%p \n %p \n", pnum, aa);
	*pnum += 30;//pnum의 data가 변경되어서 pnum이 더이상 num1의 주소를 나타내지 않음(num1의 주소+30)
	printf("%d \n", num1);//num1은 값의 변화가 없음
	pnum = &num2;//num2의 주소값을 pnum에 저장
	*pnum += 10;
	printf("%d \n", num2);
	return 0;
}