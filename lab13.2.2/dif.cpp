#include <stdio.h>
#include <conio.h>
#include "var.h"
#include "dif.h"

#define d(x,y) (x)-(y)
#define Print(w) printf("result = %d\n",(int)w)

using namespace Var;

void DIF::dif() {
	c = d(a, b);
	Print(c);
}