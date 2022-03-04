#include <iostream>
#include "WordGame.h"

using namespace std;
int main() {
	WordGame* game = new WordGame("¾Æ¹öÁö");
	game -> run();
	delete game;

	return 0;
}