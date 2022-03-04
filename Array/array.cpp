#include <iostream>
using namespace std;

int main() {
	/* 1차원 배열 = 피보나치 10개
		su1 = 0 , su2 = 1. next = su1 + su2
		su1=su2,		su2= next
	*/
	int pibo[10] = { 0 };	//초기화
	int su1 = 0, su2 = 1;
	pibo[0] = su1;
	pibo[1] = su2;
	int next;
	for (int i = 2; i < (sizeof(pibo) / sizeof(int)); i++) {		//기본 int 크기는 4 , int pibo의 크기는 10 * 4
		next = su1 + su2;	//next = 0 + 1
		pibo[i] = next;
		su1 = su2;
		su2 = next;
	 }
	for (int i = 0; i < (sizeof(pibo) / sizeof(int)); i++) {
		cout << i << "\t";
	}
	cout << endl;
	for (int i = 0; i < (sizeof(pibo) / sizeof(int)); i++) {
		cout << pibo[i] << "\t";
	}
	cout << endl;
	return 0;
}