#include <iostream>
#include "WordGame.h"

using namespace std;
int main() {
	WordGame* game = new WordGame("�ƹ���");
	game -> run();
	delete game;

	return 0;
}