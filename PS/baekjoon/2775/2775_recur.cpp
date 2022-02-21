#include <stdio.h>

int getResidentNum(int floor, int room) {
  if (room == 1) return 1;
  if (floor == 0) return room;

  return getResidentNum(floor-1, room) 
      + getResidentNum(floor, room-1);
}

int main(void) {
  int size, a, b;

  scanf("%d", &size);

  for (int i = 0; i < size; i++) {
    scanf("%d %d", &a, &b);

    printf("%d\n", getResidentNum(a, b));
  }
}
