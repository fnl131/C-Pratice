#include <iostream>

using namespace std;


//22.12.29


//void Swap(int* A, int* B)
//{
//	int C = *A;
//	*A = *B;   // &A = &B �� �ҷ��°� �ƴϴ�. 
//	*B = C;
//}
// ���� : �����Լ��� �޸𸮺��� �ְ� �����Լ��� ���� �ϳ� �� ���� �����. ī�Ǻ��̴�.
//		  �����Լ��� ������ ������ �޸𸮿� ī�Ǻ��� �������. 
//		  �׷��Ƿ� �����Լ������� ���� ������� �ʴ´�. ���� �����͸� ����ϸ�
//		  ���� �ٲ��ټ� �ִ�. 
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
// �ǽ� 11
// ���ڿ����������� ��ȯ�ϴ� �Լ� ���� 
// 

//void Swap(char& A, char& B) // ������ ���ϸ� �ȹٲ� ����. 
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


// ī�Ǻ� �����, PtrA�� ���� ������ �ȴ�.
// ���� �鸸���� �����ϸ� �鸸���� �����̵ǹǷ�, �����͸� ����ϸ�
// �ּҸ� �����ϹǷ� ���� �뷮�� ����Ѵ�. 
// �ǽ� 10
// �迭�� �ּڰ� ���ϱ�.
// 
// 
// 
//�ǽ� 12 - ������ ����. �Լ� ȣ�� ������ ü���� �⵵��.
// ���������� ������ ���� ����ŭ ü���� �⵵��. ���� ���� Ȯ�� ��ŭ ������ ȸ��. 
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
//	cout << "ũ��Ƽ�� Ȯ�� : " << CritiCalSuccess << endl;
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
//				cout << "ũ��Ƽ�� ���ظ� �Ծ����ϴ�." << endl;
//			}
//
//			else if (CritiCalDamage > (Health + Armor))
//			{
//				cout << "�÷��̾�� �׾����ϴ�." << endl;
//			}
//			else if (CritiCalDamage <= Armor)
//			{
//				cout << "���¿� ���� ���õǾ����ϴ�." << endl;
//			}
//
//		}
//		else (CritiCalSuccess < CritiCalRate); {
//			Critical = false;
//			if (Damage > Armor)
//			{
//				Health = (Health + Armor) - Damage;
//				cout << "�Ϲ����ظ� �Ծ����ϴ�." << endl;
//			}
//
//			else if (Damage > (Health + Armor))
//			{
//				cout << "�÷��̾�� �׾����ϴ�." << endl;
//			}
//			else if (Damage <= Armor)
//			{
//				cout << "���¿� ���� ���õǾ����ϴ�." << endl;
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
	//// *~~ �� *�� ����Ű�� ���̴�.  
	//
	////int *PtrB = &A;   // ex) A�� �ּҸ� �����ϴ� ������������
	////*PtrB *= 10;

	////cout << "*B : " << *PtrB << endl;  
	////// �����۷��� ����. 1.�������� ����
	////cout << "A : " << A << endl;
	////// ��A������ ������� �ʾҴµ�, A�� ���� ����Ȱ��� Ȯ��.

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


	//cout << Array << endl;         // Array�� �ּҸ� ���. 
	// Static
	// �Լ��ȿ��� ����ƽ �����Ͽ� ����Լ����� �Լ� ȣ��Ƚ�� Ȯ�� ��� ����� �� �ִ�. 
	// ���������� ����ƽ �����ϴ� ���� ���� �ʴ�. 

	// int *PtraA = &A   A�� �ּҸ� ������ ������.
	// PtrA  ~~ PtrA�� �ּ���. PtrA + 4 �� PtrA�� �ּ� + 20����Ʈ(��Ʈ����) �Դϴ�.
	// *PtrA �� ���۸��� �� ������ ����. *(PtrA+4)�� �� ���� +4�� �Ѱ���. 


	//--------------------------------------------
	// -----------2022-12-30------------------------
	//-------------------------------------------

	//�ݹ��� ���� = �����ؼ� ī�Ǻ��� �ѱ�
	// int *A, �� �����͸� ������, �ݹ��� �����, �ּҸ� ī�ǿ� �ѱ�� ����.
	//�ݹ��� ���۷��� = ������ �ٲ�. ���ڿ� &, 
	// int*&a, ������ �ּҰ��� �ٲ۴�. int*a �� + &,,    int & b = a, a�� ����, a=b
	

	// ������ a�� a�� ����Ű�� b�� b�� ����Ű���� �����


	//int A = 1;
	//int B = 2;
	//int C = 0;

	//int* PtrA = &A;
	//int* PtrB = &B;


	////Swap1(* PtrA, * PtrB);       // &A, &B�� ����
	//Swap2(PtrA, PtrB);

	//cout << A << ", "<< B << endl;

	

	
	//cout << "PtrA �ּ� : " << PtrA <<"�� " << A << endl;
	//cout << "PtrB �ּ� : " << PtrB <<"�� " << B << endl;

	/*
	PtrA = &B;
	PtrB = &A; */
	
	// �����͸� �ٲ�. 
	/*int* PtrC = PtrA;
	PtrA = PtrB;
	PtrB = PtrC;*/
	
	//cout << "PtrA �ּ� : " << PtrA << "�� " << A << endl;
	//cout << "PtrB �ּ� : " << PtrB << "�� " << B << endl;



	// int �����͸� �޴� �Լ�. �Լ��� �����ϰ� ���� ���� �ٲ�� �Լ�. A,B


	cout << Factorial(14) << endl;





}