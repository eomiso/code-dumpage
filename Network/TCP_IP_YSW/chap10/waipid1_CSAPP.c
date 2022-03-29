#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/wait.h>
#include <errno.h>
#include <string.h>

#define N 10

void unix_error(char *msg);

int main (int argc, char *argv[])
{
  int status, i;
  pid_t pid;

  /* Parent creates N children */
  for (i = 0; i < N; i++) {
    if ((pid = fork()) == 0)  /* child */
      exit(100 + i);
  }

  /* Parent reap N children in no particular order */

  while ((pid = waitpid(-1, &status, 0)) > 0) {
    if (WIFEXITED(status))
      printf("child %d terminated normally with exit status %d \n", pid, WEXITSTATUS(status));
    else
      printf("child %d terminated abnormally\n", pid);
  }

  /* The only normal termination is if there are no more children */
  if (errno == ECHILD)
    unix_error("waitpid_error");


  return 0;
}

/// @brief Print a Unix-level error message based on errno. Does not return.
/// param msg optional additional descriptive string
__attribute__((noreturn))
void unix_error(char *msg)
{
  if (msg != NULL) fprintf(stdout, "%s: ", msg);
  fprintf(stdout, "%s\n", strerror(errno));
  exit(EXIT_FAILURE);
}
