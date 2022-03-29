#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <signal.h>
#include <sys/wait.h>
#include <signal.h>

void interrupt_handler(int sig) {
  char c;
  puts("Do you really want to stop the process?");
  c = fgetc(stdin);
  if (c == 'Y'||c == 'y')
    kill(getpid(), SIGTERM);
  else
    return;
  
}

int main (int argc, char *argv[])
{
  struct sigaction act;
  act.sa_handler = interrupt_handler;
  sigemptyset(&act.sa_mask);
  act.sa_flags = 0;

  sigaction(SIGINT, &act, NULL);

  puts("Start of the main function");
  sleep(30);

  printf("You are back to the main function!\n");

  return 0;
}
