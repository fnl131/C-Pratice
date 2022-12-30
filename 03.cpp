#include <iostream>

using namespace std;


//22.12.29


//void Swap(int* A, int* B)
//{
//	int C = *A;
//	*A = *B;   // &A = &B 를 할려는게 아니다. 
//	*B = C;
//}
// 설명 : 메인함수의 메모리블럭이 있고 스왑함수의 블럭이 하나 더 새로 생긴다. 카피본이다.
//		  스왑함수의 연산이 끝나면 메모리와 카피본이 사라진다. 
//		  그러므로 메인함수에서는 값이 변경되지 않는다. 따라서 포인터를 사용하면
//		  값을 바꿔줄수 있다. 
// 
//int FindMin(int* NumberArray, int Size)
//
//{
//	int min = *NumberArray;
//	for (int i = 0; i < Size; i++) {
//		if (min > NumberArray[i]) {
//			min = NumberArray[i];
//		}
//	}
//	return min;
//}
// 실습 11
// 문자열을역순으로 반환하는 함수 구현 
// 

//void Swap(char& A, char& B) // 참조를 안하면 안바뀌어서 나옴. 
//{
//	char C = A;
//	A = B;   
//	B = C;
//}
//
//char* Reverse(char *PtrCharacter, int Size) 
//{
//	//char reverse = *PtrCharacter;
//
//	for (int i = 1; i < Size/2 ; i++)  
//	{
//		Swap(PtrCharacter[i], PtrCharacter[Size - i - 1]);
//
//		/*char tmp = PtrCharacter[i];
//		PtrCharacter[i] = PtrCharacter[Size - 1 - i];
//		PtrCharacter[Size - 1 - i] = tmp;*/
//
//
//	}
//	return PtrCharacter;
//}

void Swap1(int& PtrA, int&PtrB) {
	int PtrC = PtrA;
	PtrA = PtrB;
	PtrB = PtrC;
	

}

void Swap2(int* PtrA, int* PtrB) {         
	int PtrC = *PtrA;
	*PtrA = *PtrB;
	*PtrB = PtrC;


}


// 카피본 생기고, PtrA의 값이 복제가 된다.
// 만약 백만개를 전달하면 백만개가 전달이되므로, 포인터를 사용하면
// 주소만 전달하므로 적게 용량을 사용한다. 
// 실습 10
// 배열의 최솟값 구하기.
// 
// 
// 
//실습 12 - 데미지 계산기. 함수 호출 끄나고 체력이 닳도록.
// 데미지에서 방어력을 빼고 뺀만큼 체력이 닳도록. 일정 닷지 확률 만큼 공격을 회피. 
//
//
//void* TakeDamage(float& Health, float Damage, float Armor, float DodgeRate, float CritiCalRate)
//{
//	srand(time(NULL));
//	int Rand = rand();
//	float DodgeSuccess = ((Rand / 2) / (float)RAND_MAX);   // 
//	cout << DodgeSuccess << endl;
//	bool Dodge = false;
//
//	float CritiCalSuccess = ((Rand / 3) / (float)RAND_MAX);
//	cout << "크리티컬 확률 : " << CritiCalSuccess << endl;
//	float CritiCalDamage = Damage * 2;
//	bool Critical = false;
//
//
//	if (DodgeRate > DodgeSuccess)
//	{
//		Dodge = true;
//		cout << "Dodge!" << endl;
//	}
//	else
//	{
//		Dodge = false;
//		if (CritiCalSuccess > CritiCalRate)
//		{
//			Critical = true;
//			if (CritiCalDamage > Armor)
//			{
//				Health = (Health + Armor) - CritiCalDamage;
//				cout << "크리티컬 피해를 입었습니다." << endl;
//			}
//
//			else if (CritiCalDamage > (Health + Armor))
//			{
//				cout << "플레이어는 죽었습니다." << endl;
//			}
//			else if (CritiCalDamage <= Armor)
//			{
//				cout << "방어력에 의해 무시되었습니다." << endl;
//			}
//
//		}
//		else (CritiCalSuccess < CritiCalRate); {
//			Critical = false;
//			if (Damage > Armor)
//			{
//				Health = (Health + Armor) - Damage;
//				cout << "일반피해를 입었습니다." << endl;
//			}
//
//			else if (Damage > (Health + Armor))
//			{
//				cout << "플레이어는 죽었습니다." << endl;
//			}
//			else if (Damage <= Armor)
//			{
//				cout << "방어력에 의해 무시되었습니다." << endl;
//			}
//		}
//	}
//	return 0;
//}


