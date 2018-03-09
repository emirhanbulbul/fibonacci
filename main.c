#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int ilksayi=1;
	int ikincisayi=1;
	int sayac,sayaclimit;
	printf("Sana kac satir lazim ? ");
	scanf("%d",&sayaclimit);
printf("%d\n%d\n",ilksayi,ikincisayi);
for(sayac=0; sayac<sayaclimit-2; sayac++){
	int temp= ikincisayi;
	ikincisayi += ilksayi;
	ilksayi= temp;
	printf("%d\n",ikincisayi);

	
}
	return 0;
}
