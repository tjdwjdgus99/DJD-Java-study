#include <string>

using namespace std;

class Player {
	//�������
	string name;
	string word;
public:
	//����Լ�
	void setName(string n) {
		name = n;
	}
	string getName() {
		return name;
	}
	string sayWord();
	bool success(string lastWord);
};
