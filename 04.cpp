#include <iostream>
using namespace std;

struct Coordinate {
	int X;
	int Y;

	Coordinate() {}
	Coordinate(int x, int y) {
		X = x;
		Y = y;
	}

};
enum Day   // int, ������. 
{
	Mon,
	Tue,
	Wed,
	Thu,
	Fri,
	Sat,
	Sun,
};



struct Student {

	string Name;
	int Age;
	int MathScore;
	int EngScore;
	Day Day;
	Coordinate Coordinate;
	//Student* Parent;

	Student(string n){}
	Student(string n, int age, int mScore, int eScore) 
	{
		Name = n;
		Age = age;
		MathScore = mScore;
		EngScore = eScore;
	}
};


struct Students
{
	Student* studentArray;
	int Size = 3;

	Students()  // �⺻ ������
	{
	}

	Students(Student A[3])
	{
		for (int i = 0 ; i < 3; i++)
		studentArray[i] = A[i];
	}

	
};

void PrintLocation(Student Student[], int Size) {

	for (int i = 0; i < Size; i++)
	{
		if (Student[i].Coordinate.X == 10 && Student[i].Coordinate.Y == 10)
		{
			cout << Student[i].Day << endl;
			cout << Student[i].Coordinate.X << ", " << Student[i].Coordinate.Y << endl;
		}
	}

}
void PrintLocation(Students Students) {
	
	for (int i = 0; i < Students.Size; i++)
	{
		
	}
	
	

}

// �ǽ� 13
// �ʹ��� �ֹ��ϸ� ���ð� ���̰� ������ ���ð� �������. 
// �Է����� 1~10 ���� ���ڸ� �Է��ϸ� 1�� ���ú��� 10�� ���ñ��� ���̰�
// 'E'�� �Է��ϸ� �Ծ ���ð� �������. ������� ���߿� ������ ���߿� �����.
// system("cls");

enum Name {
	A,
	B,
	C,
	D,
	E,
	F,
	G,
	H,
	I,
	J
};


struct Shshi {
	
	Name Name;
	int DishCount = 0;

	Shshi() {}
	Shshi(string name, int count)
	{
		count = DishCount;
		name = Name;
	}
};
void Eating(string name, int count) {
	Shshi shshi;
	shshi.DishCount--;
}

int main() {
	int n = 0;
	cin >> n;
	Shshi shshi;
	Name name;
	
	

	


	
	
	
	

	

	










	Student A[3] = { Student("A") ,Student("A") ,Student("A") };
	Students Studentss= Students(A);
	/*Studentss.studentArray[0] = Student("A");
	Studentss.studentArray[1] = Student("A");
	Studentss.studentArray[2] = Student("A");*/
	PrintLocation(Studentss);
	/*Student St1 = Student("A", 20, 100, 50);
	Coordinate Coor1 = Coordinate(3, 10);
	Student St2 = Student("B", 30, 50, 30);
	Coordinate Coor2 = Coordinate(6, 10);
	Student St3 = Student("C", 40, 70, 70);
	Coordinate Coor3 = Coordinate(10, 10);

	
	Students Studentss;
	Studentss.studentArray[0] = St1;
	Studentss.studentArray[1] = St1;
	Studentss.studentArray[2] = St1;



	Student studentArray[3] = { St1, St2, St3 };

	int Monday = Mon;*/

	

}