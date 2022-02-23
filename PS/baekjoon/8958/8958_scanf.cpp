#include <stdio.h>
#include <string.h>

#define LEN 100

int getScore(char *line) {
  int score = 0;
  int len = strlen(line);

  int point = 0;
  for (int i = 0; i < len; i++) {
    if (line[i] == 'O') {
      score += (++point);
    } else {
      point = 0;
    }
  }

  return score;
}

int main(void) {
  int size;
  scanf("%d", &size);
  
  char line[LEN];

  for (int i = 0; i < size; i++) {
    scanf("%s", line);
    printf("%d\n", getScore(line));
  }

}
