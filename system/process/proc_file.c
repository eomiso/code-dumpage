#include <unistd.h>
#include <fcntl.h>
#include <stdio.h>
#include <stdlib.h>

void read_bytes(int fd, int n)
{
  char c;
  while ((n == -1) || (n-- > 0)) {
    if (read(fd, &c, 1) == 1) 
      printf("[%5d] %c\n", getpid(), c);
    else
      break;
    sleep(2);
  }
}

int main (int argc, char *argv[])
{
  int fd = argc == 1 ? STDIN_FILENO : open(argv[1], O_RDONLY);
  if (fd == -1) return EXIT_FAILURE;

  read_bytes(fd, 3);
  
  pid_t pid = fork();
  if (pid == -1) return EXIT_FAILURE;

  if (pid > 0) 
    sleep(1);

  read_bytes(fd, -1);

  return 0;
}
