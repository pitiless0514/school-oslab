#include <stdio.h>
#include <stdlib.h>
#include <sys/wait.h>
#include <sys/types.h>
#include <unistd.h>
int main() {
  pid_t pid;
  if ((pid = fork()) < 0) {
    printf("error\n");
    exit(0);
  } else if (pid == 0) {
    printf("child process: %d\n", getpid());
  } else {
    printf("father process: %d\n",getpid());
  }
  return 0;
}
