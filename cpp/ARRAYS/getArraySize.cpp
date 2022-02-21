#include <stdio.h>
#include <cstdlib>
#include <climits>

int main(void) {
  int size;
  scanf("%d", &size);

  int arr[size];

  int min = INT_MAX;
  int max = INT_MIN;
  for (int i = 0; i < size; i++) {
    scanf("%d", &arr[i]);
    if (min > arr[i])
      min = arr[i];
    if (max < arr[i])
      max = arr[i];
  }

  printf("%d %d\n", min, max);

  return 0;

}
