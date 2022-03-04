#include <iostream>

using namespace std;



class Color {

	int red, blue, green;

public:
	Color() { ; }
	Color(int r, int g, int b) { red = r; green = g; blue = b; }

	void show() {

		cout << red << " " << green << " " << blue << endl;

	}

	friend Color operator+ (Color r, Color g);
	friend bool operator== (Color r, Color g);

};



bool operator== (Color r, Color g) {
	if (r.red == g.red && r.blue == g.blue)
		return true;
	return false;
}




int main() {

	Color red(255, 0, 0), blue(0, 0, 255), b;

	b = red + blue;		// ★연산자 오버로딩

	b.show();	// 255 0 255 출력하는 함수



	Color fuchsia(255, 0, 255);

	if (b == fuchsia)	// ★연산자 오버로딩

		cout << "보라색 맞음~" << endl;

	else

		cout << "보라색 아님!" << endl;



	return 0;

}