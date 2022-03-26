#include <stdio.h>
#include <stdlib.h>

int main() {
	int sayi1,sayi2,toplam,fark,carp,bol;
	
	sayi1=25;
	sayi2=5;
	
	toplam=sayi1+sayi2;
	fark=sayi1-sayi2;
	carp=sayi1*sayi2;
	bol=sayi1/sayi2;
	
	printf("Toplam: %d\n",toplam);
	printf("Fark: %d\n",fark);
	printf("Carpim: %d\n",carp);
	printf("Bolum: %d\n",bol);
	
	return 0;
}
