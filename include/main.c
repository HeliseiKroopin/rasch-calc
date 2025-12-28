#include <stdio.h>
#include "main.h"
/*

	biz rasch modelini hisoblashimiz uchun birinchi o'rinda
	foydalanuvchidan 0-10 testgacha tog'ri chiqgan testlarini sonini olamiz
	keyin esa 10-20, 20-30 va 30-45 gacha bo'lgan testlarni javoblarini sonini qabul qilamiz
	va birinchi o'ntalikni 1.5 ga ko'paytiramiz chunki bu oson
	keyingi o'ntalik o'rtacha 2 ga ko'paytiramiz
	keyingi o'ntalik qiyinroq 2.5 ga ko'paytiramiz
	keyingi 15 talik esa yozmaligi sababli aniq qiyin va uni 3 ga ko'paytiramiz

	biz ko'paytirayotgan 1.5, 2, 2.5, 3 sonlarimiz bu shunchaki o'rtacha ball hisobi 
	yani o'rtacha ball ko'satkichi.

	endi sizga o'rtachani tushintirsam, deylik birinchi o'ntalikdan testni yechgan shaxs
	6 ta yechgan yani 6/10

		1. 1.5 berildi
		2. 1.6 berildi
		3. 1.3 berildi
		4. 1.1 berildi
		5. 1.8 berildi
		6. 1.4 berildi

	endi qo'shib chiqamiz, 1.5 + 1.6 + 1.3 + 1.1 + 1.8 + 1.4 = 8.76
	birinchi o'ntalikdan olingan ball = 8.76 endi buni 6 ga bo'lsak 1.45 chiqmoqda
	yani bizni 1.5 ni deb o'rtacha ball deb hisoblashimiz uchun asos bor! 

	xo'sh endi biz har bir 10(15) talikdan chiqgan testlar uchun o'z o'rtacha ballarni berib chiqmiz
*/

void input(int result[5]) {
	system("clear");
	printf("1-10 testgacha bo'lgan tog'ri javoblar sonini kiriting: ");
	scanf("%d", &result[0]);
	system("clear");
	printf("10-20 testgacha bo'lgan tog'ri javoblar sonini kiriting: ");
	scanf("%d", &result[1]);
	system("clear");
	printf("20-30 testgacha bo'lgan tog'ri javoblar sonini kiriting: ");
	scanf("%d", &result[2]);
	system("clear");
	printf("30-45 testgacha bo'lgan tog'ri javoblar sonini kiriting: ");
	scanf("%d", &result[3]);
}

float calculate(int result[5]) {
	int to10 = result[0] * TO10, to20=result[1] * TO20;
	int to30 = result[2] * TO30, to45 = result[3] * TO45;
	int all=to10+to20+to30+to45;
	return all;
}

int main() {	
	int result[5];
	input(result);	
	system("clear");
	printf(" ==============================\n");
	printf("[ = = = = = = = = = = = = = =  \n");
	printf("[ Siz %.2f ball to'plagansiz!  \n", calculate(result));
	printf("[ = = = = = = = = = = = = = =  \n");
	printf(" ==============================\n\n");
}
