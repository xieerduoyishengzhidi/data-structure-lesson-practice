#include <stdio.h>
int countones(int N){
	int ones = 0;
	while (N > 0) {
		ones += (1 & N);
		N >>= 1;
}
return ones;
	}

int main() {
	int a=countones(150);
	printf("%d", a);
	return 0;
}