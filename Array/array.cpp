#include <iostream>
using namespace std;

int main() {
	/* 1���� �迭 = �Ǻ���ġ 10��
		su1 = 0 , su2 = 1. next = su1 + su2
		su1=su2,		su2= next
	*/
	int pibo[10] = { 0 };	//�ʱ�ȭ
	int su1 = 0, su2 = 1;
	pibo[0] = su1;
	pibo[1] = su2;
	int next;
	for (int i = 2; i < (sizeof(pibo) / sizeof(int)); i++) {		//�⺻ int ũ��� 4 , int pibo�� ũ��� 10 * 4
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