int Factorial(int N) {
	static int Cnt = 0;
	if (N == 0) {
		return 1;
	}
	else if(Cnt++ < 10){
		cout << Cnt << endl;
		return N * Factorial(N - 1);
	}
}
// (12)x11,10,9,8,7,6,5,4,3,2,1


int main() {
	
	//float Health;
	//float Damage;
	//float Armor = 10;
	//float DodgeRate = 0.1f;
	//float CritiCalRate = 0.1f;

	//cin >> Health;
	//cin >> Damage;

	//TakeDamage(Health, Damage, Armor, DodgeRate, CritiCalRate);
	//cout << Health << endl;

	//char PtrCharacter[] = {'A','B','C','D','E'};
	//const int Size = 5;
	//Reverse(PtrCharacter, Size);

	//for (int i = 0; i < Size; i++)
	//{
	//	cout << PtrCharacter [i]<< endl;
	//}


	//int A = 3;
	//int B = 10;
	//

	////int *PtrVar = 3;  
	//// *~~ 은 *가 가리키는 곳이다.  
	//
	////int *PtrB = &A;   // ex) A의 주소를 저장하는 형태의포인터
	////*PtrB *= 10;

	////cout << "*B : " << *PtrB << endl;  
	////// ㄴ디레퍼런싱 예제. 1.포인터의 사용법
	////cout << "A : " << A << endl;
	////// ㄴA변수를 사용하지 않았는데, A의 값도 변경된것을 확인.

	//Swap(&A, &B);
	//cout << A << B << endl;

	//int Array[] = { 8,3,6,7,9 };
	//const int Size = 5;
	//int* PtrTemp = &Array[0];

	//for (int i = 0; i < Size; i++) {
	//	cout << PtrTemp + i << endl;

	//}
	//for (int i = 0; i < Size; i++) {
	//	cout << *(PtrTemp + i) << endl;
	//}
	//for (int i = 0; i < Size; i++) {
	//	cout << PtrTemp[i] << endl;

	//}
	//cout <<FindMin(Array, 5) << endl;
	//


	//cout << Array << endl;         // Array의 주소만 출력. 
	// Static
	// 함수안에서 스테틱 선언하여 재귀함수에서 함수 호출횟수 확인 등에서 사용할 수 있다. 
	// 전역변수로 스테틱 선언하는 것은 좋지 않다. 

	// int *PtraA = &A   A의 주소를 포인터 선언함.
	// PtrA  ~~ PtrA의 주소임. PtrA + 4 는 PtrA의 주소 + 20바이트(인트기준) 입니다.
	// *PtrA 는 디렉퍼리싱 된 것으로 값임. *(PtrA+4)는 그 값에 +4를 한거임. 


	//--------------------------------------------
	// -----------2022-12-30------------------------
	//-------------------------------------------

	//콜바이 벨류 = 복사해서 카피본을 넘김
	// int *A, 등 포인터를 받을때, 콜바이 밸류임, 주소를 카피에 넘기는 것임.
	//콜바이 레퍼런스 = 원본을 바꿈. 인자에 &, 
	// int*&a, 원본의 주소값을 바꾼다. int*a 에 + &,,    int & b = a, a는 별명, a=b
	

	// 포인터 a가 a를 가리키고 b가 b를 가리키도록 만들기


	//int A = 1;
	//int B = 2;
	//int C = 0;

	//int* PtrA = &A;
	//int* PtrB = &B;


	////Swap1(* PtrA, * PtrB);       // &A, &B도 가능
	//Swap2(PtrA, PtrB);

	//cout << A << ", "<< B << endl;

	

	
	//cout << "PtrA 주소 : " << PtrA <<"값 " << A << endl;
	//cout << "PtrB 주소 : " << PtrB <<"값 " << B << endl;

	/*
	PtrA = &B;
	PtrB = &A; */
	
	// 포인터를 바꿈. 
	/*int* PtrC = PtrA;
	PtrA = PtrB;
	PtrB = PtrC;*/
	
	//cout << "PtrA 주소 : " << PtrA << "값 " << A << endl;
	//cout << "PtrB 주소 : " << PtrB << "값 " << B << endl;



	// int 포인터를 받는 함수. 함수를 수행하고 나면 값이 바뀌는 함수. A,B


	cout << Factorial(14) << endl;





}