#include <cstdio>
//2020/12/12 23�� 53�� �н� ����
//������ ���T

// if���� �������� ����� �ִ�
// if (����1) {����1 �� ���϶� ������ ��} 
// else if (����2) {���� 2�� ���϶� �����Ұ�}
// else {���� �ش� ���� ���� ��� ������ ��}




// int�� �Լ��� ����� �ִ�
// int �Լ��̸�() {�ݺ��Ǵ� ���; return ���;}
// ��󿵻� ���ϱ� ()�ȿ��� ���� ���� �ص� �Ǵ°� ������ �װ� ȣ���� �� �������� �����ϴ��� �𸥴�
// �� �׳� �Լ� �ȿ��� ���� �����ϰ�, ���� 2�� �Է� �ް�, ���� return������ ���ߴ�
// void ��°� �ִ��� �װŴ� return���� ��� �ǳ�����




// �Լ��� ����� ���� �װ� ���ɾ�?
// �÷ο��� ȣ���̶� ��ɾ�ó�� ������ �ϴ� ���� �Լ��� ����
// int a = �Լ�1() �̷��� ���� �ȴ�.
// �׷��� �����Լ��� a���� �Լ�1�� return������ �����ȴ�.


int inputing_a(int a) {
	printf("input_a: ");
	scanf_s("%d", &a);
	fflush(stdin);
	return a;
}

int inputing_b(int b) {
	printf("input_b: ");
	scanf_s("%d", &b);
	fflush(stdin);
	return b;
}

int function_zz(int a, int b) {
	
	
	int c = a + b;
	
	return c;
}

int main() {
	
	
	for (int i = 0; i < 100; i = i++) {
		
		
		int a = inputing_a(0);
		int b = inputing_b(0);
		int c;
		c = function_zz(a, b);

		if (c < 100) {
			printf("ouput: c�� %d�̰�, 100���� �۴�\n",c);

		}
		else if (c > 100) {
			printf("ouput: c�� %d�̰�, 100���� ũ��\n",c);
		}
		else {
			printf("ouput: c�� %d�̰�, 100 �̴�\n",c);
		}
		
		fflush(stdin);
	}
	return 0;
}
