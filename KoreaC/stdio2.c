#include <stdio.h>				//C언어 입력/출력

void main2() {
	//C언어는 main()에서 시작합니다
	printf("C언어 시작\n");		//stdio 안에 있는 기능: 화면에 보여주는 역할 printf
	printf("Hello World\n");

	//글자는 ""안에
	//숫자는 그냥 적으면 됨
	//한줄 입력이 마치면 반드시 ;
	printf("%d \n",1234123);

	//옛날에는 모니터가 작았음 -> Enter를 많이 할수가 없었음 -> Enter대신 ; 으로 문장 끝난것을 표시
	printf("안녕하세요 \n"); printf("반갑습니다.");
}