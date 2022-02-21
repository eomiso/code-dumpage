#define MAXLINE 1024
#include <stdio.h>
#include <cstdlib>

int main(void) {
    int size;
    scanf("%d", &size);
    char ins[MAXLINE];
    
    int sum = 0;
    scanf("%s", ins);
    int i = 0;
    while (ins[i] != '\0')
    {
      sum += (int) ins[i++] - ('0');
    }
    printf("%d\n", sum);
}
