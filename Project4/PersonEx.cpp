#include<iostream>
#include<string>
using namespace std;

class Person {
public:
	//멤버 변수
	string name;
	string jumin;
	string gender;
	int age;

	Person();//기본생성자
	Person(string n, string j, string g);	//매개변수 3개를 갖는 생성자
	~Person();	//소멸자 1개

	void setName(string n);
	void setJumin(string j);
	void setGender(string g);

	string getName();	// name을 반환하는 함수
	int getAge();		// age를 반환 =>나이계산 2021 - (1900 + 주민번호 앞자리 + 1 )

};

Person::Person() {
	name = "성정현";
	jumin = "991124";
	gender = "남";
}
Person::Person(string n, string j, string g) {
	name = n;
	jumin = j;
	gender = g;
}
Person::~Person() {

}
void Person::setName(string n) {
	name = n;
}
void Person::setJumin(string j) {
	jumin = j;
}
void Person::setGender(string g) {
	gender = g;
}

string Person::getName() {
	return name;	//이름 반환
}
int Person::getAge() {
	string y = jumin.substr(0, 2);	//시작위치 , 갯수
	int year = stoi(y);		//정수형으로 변환
	age = 2021 - (1900 + year + 1);		//나이계산
	return age;		//나이반환
}

int main() {
	//객체 2개 생성
	Person me;		//기본생성자
	cout << "이름입력 >> ";
	string name;
	cin >> name;
	cout << "주민번호 입력 >> ";
	string jumin;
	cin >> jumin;
	cout << "성별 입력(남/여) >> ";
	string gender;
	cin >> gender;
	Person you(name, jumin, gender);		//매개변수 3개있는 생성자 호출

	cout << me.getName() << "님의 나이 = " << me.getAge() << "살" << endl;
	cout << you.getName() << "님의 나이 = " << you.getAge() << "살" << endl;

	return 0;
}
