#include <iostream>
#include <bitset>
#include<cmath>
#include <stdlib.h>
#include<time.h>
using namespace std;

//반복문의 수행시간이 n번 걸리고, 크리티컬하게 수행시간을 늘리게 된다. 
// 



//int main() {
//
//}

//int globalVariable = 100;

// 스택
// 힙
// 스태틱
// 코드
// 4가지 영역으로 나뉘어져 있다. 


// 가장 먼저 호출된 함수가 스택의 가장 맨아래 쌓이게 된다. 

// 실스01 - 최댓값. 
// 3가지 정수를 받아서. 최대값을 출력하는 함수.

// 실습2 - 
// 2가지 정수를 받아서,

// 실습3
// 어떤 정수를 받아서 각 자리의 합을 구하는 함수. 

// 실습4
// 각 주사위를 n 던졌을 때, 나오는 각 눈의 수를 출력하는 프록램. 
// 1200번 ==> 1=200, 2 = 200,번

// 이자 계산기
// 은행예금
//

//실습06
//팩토리얼
// n!
// 7! => 7x6x5x4x3x2x1


//실습 06
//int n = 0;

//int Facto(int n) {
//	int result = 1;
//	for (int i = n; i > 0; i--) {
//		result *= i;
//		cout << "x" << i;
//	}
//	return result;
//}
//
//
//int main() {  
//	cin >> n;
//	cout << endl << "! => " << Facto(n) << endl;
//}
//int B;
//
//int A(int N) {
//	if (N > 1) 
//	{
//		int Result = N * A(N - 1);
//		return Result;
//	}
//	else {
//		return 1;
//	}
//}
//
//int main() {
//	cin >> B;
//	cout << A(B) << endl;
//}


//실습 07
//
//int n = 0;
//int Sum(int N) {
//	if (N > 1) {
//		cout << "+ " << N-1 << endl;
//		return N + Sum(N - 1);
//
//	} 
//	else {
//		return 1;
//	}
//
//}
//
//
//int main() {
//	cin >> n;
//	cout << "=" << Sum(n) << endl;
//}


// 실습 08
//int n;
//int F(int N) {
//	if (N > 2) {
//		cout << N << endl;
//		return F(N - 1) + F(N - 2);
//
//	}
//	else {
//		return 1;
//	}
//
//}
//
//
//int main() {
//	cin >> n;
//	cout <<"피보나치는" << F(n) << endl;
//}
// 실습 09
// 2차원 배열을 1부터 25까지 순서대로. 
//int main() {
//	int Arr[5][5] = { 0 };
//	Arr[0][0] = 1;
//
//	int A = 1;
//
//	for (int i  = 0; i< 5; i++) {
//		for (int j = 0; j < 5; j++) {
//			Arr[i][j] = A++;
//			//Arr[i][j] = 5 * i + j + 1;
//			cout << Arr[i][j] << endl;
//
//		}
//		
//	}
//}

//int main() {
//	int Arr[5][5][5] = {0};
//	Arr[0][0][0] = 1;
//
//	int A = 1;
//
//	for (int i = 0; i < 5; i++) {
//		for (int j = 0; j < 5; j++) {
//			for (int k = 0; k < 5; k++) {
//
//				Arr[i][j][k] = A++;
//				//Arr[i][j] = 5 * i + j + 1;
//				cout << Arr[i][j][k] << endl;
//			}
//		}
//
//	}
//}








//실습 05
// 단 복리 계산기. 
//int A(float b, int c)   // 단리 계산기, c는 년단위, b는 %가정
//{
//	int a = 100000000;
//	float z = 0;  // 단리 변수
//	z = a * ((1 + ((b / 100)) * c));
//	return z;
//}
//
//int B(int a, float b, int c)    // 복리 계산 1
//{
//	float rate = (b / 100);   // 이자
//	for (int i = 0; i < c; i++) {    // n제곱.    
//		rate += rate;      
//		cout << rate << endl;
//	}
//	return a +(a* rate);                   // 원금 + 이자.
//}
//
//int C(int a, float b, int c) {  //  복리 계산 2
//	int result = a;
//	b = b / 100;
//	for (int i = 0; i < c; i++) {
//		float rate = result * b;
//		result += rate;
//		cout << result << endl;
//	}
//	return result;
//
//}
//
//
//
//int main() {           
//	int a;
//	float b;
//	int c;	//입력 a원금 b이자율 c기간
//	cin >> a>> b >> c;
//	cout << C(a, b, c) << endl;
//	
//	
//}



//실습4 
//int a, b, c, d, e, f = 0;
//int n = 0;
//
//int Dice(int n)
//{
//	srand(time(NULL));
//	
//
//
//	for (int i = 0; i < n; i++) {
//		int r = rand();
//		if (r % 6 == 0) {    // 6
//			f++;
//		}
//		else if (r % 6 == 1) {   // 1 7  13 19
//			a++;
//		}
//		else if (r % 6 == 2) {
//			b++;
//		}
//		else if (r % 6 == 3) {
//			c++;
//		}
//		else if (r % 6 == 4) {
//			d++;
//		}
//		else {
//			e++;
//		}
//
//	}
//	return a, b, c, d, e, f;
//}
//
//int main() {
//
//	cin >> n;
//	cout << Dice(n) << a << b << c << e << f << endl;
//
//}



	//int Sum(int NumA) {
	//	int s = 0;
	//	while (NumA > 0) {
	//		s = s + NumA % 10;
	//		NumA = NumA / 10;
	//	}
	//	return s;
	//}


	//int Sum(int NumA) {
	//	int s = 0;
	//	for (; NumA > 0;) {
	//		s = s + NumA % 10;
	//		NumA = NumA / 10;
	//	}
	//	return s;
	//}
	//
	//int main() {
	//	int InputA;
	//
	//	cin >> InputA;
	//	Sum(InputA);
	//
	//	cout << Sum(InputA) << endl;


	//
	//void Change(int NumA, int NumB) {
	//
	//	int Temp;
	//	Temp = NumA;
	//	NumA = NumB;
	//	NumB = Temp;
	//
	//}
	//
	//
	//
	//int main() {
	//
	//	int a, b;
	//	cin >> a;
	//	cin >> b;
	//
	//	Change(a, b);
	//
	//	cout << a << b << endl;


	//int Calculate(int TargetNumber) {
	//	int s = 0;
	//
	//	for (int i = 1; i <= TargetNumber; i++) {
	//		s += 1;
	//	}
	//	
	//	return s;
	//
	//
	//}

	//실습1
	//int Max(int Num1, int Num2, int Num3)
	//{
	//	int Max = 0;
	//
	//	if (Num1 >= Num2 && Num1 >= Num3)
	//	{
	//		Max = Num1;
	//	}
	//	else {
	//		if (Num2 >= Num3) 
	//		{
	//			Max = Num2;
	//		}
	//		else 
	//		{
	//			Max = Num3;
	//		}
	//	}
	//	return Max;
	//}
	//int main() {
	//	int a, b, c;
	//
	//	cin >> a;
	//	cin >> b;
	//	cin >> c;
	//
	//	cout << Max(a, b, c) << endl;
	//	
	//	return 0;




		//int s = 0;
		//int targetNumber = 1000000;
		//for (int i = 1; i <= targetNumber; i++) {
		//	s += 1;
		//}

		//int result = Calculate(targetNumber);   // 종료가 된 후 스택에서 사라지게 된다. 
		//result = Calculate(targetNumber);
		//result = Calculate(targetNumber);
		//result = Calculate(targetNumber);
		//result = Calculate(targetNumber);
		//result = Calculate(targetNumber);

		//return 0;




