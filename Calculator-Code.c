#include <stdio.h>
#include <stdlib.h>
int main() {
	// DÖRT ÝÞLEMLÝ HESAP MAKÝNE PROGRAMI.
	/*Sayý ve Sonuç deðiþkenini tanýmlýyor*/
	float sayi1,sayi2,sonuc;
	char islem;
    /*Klavyeden girilen bir sayi alýr ve sayýyý degiþkene ekler*/
	printf("Birinci sayiyi giriniz: ");
	scanf("%f",&sayi1);
    /*Yapmak istenilen sembolü okutur*/
	printf("Yapmak istediginiz islemi giriniz(+,-,*,/): ");
	scanf(" %c", &islem);
	printf("ikinci sayiyi giriniz: ");
	scanf("%f",&sayi2);
	/*Eðer kullanýcý +,-,/,* istiyorsa sembol girer*/
	if (islem == '+') {
        sonuc = sayi1 + sayi2;
        printf("Sonuc: %.2f\n", sonuc);      
    } 
    else if (islem == '-') {
        sonuc = sayi1 - sayi2;
        printf("Sonuc: %.2f\n", sonuc);
    }
    else if (islem == '*') {
        sonuc = sayi1 * sayi2;
        printf("Sonuc: %.2f\n", sonuc);
    }
    else if (islem == '/') {
        if (sayi2 != 0) {
            sonuc = sayi1 / sayi2;
            printf("Sonuc: %.2f\n", sonuc);
        } else {
            printf("Hata: Sýfýra bolme yapilamaz!\n");
        }
    } 
    else {
        printf("Gecersiz islem girdiniz.\n");
    }
	
	
	return 0;
}
