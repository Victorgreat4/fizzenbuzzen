#include <stdint.h>

#define QUIET_NUMBER      0
#define FIZZ_MULTIPLE     3
#define BUZZ_MULTIPLE     5
#define FIZZBUZZ_MULTIPLE (FIZZ_MULTIPLE * BUZZ_MULTIPLE)

const char* fizzbuzz_say(int number);
