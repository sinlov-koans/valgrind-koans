#include <pthread.h>

pthread_mutex_t mutex; // declare a mutex
int var = 0;

void* child_fn ( void* arg ) {
  pthread_mutex_lock(&mutex);
  var++;
  pthread_mutex_unlock(&mutex);
   return NULL;
}

int main ( void ) {
   pthread_t child;
   pthread_create(&child, NULL, child_fn, NULL);
   pthread_mutex_lock(&mutex);
   var++;
   pthread_mutex_unlock(&mutex);
   pthread_join(child, NULL);
   return 0;
}