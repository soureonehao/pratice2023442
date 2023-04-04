#include<stdio.h>
int COM_CON(int figure1, int figure2);	//声明函数，求最小公倍数
int COM_CON(int figure1, int figure2) {
	int i;
	if (figure1 >= figure2) //判断两数大小，原因是两数最小公倍数不能小于两数中的最值大
		i = figure1;
	else if (figure1 < figure2)
		i = figure2;
	while (1) {
		if (i % figure1 == 0 && i % figure2 == 0) {	//判断数字i是可以与两个数整除，不可以加1继续判断
			return i;
			break;
		}
		i++;	
	}
}
int COM_FAC(int figure1, int figure2); //声明最大公因数
int COM_FAC(int figure1, int figure2){
	int k,i = 1, box = 0;
	if (figure1 <= figure2)
		k = figure1;
	else if (figure1 > figure2)
		k = figure2;
	while (i <= k) {
		if (figure1 % i == 0 && figure2 % i == 0)
			box = i;
		i++;
	}
	return box;
}
void main() {
	int figure1, figure2, i;
	printf("请输入两个整数：");
	scanf_s("%d%d", &figure1, &figure2);
	i = COM_CON(figure1, figure2);
	printf("他们的最小公倍数是：%d\n", i);
	i = COM_FAC(figure1, figure2);
	printf("他们的最大公因数是：%d", i);
}