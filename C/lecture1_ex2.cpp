/* ����1-2: �� ���� Ű����� �Է¹޾� ���� ��� ��� */
/* ���Ժ� */
# include <stdio.h>// printf()�� sacnf()�� ����ϱ� ���� ��� ���� ����
# pragma warning(disable:4996) // �������� �ʴ� �Լ� ��뿡 ���� ��� �޽��� ����
int a, b, c;  // ������ �����ϴ� ���� ����
int product(int x, int y);   // ����� �Լ� ����

/* main() �Լ� */
void main() {
	/* ù��° ���� �Է�*/
	printf("Enter a number between 1 and 100 : ");
	scanf("%d", &a);
	/* �ι�° ���� �Է�*/
	printf("Enter another number between 1 and 100 : ");
	scanf("%d", &b);
	/* �Լ� ȣ�⿡ ���� �� ���� ���ϰ� ��� ���*/
	c = product(a, b);
	printf("%d * %d = %d \n", a, b, c);
}

/* �� ���� ���� ����Ͽ� �����ִ� ����� �Լ� */
int product(int x, int y) {
	return(x * y);
}