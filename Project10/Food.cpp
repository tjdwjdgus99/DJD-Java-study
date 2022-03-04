#include <iostream>
#include <string>

using namespace std;

class Food {
	int calorie, price, weight;
	string name;
public:
	Food(int c=1, int p=0, int w=0, string n = "NoName") {
		calorie = c;
		price = p;
		weight = w;
		name = n;
	}
	void setCalorie(int c) {
		calorie = c;
	}
	void setPrice(int p) {
		price = p;
	}
	void setWeight(int w) {
		weight = w;
	}
	void setName(string n) {
		name = n;
	}
	int getCalorie() {
		return calorie;
	}
	int getPrice() {
		return price;
	}
	int getWeight() {
		return weight;
	}
	string getName() {
		return name;
	}
};

class Melon :public Food {
	string farm;

public:
	Melon(int c, int p, int w, string n, string f) : Food(c, p, w, n) {
		farm = f;
	}
	void setFarm(string f) {
		farm = f;
	}
	string getFarm() {
		return farm;
	}
	void show() {
		cout << endl << "이  름 : " << getName();
		cout << endl << "가  격 : " << getPrice();
		cout << endl << "칼로리 : " << getCalorie();
		cout << endl << "무  게 : " << getWeight() << "g";
		cout << endl << "생산지 : " << getFarm();
	}
};

int main() {
	Melon* p[5];

	string name, farm;
	int price, weight, calorie;

	for (int i = 0; i < 5; i++) {
		p[i] = NULL;
	}

	cout << "==================5가지 음식에 대한 정보를 입력하세요================" << endl;

	for (int i = 0; i < 5; i++) {
		cout << i + 1 << "번째 음식 이름 : ";
		cin >> name;
		cout << i + 1 << "번째 음식의 칼로리(정수만 입력) : ";
		cin >> calorie;
		cout << i + 1 << "번째 음식의 평균 가격(정수만 입력) : ";
		cin >> price;
		cout << i + 1 << "번째 음식의 평균 중량(정수만 입력) : ";
		cin >> weight;
		cout << i + 1 << "번째 음식의 원산지 : ";
		cin >> farm;

		p[i] = new Melon(calorie, price, weight, name,farm); //생성자
	}

	//칼로리가 제일 큰 음식
	int max = p[0]->getCalorie();
	int max_pos = 0;

	for (int i = 0; i < 5; i++) {
		if (max = p[i]->getCalorie()) {
			max = p[i]->getCalorie();
			max_pos = i;
		}
	}

	//5가지 음식에 대한 모든 정보 출력하여 확인
	for (int i = 0; i < 5; i++) {
		p[i]->show();
		cout << endl;
	}

	cout << endl << "칼로리가 가장 높은 음식 = " << p[max_pos]->getName() << endl;

	return 0;
}