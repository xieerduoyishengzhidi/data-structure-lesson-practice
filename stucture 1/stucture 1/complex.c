#include"complex.h"
void plus( cmp a,  cmp b) {
	 cmp c;
	c.real = a.real + b.real;
	c.im = a.im + b.im;
	printf("%f+%fi", c.real, c.im);
}