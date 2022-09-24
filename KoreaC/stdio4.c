#include <stdio.h>

void main4() {
	// 자주 바뀔 것 같은 혹은 중요한 정보는 미리 저장을 해두자!
	// 변수 (저장공간)

	char a1 = 97;
	char b2 = 66;

	int num1 = 123;
	//저장할 데이터에 따라서 공간의 형태를 바꿔줘야함
	// 숫자:int
	//문자:char
	//소수점 있는 숫자: float
	//문자 여러개: char[]

	//변수를 만드는 방법
	//형태 공간이름 = 값;

	char name [] = "홍길동";		//이름이라는 공간에 홍길동을 저장 %s
	int age = 25;					//나이라는 변수에 25를 저장		  %d
	float kg = 70.7;				//몸무게라는 변수에 70.7을 저장	  %f
	char a = 65;					//문자라는 공간에 A를 저장		  %c

	//변수를 사용하는 법
	printf("%d \n", age);
	printf("%s \n", name);
	printf("%.1f \n", kg);
	printf("%c ", a);
}