#include <string>

using namespace std;

class Player {
	//¸â¹öº¯¼ö
	string name;
	string word;
public:
	//¸â¹öÇÔ¼ö
	void setName(string n) {
		name = n;
	}
	string getName() {
		return name;
	}
	string sayWord();
	bool success(string lastWord);
};
