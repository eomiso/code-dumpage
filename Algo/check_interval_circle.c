#include <stdio.h>
#include <stdlib.h>

/**
 * Helper function to check if a is in between b, c
 */

int in_between(int p, int low, int high) {
  if (low > high) {
    return p >= low || p <= high;
  } else {
    return p >= low && p <= high;
  }
}

/**
 * Check whether two intervals overlap
 */
int check_interval_overlap(int l1, int h1, int l2, int h2) {
  return in_between(l1, l2, h2) || in_between(h1, l2, h2);
}

int main(int argc, char *argv[]) {
  int l1 = atoi(argv[0]);
  int h1 = atoi(argv[1]);
  int l2 = atoi(argv[2]);
  int h2 = atoi(argv[3]);

  printf("%c\n", check_interval_overlap(l1, h1, l2, h2) ? 'T' : 'F');
}
