#include <cstdio>
//2020/12/11�� 14�� 57�� �н� end
//������ ��� ����
//\n�� �ٹٲ��� ���ش� ���� 
//int�� ���� float�� �Ҽ��ε� ���� ���Ϸ��� ���� �սǵǼ� �ȵȴ�
//���� �ڷ��� ���� ���ϰ� �ϸ� ������ �� �˾Ҵµ� �װ͵� �ƴѰ���
//fflush(stdin); �� �Է°��� ����ϰ� ���ֳ�����
//for (int i = 0; i < 10; i++) {} �� 10ȸ �ݺ��̴�
//for (int i = 0; i < a; i++) {}  �� aȸ �ݺ��̴�. ��ſ� �տ��� int a = 0 ���� ���� ������ ���ش�
//

int main() {
	printf("Hello\nworld");

	float integer = 422;
	float floating_point = 1.414f;
	bool bool_t = true;
	bool boll_f = false;
	const char character = 'g';
	int fr = 0;
	float output = integer;
	printf("%c��%f�� ��%f���%d",character ,integer, floating_point, bool_t);
	printf("\n���� �Է� ����:");
	scanf_s("%f", &integer);
	fflush(stdin);
	printf("\n�Ҽ� �Է� ����:");
	scanf_s("%f", &floating_point);
	fflush(stdin);

	printf("\n�Էµ� ������:%f", integer);
	printf("\n�Էµ� �Ҽ���:%f", floating_point);
	

	printf("\n�Է��Ͻ� ��ŭ ������ �Ҽ��� ���ϸ鼭 ����մϴ�\n");
	scanf_s("%d", &fr);
	fflush(stdin);
	for (int i = 0; i < fr; i++) {
		printf("%f", output = output + floating_point);
	}


	fflush(stdin);
	return 0;
}