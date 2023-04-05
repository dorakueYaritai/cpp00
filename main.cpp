#include <iostream>
#include <stdio.h>

int value = 0;
int func( void ) { return 1; }

namespace	foo {
	int value = 2;
	int func( void ) { return 3; }
}

namespace	moo = foo;

int	main( void ){
	foo::value += 2;
	// namespace の代入は、strdup 的なのか、それとも先頭のアドレスを渡すくらいの弱めなコピーなのか
	// という実験　結果は弱めなコピー
	// printf("value %d func %d\n", value, func());
	printf("value %d func %d\n", foo::value, foo::func());
	printf("value %d func %d\n", moo::value, moo::func());
}
