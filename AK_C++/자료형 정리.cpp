#include <stdio.h>
#include <string>

int main()
{
	// 자료형 (크기 단위, byte)
	// 정수형 : char(1), short(2), int(4), long(4), long long(8)
	// 실수형 : float(4), double(8)
	/*
		1 byte = 8 bit
	*/
	int i = 0;
	char c = 0;
	unsigned char uc = 0; //unsigned 는 양수만

	uc = 0;
	uc = 256; // uc에 넣을 수 있는 최댓값 255 실행시 uc는 0

	// 음의 정수 찾기(2의 보수법)
	// 대응되는 양수의 부호를 반전 후, 1을 더한다

	int a = 4 + 4.0;

	// 정수표현 방식과 실수 표현 방식은 다르다
	// 실수 표현방식은 정밀도에 의존한다.
	// 따라서  double(8) 자료형이 float(4) 보다 더 아래의 소수점까지 정확하게 표현이 가능

	// 정수는 정수끼리, 실수는 실수끼리 연산하되, 두 표현방식의 피 연산자가 연산될 경우 명시적으로 변환하자

	float f = 10.2415f + 20;

	// 실수를 상수로 적을 경우 소수점 뒤에 f 를 붙이면 float 자료형으로, f 를 붙이지 않으면 double 자료형으로 간주한다.
	// 0.1f, 0.1;


	// 연산자
	// 대입 연산자, =

	// 산술 연산자
	// +, -,*, /, %(모듈러스, 나머지, 피연산자가 모두 정수)
	// ++, --
	int data = 10 + 10;

	// data = data + 20;
	data += 20;
	data = (int)(10.f / 3.f);

	
	return 0;
}
