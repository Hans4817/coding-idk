#include <stdio.h>
int Grundwert() {
	int W = 0;
	int G = 0;
	int P = 0;
	printf("Prozentwert: ");
	scanf("%d", &W);
	printf("Prozentsatz: ");
	scanf("%d", &P);
	G=W*100/P;
	printf("%d", G);
}

int Prozentwert() {
	int W = 0;
	int G = 0;
	int P = 0;
	printf("Grundwert: ");
	scanf("%d", &G);
	printf("Prozentsatz: ");
	scanf("%d", &P);
	W=G*P/100;
	printf("%d", W);
   }

int Prozentsatzes() {
	int W = 0;
	int G = 0;
	int P = 0;
	printf("Prozentwert: ");
	scanf("%d", &W);
	printf("Grundwert: ");
	scanf("%d", &G);
	P=W*100/G;
	printf("%d", P);
}
int main() {
	int input = 0;
	printf("1. Grundwert | 2. Prozentwert | 3. Prozentsatzes ");
	scanf("%d", &input);
	
	switch (input) {
	  case 1:
	  	Grundwert();
	  	break;

	  case 2:
	  	Prozentwert();
	  	break;

	  case 3:
	  	Prozentsatzes();
	  	break;
	}

	return 0;
}