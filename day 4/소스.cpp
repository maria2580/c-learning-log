#include <stdio.h>
#include <list>
#include <stdlib.h>

/*double regress(int x, int y) {
	srand(time(NULL));
	
}*/
int make_w() {
	int w;
	for (int n = 0; 1; n++) {




		if (cost() == 0) {
			break;
		}
	}
	return w;
}

int main() {


	int a = 0;//XList�� ���� �ֱ����� ����ڿ��� �Է¹��� ���� �ӽ÷� ���� �Ǵ� �����̴�. 
	int b = 0;//��������
	int m = 0;//�ڷ��� ������ ����
	printf("supervisor ����ȸ�� ���� ����� ���α׷� �Դϴ�.\n");
	printf("���� x-y��Ʈ�� 5���� �Է��� �ּ���. 5�� ������ ����ģ ���� �ڷ㤩 �Է��մϴ�.\n");
	printf("Ư¡�� �� X�� ���̺��� �� Y���� ����� �����ϰ� ���͸� ġ�� ������ ���� ����� �ּ���.\n Ex) 3 6����, 2 4 ����\n");
	printf("�ڷḦ ���� �Է��Ͻø� ��õ� ���� �����˴ϴ�.\n");
	scanf_s("%d\n", &m);
	/*	int *XList = malloc(sizeof(int) * 5);
	int *YList = malloc(sizeof(int) * 5);*/
	int XList[5];
	XList[0] = {0};
	XList[1] = { 0 };
	XList[2] = { 0 };
	XList[3] = { 0 };
	XList[4] = { 0 };
	int YList[5];
	YList[0] = { 0 };
	YList[1] = { 0 };
	YList[2] = { 0 };
	YList[3] = { 0 };
	YList[4] = { 0 };
//�ڷ� ����=ī��Ʈ ���� �̸� �Է¹޴� ������ �����.
	int count = 0;
	while(m > count) {
		scanf_s("%d %d", &a, &b);
		XList[count]=a;//�����͸� a,b�� �Է¹޾� ���� X,Y�迭..?�� ī��Ʈ ���� ����ִ� ������ �ݺ�
		YList[count]=b;
		fflush(stdin);
		count++;
	}
//���� Cost �Լ��� �ϼ���Ű�� ���� ����Ʈ�� �� �մ� ���� ���� �ҷ��ͼ� ���� X,Y�� �ҷ��´�
//���� Cost �Լ� ù ���� �ϼ��Ǹ� Cost()=Cost()+(W*X-Y)**2���� ������ �ϸ鼭 �������� �߰��Ѵ�.
// ����������, m==count �� �� �� ���� ���� ���ؼ� ���������� Cost(W)�Լ��� ���� �ϵ��� �Ѵ�.
/*	int X;
	int Y;*/
	int X0 = XList[0];
	int Y0 = YList[0];
	printf("%d\n", X0);
	printf("%d\n", Y0);
	int X1 = XList[1];
	int X2 = XList[2];
	int X3 = XList[3];
	int X4 = XList[4];
	int Y1 = YList[1];
	int Y2 = YList[2];
	int Y3 = YList[3];
	int Y4 = YList[4];

	
	
	
	int w= make_w();
	/*int Cost();{
		int r = (w * X - Y) * (w * X - Y);
		return r;
	}*/
	printf("%d", (w * X0 - Y0) * (w * X0 - Y0)+ (w * X1 - Y1) * (w * X1 - Y1) + (w * X2 - Y2) * (w * X2 - Y2) + (w * X3 - Y3) * (w * X3 - Y3) + (w * X4 - Y4) * (w * X4 - Y4) );

	//	float w;
//	float cost(w);
//	cost(w) =(w* %f-%f)^2,	XList, YList;
	return 0;
}