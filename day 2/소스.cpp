#include <cstdio>
//2020/12/12 23시 53분 학습 일지
//개발자 라라T

// if절로 조건절을 만들수 있다
// if (조건1) {조건1 이 참일때 실행할 것} 
// else if (조건2) {조건 2가 참일때 실행할것}
// else {위에 해당 사항 없을 경우 실행할 것}




// int로 함수를 만들수 있다
// int 함수이름() {반복되는 기능; return 출력;}
// 라라영상 보니까 ()안에서 변수 선언 해도 되는것 같은데 그걸 호출할 때 오류나서 어케하는진 모른다
// 난 그냥 함수 안에서 변수 선언하고, 변수 2개 입력 받고, 합을 return값으로 정했다
// void 라는게 있던데 그거는 return값이 없어도 되나보다




// 함수를 만들면 뭐해 그걸 어케씀?
// 올로에서 호출이란 명령어처럼 쓰고자 하는 메인 함수로 가서
// int a = 함수1() 이렇게 쓰면 된다.
// 그러면 메인함수의 a값은 함수1의 return값으로 지정된다.


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
			printf("ouput: c는 %d이고, 100보다 작다\n",c);

		}
		else if (c > 100) {
			printf("ouput: c는 %d이고, 100보다 크다\n",c);
		}
		else {
			printf("ouput: c는 %d이고, 100 이다\n",c);
		}
		
		fflush(stdin);
	}
	return 0;
}
