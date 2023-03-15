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

	return 0;
}