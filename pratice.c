#include<stdio.h>
int COM_CON(int figure1, int figure2);	//��������������С������
int COM_CON(int figure1, int figure2) {
	int i;
	if (figure1 >= figure2) //�ж�������С��ԭ����������С����������С�������е���ֵ��
		i = figure1;
	else if (figure1 < figure2)
		i = figure2;
	while (1) {
		if (i % figure1 == 0 && i % figure2 == 0) {	//�ж�����i�ǿ����������������������Լ�1�����ж�
			return i;
			break;
		}
		i++;	
	}
}
int COM_FAC(int figure1, int figure2); //�����������
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
	printf("����������������");
	scanf_s("%d%d", &figure1, &figure2);
	i = COM_CON(figure1, figure2);
	printf("���ǵ���С�������ǣ�%d\n", i);
	i = COM_FAC(figure1, figure2);
	printf("���ǵ���������ǣ�%d", i);
}