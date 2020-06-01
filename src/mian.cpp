char mojiretsu[1000];
int number = 0;

#include <stdio.h>
#include <stdlib.h>
#pragma warning(disable : 4996)

#ifdef this_is_a_great_codo
	問題：1から順番に数字を発言するのだけれども、その数字が3で割り切れれはFizzと発言して、5ならBuzz、15でならFizzBuzzと発言する
#endif

int main() {
	while(number++ < 1000) sprintf(mojiretsu, "%d", mojisuu),
	printf("%s, ", number % 3 ? number % 5 ? number % 15 ? mojiretsu : "Buzz" : "Fizz" : "FizzBuzz");
	system("PAUSE");
}
