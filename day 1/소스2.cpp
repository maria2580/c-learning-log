#include <cstdio>
//2020/12/11일 14시 57분 학습 end
//개발자 라라 참고
//\n은 줄바꿈을 해준다 ㅎㅎ 
//int는 정수 float은 소수인데 둘이 더하려면 값이 손실되서 안된당
//같은 자료형 끼리 더하게 하면 괜찮을 줄 알았는데 그것도 아닌갑다
//fflush(stdin); 는 입력값을 깔끔하게 해주나보다
//for (int i = 0; i < 10; i++) {} 는 10회 반복이당
//for (int i = 0; i < a; i++) {}  는 a회 반복이당. 대신에 앞에서 int a = 0 으로 변수 선언을 해준다
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
	printf("%c세%f진 간%f드앗%d",character ,integer, floating_point, bool_t);
	printf("\n정수 입력 ㄱㄱ:");
	scanf_s("%f", &integer);
	fflush(stdin);
	printf("\n소수 입력 ㄱㄱ:");
	scanf_s("%f", &floating_point);
	fflush(stdin);

	printf("\n입력된 정수값:%f", integer);
	printf("\n입력된 소수값:%f", floating_point);
	

	printf("\n입력하신 만큼 정수에 소수를 더하면서 출력합니다\n");
	scanf_s("%d", &fr);
	fflush(stdin);
	for (int i = 0; i < fr; i++) {
		printf("%f", output = output + floating_point);
	}


	fflush(stdin);
	return 0;
}