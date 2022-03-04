#ifndef ACCOUNT_H
#define ACCOUNT_H

#include <iostream>
#include <string>

using namespace std;

class Account {
	//멤버 변수
	string name;
	int id;
	int balance;
	//멤버 함수
public:
	Account(string name, int id, int bal);
	void deposit(int money);//입금  
	int withdraw(int money);//출금  
	int quiry();		//잔액 조회  
	string getOwner();	//계좌 주인 이름 반환 함수  
};
#endif