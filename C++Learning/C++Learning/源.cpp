#include <iostream>
#include<string>
//导入string库,c++字符串部分函数由此引用
#include<cmath>
//数学库 sqrt() round()

using namespace std;
//常量
#define PI = 3.1415926

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

//用户输入
void input(int x) {
	cin >> x;
	cout << x;
}

int main() {
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
	return 0;
}