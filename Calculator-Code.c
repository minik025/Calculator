#include <stdio.h>
#include <stdlib.h>
int main() {
	// D�RT ��LEML� HESAP MAK�NE PROGRAMI.
	/*Say� ve Sonu� de�i�kenini tan�ml�yor*/
	float sayi1,sayi2,sonuc;
	char islem;
    /*Klavyeden girilen bir sayi al�r ve say�y� degi�kene ekler*/
	printf("Birinci sayiyi giriniz: ");
	scanf("%f",&sayi1);
    /*Yapmak istenilen sembol� okutur*/
	printf("Yapmak istediginiz islemi giriniz(+,-,*,/): ");
	scanf(" %c", &islem);
	printf("ikinci sayiyi giriniz: ");
	scanf("%f",&sayi2);
	/*E�er kullan�c� +,-,/,* istiyorsa sembol girer*/
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
            printf("Hata: S�f�ra bolme yapilamaz!\n");
        }
    } 
    else {
        printf("Gecersiz islem girdiniz.\n");
    }
	
	
	return 0;
}
