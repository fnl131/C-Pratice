//#include <iostream>
//#include <bitset>
//#include<cmath>
//using namespace std;
//
////int main() {
//	//// 이름짓기 중요
//	// // 변수와 초기화 동시에 하는경우
//	//int number = 100; 
//	////int _num = 2;  // _는 여러가지 경우에 가능.
//	//// ex appleNumber, apple_number
//	//int appleNumber = 100;
//
//
//
//	/*int number = 10;
//	int number2 = number * number;
//	int number3 = number2 * number2;
//	int number4 = number3 * number3;
//	
//
//
//	cout << number4 << endl;*/
//	/*int count = 0;
//	while (count++ < 10) {
//	
//		cout << "Helllo World" << endl;
//
//	}*/
//
//	//for (int count = 0; count < 10; count++) {
//	//	cout << "Helllo World" << endl;
//
//	//}
//	/*int count = 0;
//	do {
//		cout << "Helllo World" << endl;
//
//	} while (count++ < 10);*/
//
//	/*int num = 0;
//	for (int i = 0; i <= 100; i++) {
//		num += i;
//		
//	}
//	cout << num << endl;*/
//
//	/*for (int i = 0; i <5; i++) {
//
//		for (int j = 0; j < i; j++) {
//		cout<<"*";
//		}
//		cout<< endl;
//
//	}*/
//
//	/*const float constPi = 3 + 2;
//	float a = 3 * constPi;
//	cout << a << endl;
//
//	float b = 3 * PI;
//	cout << b << endl;/
//*/
//	/*
//	int mathscore = 0;
//	int score = 100;
//
//	mathscore = score == 100 ? score : score = 50 ? score * 2 : score / 2;
//	cout << mathscore << endl; */
//
//	int sum = 0;
//	int num[100] = { 0 };
//	int a = 0;
//	
//	cin >> a;
//	cout << "숫자를 입력하세요" << endl;
//	for (int i = 0; a < 100; i++) {
//		switch (a) {
//		case '+':
//			cin >> num[i];
//			sum += num[i];
//			cout << sum;
//			break;
//		case '-':
//			cin >> num[i];
//			sum -=num[i];
//			cout << sum;
//			break;
//		case '/':
//			cin >> num[i];
//			sum / num[i];
//			cout << sum;
//			break;
//		case '*':
//			cin >> num[i];
//			sum * num[i];
//			cout << sum;
//		case '%':
//			cin >> num[i];
//			sum % num[i];
//			cout << sum;
//		default:
//			break;
//
//		}
//
//	}
//
//	
//
//
//	
//
//
//
//	
//	
//
//	//
//	
//	/*int score[5];
//	int sum = 0;
//	float avg = 0;
//	for (int i = 0; i < 5; i++) {
//		cin >> score[i];
//		sum += score[i];
//		avg = sum / 5;
//	}
//	cout << avg << endl;*/
//
//
//
//
//
//	/*int number = 0;
//
//	int i = 0;
//	bool t = i < 10000;
//	while (t)
//	{
//		i = i + 1;
//		t = i < 10000;
//		number += 1;
//	}
//	cout << number << endl;*/
//	
//	/*int price = 1000;
//	int money = 10000;
//
//	if (price < 1500) {
//		cout << "Buy" << endl;
//	}
//	else
//	{
//		cout << "Go home" << endl;
//	}
//
//	cout << "Money: " << money - price << endl;*/
//
//
//
//
//
//
//
//
//
//
//
//
//
//	//cout << number << endl;
//	//number += appleNumber;
//	//// number = number + appleNumber
//	//cout << number << endl;
//	//number++;
//	//// number = number + 1;
//	//cout << number << endl;
//	//++number;
//	//cout << number << endl;
//
//	/*int number = 1;
//	cout << number << endl;
//	cout << number-- << endl;
//	cout << --number << endl;
//
//	number |= 100;
//	cout << number << endl;*/
//
//
//	//const int a = 0b0001;
//	//int b = 0b1000;  // 비트단위 표현
//	////const int c = a & b;
//	////const int c = a | b;
//	//// ~ : 반대로 바꿈
//
//	//int d = 100 + 10 * 3;
//	//const int c = ~(b << 1);
//	//// 연산자가 연산되는 순서는 쓰면서
//
//	//cout << bitset<8>(a) << ", " << bitset<8>(b) << endl;
//	//cout << bitset<8>(c) << endl;
//
//
//	// c+in 입력 , c+out 출력
//	// c+in 입력 , c+out 출력
//	//cout << "1 + 1 = " << a + b << endl;
//
//
//	// 비트연산자
//	// &, |
//	// 
//	// 
//	// 10/3 = 3 정수타입
//	// 10%3 = 1 나눈 나머지. 
//
//	
//	
//	//100이하의 홀수를 출력하기. 
//
////
////for (int i = 0; i < 100; i++) {
////	if (i % 2 == 1) {
////		cout << i << endl;
////	}
////}
//
//
//
//
//	return 0;
//}