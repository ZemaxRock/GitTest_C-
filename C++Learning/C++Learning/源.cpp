#include <iostream>
#include<string>
#include<cmath>
#include<fstream>
//����string��,c++�ַ������ֺ����ɴ�����
//��ѧ�� sqrt() round()
//�ļ�������صĿ�

using namespace std;

#define EXCEPTION

//����
#define PI = 3.1415926

#ifdef OOP
//����
int max(int num1, int num2) {
	int result;
	if (num1 > num2) {
		result = num1;
	}
	else
	{
		result = num2;
	}
	return result;
}
int One(int a, int b = 10) {
	if (a < b)
		return a;
	else
	{
		return b;
	}
}
	void input(int x) {
	cin >> x;
	cout << x;
}

	class Car {
	public :
		int x;
		double y;
		string name = "Hello";
		//�෽��
		void Display() {
			cout << "x:" << x << "  y:" << y << "  name:" << name << endl;
		}
		void Display2();
	};
	//Outside ����ķ���
	void Car::Display2() {
		cout << "Hello World"<<endl;
	}
	
	//���캯������������
	class Student 
	{
	public:
		string name;
		string ID;
		Student(string x, string y) {
			cout << "���ǹ��캯����" << endl;
			name = x;
			ID = y;
		}
		~Student() {
			cout << "��������������" << endl;
		}
		void Display() {
			cout << name << "\n" << ID << endl;
		}

	};
	//��װ get set
	class Food {
		string name;
		string much;
	public:
		void SetN(string _N) {
			name = _N;
		}
		string GetN() {
			return name;
		}

		void SetM(string _M) {
			much = _M;
		}
		string GetM() {
			return much;
		}
	};
	//�̳�
	class Shape {
	protected:
		int width;
		int height;

	public:
		void setWidth(int w) {
			width = w;
		}
		void setHeight(int h) {
			height = h;
		}
	};
	class Rectangle : public Shape {
	public:
		int getArea() {
			return (width * height);
		}
	};
	//��̬ 
	class Animal {
	public :
		 void animalSound() {
			cout << "The animal make a sound" << endl;
		}
	};
	class Cat : public Animal {
	public:
		void animalSound() {
			cout << "The cat: miao miao" << endl;
		}
	};
	class Dog : public Animal {
	public:
		void animalSound() {
			cout << "The dog: wang wang" << endl;
		}
	};
#endif //OOP
int main() {

#pragma region BaseTest
#ifdef BASE
	cout << "Hello World" << endl;
	cout << "123";
	//����
	int a = 1;
	double b = 12.10;
	float c = 1.3;
	char d = 'a';
	bool f = true;
	
	string e = "c++";
	string name = "is good";
	string fullname = e + name;
	cout << fullname << "\tfullname����:" << fullname.length() << endl;
	cout << fullname[0]<<endl;
	fullname[0] = 'A';
	cout << fullname << endl;

	cout << a << endl;
	cout << "����һ��������: " << b << "\n�԰ɣ�" << endl;
	cout << "bool:" << f << endl;
	
	//����
	const int E = 2.718;

	//ѭ��
	for (int i = 0; ; i++) {
		cout << "QWQ\n";
		if (i == 5)
			break;
	}
	//����ѭ��
	// Ctrl + C ������ֹ����ѭ��
	/*
	for (;;) {
		cout << "�d(�R���Q*)o";
	}
	*/

	//����
	int arry[3] = { 12, 4, 15 };
	//���ñ���
	string food = "Pizza";
	string& meal = food;
	cout << food << endl;
	cout << &food << endl;
	//ָ��
	string* ptr = &food;
	cout << ptr << endl;
		//������ 
	cout << *ptr << endl;
		//�ı�ָ���ֵ
	*ptr = "Hamburger";
	cout << *ptr << endl;
	cout << food << endl;

	//��������
	int ret = max(10, 20);
	cout << endl << ret << endl;
	//�û�����
	int numX = 0;
	input(numX);
#endif  //BASE
#pragma endregion
	
#if 0
	//��ʵ��
	Car car;
	car.x = 13;
	cin >> car.y;
	car.Display();
	//cout << "x:" << car.x << endl << "y:" << car.y << endl << car.name;
	car.Display2();
#endif
#pragma region OOP
#ifdef OOP
	Student student("Chen", "123");
	student.Display();

	Food food;
	food.SetN("apple");
	food.SetM("114514");
	cout << food.GetN() << endl << food.GetM() << endl;

	Rectangle rect;
	rect.setHeight(10);
	rect.setWidth(20);
	cout << rect.getArea() << endl;

	Cat cat;
	Dog dog;
	cat.animalSound();
	dog.animalSound();
#endif //OOP
#pragma endregion
#ifdef FSTREAM
	//��������һ���ı��ļ�
	ofstream MyFile("filename.txt");
	//д���ļ�
	for(int i = 0; i<10 ; i++)
	MyFile << "Hello World"<<endl;
	//�ر��ļ�
	MyFile.close();

	// ����һ���ı��ַ�������������ı��ļ�
	string myText;
	// ���ı��ļ��ж�ȡ
	ifstream MyReadFile("filename.txt");
	// ʹ�� while ѭ���� getline() �������ж�ȡ�ļ�
	while (getline(MyReadFile, myText)) {
		// ���ļ�������ı�
		cout << myText<< endl;
	}
#endif //FSTREAM
#ifdef EXCEPTION
	int num;
	try {
		cin >> num;
		if (num > 0) {
			cout << "numΪ��" << endl;
		}
		else
	//throw(myNum);
	throw 505;
	}
	//catch(...)
	catch (int myNum) {
		cout << "error:" << myNum;
	}

#endif //EXCEPTION
	return 0;
}