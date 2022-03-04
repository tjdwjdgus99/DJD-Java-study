#pragma once
#include <iostream>
using namespace std;

class Person {
	string name;
public:
	Person(string name) { this->name = name; }	// 생성자
	string getName() { return name; }
	bool go();		// true가 반환되면 이름 출력
};
