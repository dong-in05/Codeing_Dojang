#include<iostream> //전처리 지시자

/*
	C++에서 함수를 사용하려면
	반드시 그 함수의 원형을 미리 정의 하여야 한다.
*/

using namespace std;  //이것이 있으면 std::cout를 cout로 생략할 수 있다

// ' ; '  종결자의 역할

int main() {
	//C++ 코드에는 main (이름을 가진) 함수가 있어야한다

	cout << "Hello, world" << endl;		//cout는 출력 endl은 줄 바꿈
															// "<<" 데이터의 방향 '=' 느낌일듯

		//char : 작은 문자형
	char a = '!';
	char c[] = { 'a','b','c','d', '\0'};
	cout << c << endl;
	//null 문자 '\0'

	bool b = 0;	// 1은 true 0은 false 0을 제외하고 모든 수를 1로만 저장한다
	bool b1 = 1;
	bool b2= 4414;
	
	cout << b << " " << b1 << " " << b2 << endl;

	return 0;
}