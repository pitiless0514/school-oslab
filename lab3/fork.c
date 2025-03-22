#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>

#define LOOP 10

int main() {
    pid_t pid;
    if ((pid=fork()) < 0){
        printf("error");
    }
    else if(pid == 0){
        for(int i=0;i<LOOP;i++){
          puts("child");
	  sleep(1);
      }
    }
    else{
          for(int i=0;i<LOOP;i++){
          puts("parent");
	  sleep(1);
      }
    }
    return 0;
}

