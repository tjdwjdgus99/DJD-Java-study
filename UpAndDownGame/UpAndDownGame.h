#pragma once
// ����> static ����θ� �����Ͽ� UpAndDownGame Ŭ������ �ۼ�
class UpAndDownGame {
	// �������
	static int answer;		// ����
	static int top;			// ��ȿ ������ �ּҼ��� : 0
	static int bottom;		// ��ȿ ������ �ִ���� : 99

	// ����Լ�
private:
	static void init();		// ������ ���� ���� �߻��ϴ� �Լ�
	static void msg();		// ������ bottom ~ top ���̿� �ִٴ� �޽��� ���

public:
	static bool check(int a);	// �����̶�� true�� ��ȯ, �׷��������� false�� ��ȯ
	static void run();		// �̸����� ��ü�迭 �ʱ�ȭ - ������� - msg��� - �������� �Ǵ�
};