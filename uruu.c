#include<stdio.h>

/*
����N�������Ƃ��A���邤�N�ł����1�A�����łȂ����0��Ԃ�
���邤�N����֐�checkLeapYear�����܂��傤
*/
//���@��:int year	:����N
//�߂�l:int		:���邤�N�ł����1,�����łȂ����0
int checkLeapYear(int year) {
	
}

int main(void) {
	//����N���L�[�{�[�h����ǂݍ���
	int now_year;
	printf("����N����́F");
	scanf_s("%d", &now_year);

	//���邤�N�`�F�b�N�c���邤�N����֐����Ăяo��
	if (checkLeapYear(now_year) == 1) {
		printf("���邤�N����`");
	}
	else if (checkLeapYear(now_year) == 0) {
		printf("���邤�N����Ȃ���`");
	}
}