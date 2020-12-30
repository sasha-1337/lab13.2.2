#include <stdio.h>
#include <conio.h>
#include "var.h"
#include "mul.h"

#define m(x,y) (x)*(y)
#define Print(w) printf("result = %d\n",(int)w)

using namespace Var;

void MUL::mul() {
	c = m(a, b);
	Print(c);
}