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

	b = red + blue;		// �ڿ����� �����ε�

	b.show();	// 255 0 255 ����ϴ� �Լ�



	Color fuchsia(255, 0, 255);

	if (b == fuchsia)	// �ڿ����� �����ε�

		cout << "����� ����~" << endl;

	else

		cout << "����� �ƴ�!" << endl;



	return 0;

}