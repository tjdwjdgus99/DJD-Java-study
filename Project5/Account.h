#ifndef ACCOUNT_H
#define ACCOUNT_H

#include <iostream>
#include <string>

using namespace std;

class Account {
	//��� ����
	string name;
	int id;
	int balance;
	//��� �Լ�
public:
	Account(string name, int id, int bal);
	void deposit(int money);//�Ա�  
	int withdraw(int money);//���  
	int quiry();		//�ܾ� ��ȸ  
	string getOwner();	//���� ���� �̸� ��ȯ �Լ�  
};
#endif