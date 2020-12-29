#include <stdio.h>
#include <list>
#include <stdlib.h>
//숫자 특징값과 숫자 레이블을 학습하는 수퍼바이져 러닝 선형회귀 모델을 만들고 싶었던 초보의 발악입니다.
//완성시키지 못했습니다. 좀 더 공부하여 정상작동 가능하도록 만들겠습니다.
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


	int a = 0;//XList에 값을 넣기위해 사용자에게 입력받은 값이 임시로 저장 되는 공간이다. 
	int b = 0;//마찬가지
	int m = 0;//자료의 개수를 센다
	printf("supervisor 선형회귀 모델을 만드는 프로그램 입니다.\n");
	printf("먼저 x-y세트는 5개만 입력해 주세요. 5를 누르고 엔터친 다음 자룔ㄹ 입력합니다.\n");
	printf("특징이 될 X와 레이블이 될 Y값을 띄어스기로 구분하고 엔터를 치며 데이터 셋을 만들어 주세요.\n Ex) 3 6엔터, 2 4 엔터\n");
	printf("자료를 전부 입력하시면 잠시뒤 모델이 생성됩니다.\n");
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
//자료 개수=카운트 개수 이면 입력받는 루프는 멈춘다.
	int count = 0;
	while(m > count) {
		scanf_s("%d %d", &a, &b);
		XList[count]=a;//데이터를 a,b에 입력받아 각각 X,Y배열..?각 카운트 수에 집어넣는 절차를 반복
		YList[count]=b;
		fflush(stdin);
		count++;
	}
//이제 Cost 함수를 완성시키기 위해 리스트의 맨 앞단 부터 값을 불러와서 각각 X,Y에 불러온다
//이후 Cost 함수 첫 항이 완성되면 Cost()=Cost()+(W*X-Y)**2으로 재정의 하면서 다음항을 추가한다.
// 마찬가지로, m==count 가 될 때 까지 항을 더해서 최종적으로 Cost(W)함수를 정의 하도록 한다.
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
