#include "Player.h"
#include <iostream>
#include <string>

using namespace std;
/*
string sayWord();
bool success(string lastWord);
};
*/

string Player::sayWord() {		//������ >> ���찳
	cout << name << " >> ";	//������ >> ������
	cin >> word;
	return word;
}

bool Player::success(string lastWord) {
	int lastindex = lastWord.length() - 2; //�ܾ��� ������ ������ �ε���

	//�����ڰ� ���� ù���ڿ� ��������� ���� ������ ���ڰ� ��ġ�ϴ��� ��
	if (lastWord.at(lastindex) == word.at(0) && lastWord.at(lastindex + 1) == word.at(1)) {
		return true;
	}
	else {
		return false;
	}
}