#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	char ch;
	int i;
	float f;
	double d;
	double result;

	printf("Nhap ch: ");
	scanf("%c", &ch);
		fflush(stdin);
	printf("%d\n", ch);
	
	printf("Nhap i: ");
	scanf("%d", &i);
	
	printf("Nhap f: ");
	scanf("%f", &f);
	
	printf("Nhap d: ");
	scanf("%lf", &d);
//	printf("test");
//	printf("d = %lf", d);
//    result=(ch/i) + (f*d) - (f+i);
    result = (ch/i) + (f*d) - (f+i);
	printf("Ket qua: %.2lf", result);
	
	return 0;
}
