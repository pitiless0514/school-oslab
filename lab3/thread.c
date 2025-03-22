#include <stdio.h>  
#include <unistd.h>  
#include <stdlib.h>  
#include <pthread.h>

#define LOOP 20

void* run (void* ptr)  
{   
  int i;  
  pthread_t tid = pthread_self();
  for (i = 0; i < LOOP; i++) {
    printf ("This is a pthread, its tid: %ld\n", tid);
    sleep(1);  
  }
}  
  
int main(void)  
{  
  pthread_t id;  
  int i, res;
  for (i=0; i<3; i++) { 
  res = pthread_create(&id, NULL, run, NULL); 
  if(res != 0)  
    {  
      printf ("Create pthread error!\n");  
      exit (1);  
    }  
  pthread_detach(id);
  }
  for (i = 0; i < LOOP; i++) {  
    printf ("This is the main process\n"); 
    sleep(1);
  }
  return 0;  
}  
