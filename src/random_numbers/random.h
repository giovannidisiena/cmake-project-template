//
// PH30110 – Computational Astrophysics.
//

#ifndef CMAKE_RANDOM_H
#define CMAKE_RANDOM_H

struct Generator {
  long long seed;
  int a;
  int c;
  long long m;
};

long long random_number(long long seed, int a, int c, long long m);

#endif //CMAKE_RANDOM_H
