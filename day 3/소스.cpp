#include <stdio.h>
#include <stdlib.h>
#include <time.h>

//2020/12/14 10獣 3歳 俳柔 奄系
//坪漁馬澗 暗艦T 29詞 C++ 6鉢 斐硯 薦嬢

//沓棋葵聖 幻球澗 敗呪澗 什田陥球 虞戚崎君軒, std lib.h研 社発背醤廃陥.
//益君蟹 戚依精 紫叔 析舛廃 収切幻 蟹神惟 馬糠稽 遭舛廃 沓棋聖 幻級走 省澗陥.
//益君糠稽 刊亜 降誤廃闇汽 獣域研 奄層生稽 沓棋葵聖 嗣惟廃陥.
//戚凶 time.h研 暁 社発背操醤 廃陥.
//srand(time(NULL));稽 紫遂廃陥 rand()敗呪研 獣娃拭魚虞 竺舛背辞 srand昔亜左陥.

//神潅税 沙経: 斐硯 薦嬢
//爽稽 鋼差庚拭辞 嬢其窮 坪球 遭楳掻拭
//繕闇 限生檎 据馬澗 是帖稽 戚疑馬暗蟹(if 拭陥 goto @@; 益軒壱 戚疑拝 是帖澗 @@:稽 竺舛)
//鋼差庚 叔楳馬陥亜 繕闇戚 限生檎 益 爽奄澗 持繰獣徹暗蟹(if + continue;)
//繕闇戚 限生檎 聡獣 袴巷牽揮 鋼差庚戚蟹 什是帖研 纏窒馬暗蟹 (if + break;) 

//歯稽 硝惟 喫: main敗呪澗 return 葵戚 蒸嬢亀 鞠澗惟 C99 妊層戚虞壱 廃陥 
//せせせせせせ 坪球 陥 促兜壱 固是拭 return 0;馬檎 焼巷依亀 叔楳 照馬澗暗 珊馬惟 数奄革



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
	printf("bye^神^");
	
	
}

