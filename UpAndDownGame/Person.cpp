#include "Person.h"
#include "UpAndDownGame.h"
#include <iostream>
using namespace std;

bool Person::go() {
	int number;
	cout << name << ": " << endl;
	cin >> number;
	bool result = UpAndDownGame::check(number); //�����̸� true, �����̸� false ��ȯ
	return result;
}