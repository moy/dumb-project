/********************************************************************
 * Copyright (C) 2014 by Verimag                                    *
 * Initial author: Matthieu Moy                                     *
 ********************************************************************/

#include "lib.h"
#include <stdio.h>
#include <assert.h>

int main() { 
	int x = sum(2, 3);
	assert(x == 5);
	say_hello();
	printf("%d\n", x);
	assert(sub(3, 2) == 1);
	assert(f() == 42);
	return 0;
}
