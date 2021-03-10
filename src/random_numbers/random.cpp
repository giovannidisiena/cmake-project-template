//
// PH30110 – Computational Astrophysics.
//

#include "random.h"

long long random_number(long long seed, int a, int c, long long m) {
  return (a * seed + c) % m;
}
