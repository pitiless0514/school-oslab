#include <bits/stdc++.h>
#include <sys/wait.h>
int main (int argc, char * argv[]) {
  int rc = fork();
  if (rc < 0) {
    printf("the program fork error\n");
    exit(0);
  } else if (rc == 0) {
    char *myargs[3];
    myargs[0] = strdup("ls");
    myargs[1] = strdup("/");
    myargs[2] = NULL;
    execvp(myargs[0], myargs);
  } else if (rc > 0) {
    printf("hello\n");
    int wc = wait(NULL);
    printf("byebye\n");
  }
  return 0;
}
