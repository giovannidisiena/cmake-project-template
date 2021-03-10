//
// PH30110 – Computational Astrophysics.
//

#include "random_numbers/random.h"
#include <iostream>

using namespace std;

static const char *const HEADER = "\nPH30110 Coursework – 23770.\n\n";
static const char *const USAGE = "Usage:\n\tcoursework <seed> <a> <c> <m> \n\nDescription:\n\tComputes the result of a given seed,\n\tand reports the list of random numbers.\n";

int main(int argc, const char *argv[]) {
  Generator g;

  cout << HEADER;

  // ensure the correct number of parameters are used.
  if (argc < 4) {
    cout << USAGE;
    return 1;
  }

  g.seed = atoll(argv[1]);
  g.a = atoi(argv[2]);
  g.c = atoi(argv[3]);
  g.m = atoll(argv[4]);

  int i;

  printf("a long long is this big %lu\n", sizeof(long long));
  printf("a long is this big %lu (4 under windows, 8 under linux)\n", sizeof(long));

  for (i = 0; i < 10; i++)
  {
    g.seed = random_number(g.seed, 16807, 0, 2147483647);
    printf("%ld ", (long) g.seed); 
  }

  printf("...\n");
  return 0;
}
