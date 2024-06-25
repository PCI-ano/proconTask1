#include<stdio.h>

/*
西暦年を引数とし、うるう年であれば1、そうでなければ0を返す
うるう年判定関数checkLeapYearを作りましょう
*/
//引　数:int year	:西暦年
//戻り値:int		:うるう年であれば1,そうでなければ0
int checkLeapYear(int year) {
	
}

int main(void) {
	//西暦年をキーボードから読み込む
	int now_year;
	printf("西暦年を入力：");
	scanf_s("%d", &now_year);

	//うるう年チェック…うるう年判定関数を呼び出す
	if (checkLeapYear(now_year) == 1) {
		printf("うるう年だよ～");
	}
	else if (checkLeapYear(now_year) == 0) {
		printf("うるう年じゃないよ～");
	}
}