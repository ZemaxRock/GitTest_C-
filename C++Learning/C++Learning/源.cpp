#include <iostream>
#include<string>
#include<cmath>
#include<fstream>
//导入string库,c++字符串部分函数由此引用
//数学库 sqrt() round()
//文件操作相关的库

using namespace std;

#define EXCEPTION

//常量
#define PI = 3.1415926

#ifdef OOP
//函数
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
		//类方法
		void Display() {
			cout << "x:" << x << "  y:" << y << "  name:" << name << endl;
		}
		void Display2();
	};
	//Outside 类外的方法
	void Car::Display2() {
		cout << "Hello World"<<endl;
	}
	
	//构造函数和析构函数
	class Student 
	{
	public:
		string name;
		string ID;
		Student(string x, string y) {
			cout << "这是构造函数捏" << endl;
			name = x;
			ID = y;
		}
		~Student() {
			cout << "这是析构函数捏" << endl;
		}
		void Display() {
			cout << name << "\n" << ID << endl;
		}

	};
	//封装 get set
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
	//继承
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
	//多态 
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
	//变量
	int a = 1;
	double b = 12.10;
	float c = 1.3;
	char d = 'a';
	bool f = true;
	
	string e = "c++";
	string name = "is good";
	string fullname = e + name;
	cout << fullname << "\tfullname长度:" << fullname.length() << endl;
	cout << fullname[0]<<endl;
	fullname[0] = 'A';
	cout << fullname << endl;

	cout << a << endl;
	cout << "这是一个浮点数: " << b << "\n对吧！" << endl;
	cout << "bool:" << f << endl;
	
	//常量
	const int E = 2.718;

	//循环
	for (int i = 0; ; i++) {
		cout << "QWQ\n";
		if (i == 5)
			break;
	}
	//无限循环
	// Ctrl + C 可以终止无限循环
	/*
	for (;;) {
		cout << "ヾ(≧▽≦*)o";
	}
	*/

	//数组
	int arry[3] = { 12, 4, 15 };
	//引用变量
	string food = "Pizza";
	string& meal = food;
	cout << food << endl;
	cout << &food << endl;
	//指针
	string* ptr = &food;
	cout << ptr << endl;
		//解引用 
	cout << *ptr << endl;
		//改变指针的值
	*ptr = "Hamburger";
	cout << *ptr << endl;
	cout << food << endl;

	//函数调用
	int ret = max(10, 20);
	cout << endl << ret << endl;
	//用户输入
	int numX = 0;
	input(numX);
#endif  //BASE
#pragma endregion
	
#if 0
	//类实例
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
	//创建并打开一个文本文件
	ofstream MyFile("filename.txt");
	//写入文件
	for(int i = 0; i<10 ; i++)
	MyFile << "Hello World"<<endl;
	//关闭文件
	MyFile.close();

	// 创建一个文本字符串，用于输出文本文件
	string myText;
	// 从文本文件中读取
	ifstream MyReadFile("filename.txt");
	// 使用 while 循环和 getline() 函数逐行读取文件
	while (getline(MyReadFile, myText)) {
		// 从文件中输出文本
		cout << myText<< endl;
	}
#endif //FSTREAM
#ifdef EXCEPTION
	int num;
	try {
		cin >> num;
		if (num > 0) {
			cout << "num为正" << endl;
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