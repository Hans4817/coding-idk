#include <stdio.h>

int main() {
	int j = 0;
	for(int i = 1; i <= 10; i=i+2) {
		j = j + i;
	}
	printf("%d\n", j);
	return 0;
}