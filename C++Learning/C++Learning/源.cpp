#include <iostream>
#include<string>
//����string��,c++�ַ������ֺ����ɴ�����
#include<cmath>
//��ѧ�� sqrt() round()

using namespace std;
//����
#define PI = 3.1415926

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

//�û�����
void input(int x) {
	cin >> x;
	cout << x;
}

int main() {
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
	return 0;
}