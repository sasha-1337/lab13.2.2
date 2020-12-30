#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <stdio.h>
#include <conio.h>
#include "var.h"
#include "sum.h"
#include "dif.h"
#include "mul.h"
#include "div.h"

using namespace Var;
using namespace SUM;
using namespace DIF;
using namespace MUL;
using namespace DIV;

void main() 
{
	do {
		puts("Choose operation(+, -, *, /) ");
		puts("Press F to close calculator or continue(y)\n");
		printf("\n Key: ");
		scanf("%c", &MenuItem);
		switch (MenuItem)
		{
		case '+':
			scanf("%d", &a);
			scanf("%d", &b);
			sum();
			break;
		case '-':
			scanf("%d", &a);
			scanf("%d", &b);
			dif();
			break;
		case '*':
			scanf("%d", &a);
			scanf("%d", &b);
			mul();
			break;
		case '/':
			scanf("%d", &a);
			scanf("%d", &b);
			div();
			break;
		case 'F':
			break;
		default:
			puts("\n Choose correct operation.");
		}
		MenuItem = _getch();
	} while (MenuItem != 'F');
}