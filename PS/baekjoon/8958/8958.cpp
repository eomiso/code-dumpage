#include <stdio.h>
#include <stdlib.h>

#define LEN 100

int getScore(char *str) {
  int score = 0;

  int i = 0;
  int point = 0;
  while (str[i] != 0 ){
    if (str[i] == 'O') {
      score += (++point);
    } else {
      point = 0;
    }

    i++;
  }
  return score;
}

int main(void) {
  size_t size;
  scanf("%ld", &size);
  fflush(stdin);

  char line[LEN];

  for (int i = 0; i < size; i++) {
    fgets(line, LEN, stdin);
    printf("%d\n", getScore(line));
  }

}
