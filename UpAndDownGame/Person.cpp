#include "Person.h"
#include "UpAndDownGame.h"
#include <iostream>
using namespace std;

bool Person::go() {
	int number;
	cout << name << ": " << endl;
	cin >> number;
	bool result = UpAndDownGame::check(number); //정답이면 true, 오답이면 false 반환
	return result;
}