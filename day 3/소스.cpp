#include <stdio.h>
#include <stdlib.h>
#include <time.h>

//2020/12/14 10시 3분 학습 기록
//코딩하는 거니T 29살 C++ 6화 흐름 제어

//랜덤값을 만드는 함수는 스탠다드 라이브러리, std lib.h를 소환해야한다.
//그러나 이것은 사실 일정한 숫자만 나오게 하므로 진정한 랜덤을 만들지 않는다.
//그러므로 누가 발명한건데 시계를 기준으로 랜덤값을 뽑게한다.
//이때 time.h를 또 소환해줘야 한다.
//srand(time(NULL));로 사용한다 rand()함수를 시간에따라 설정해서 srand인가보다.

//오늘의 본론: 흐름 제어
//주로 반복문에서 어쨋든 코드 진행중에
//조건 맞으면 원하는 위치로 이동하거나(if 에다 goto @@; 그리고 이동할 위치는 @@:로 설정)
//반복문 실행하다가 조건이 맞으면 그 주기는 생략시키거나(if + continue;)
//조건이 맞으면 즉시 머무르던 반복문이나 스위치를 탈출하거나 (if + break;) 

//새로 알게 됨: main함수는 return 값이 없어도 되는게 C99 표준이라고 한다 
//ㅋㅋㅋㅋㅋㅋ 코드 다 짜놓고 맨위에 return 0;하면 아무것도 실행 안하는거 뻘하게 웃기네



int main() {
	 
	int i;
	srand(time(NULL));
	for (i = 1; i <= 10; i++) {

		printf("%d\n", i);
		if (i == 7) {
			break;
		}
	}
	
	int a;
	for (int j = 0; j < 1000; j++) {
		a = rand() % 10 +1;
		printf("%d\n", a);
		if (a == 5) {break;}
	}

	for (int k = 0; k < 10; k++) {
		if(k%2 == 0){continue;}
		printf("helloworld %d\n",k);
	}
	
	goto end;


	printf("hi");
	printf("hi");
	printf("hi");
end:
	printf("bye^오^");
	
	
}

