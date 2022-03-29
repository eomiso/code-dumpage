#include <stdio.h>
#include <unistd.h>
#define BUF_SIZE 30
#define READ  0
#define WRITE 1

int main (int argc, char *argv[])
{
  int fds1[2], fds2[2];
  char str1[] = "Who are you?";
  char str2[] = "Thank you for your message";

  char buf[BUF_SIZE];

  pid_t pid;

  pipe(fds1), pipe(fds2);
  pid = fork();

  if (pid == 0)
  {
    write(fds1[WRITE], str1, sizeof(str1));
    read(fds2[READ], buf, BUF_SIZE);
    printf("Child proc output: %s \n", buf);
  }
  else 
  {
    read(fds1[READ], buf, BUF_SIZE);
    printf("Parent proc output: %s \n", buf);
    write(fds2[WRITE], str2, sizeof(str2));
    sleep(3);
  }
  return 0;
}
