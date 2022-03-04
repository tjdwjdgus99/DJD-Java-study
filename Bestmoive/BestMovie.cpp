#include <iostream>
#include <string>
//4편의 영화 제목과 평점을 입력받아 최악의 영화와 최고의 영화 제목 출력하는 프로그램
using namespace std

class Moive {

};

int main(){
	Movie mv[4]; //4편의 영화 제목과 평점을 입력 받기 위한 객체 배열
	
	cout << "인상깊게 본 4편의 영화 제목과 평점을 입력하세요" << '\n';

	for (int i = 0; i < 4; i++) {
		cout << i + 1 << "번째 영화 제목 입력>>";
		cin >> mv[i].title;
		cout << i + 1 << "번째 영화 평점 입력>>";
		cin >> mv[i].rate;
	}

	//최고 영화 제목과 최악에 제목 입력
	Movie m;
	m.BestMoive(mv);
	m.WorstMovie(mv);

	system("pause");
	return 0;
}