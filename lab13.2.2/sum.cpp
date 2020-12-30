#include <stdio.h>
#include <conio.h>
#include "var.h"
#include "sum.h"

#define s(x,y) (x)+(y)
#define Print(w) printf("result = %d\n",(int)w)

using namespace Var;

void SUM::sum() {
	c = s(a, b);
	Print(c);
}