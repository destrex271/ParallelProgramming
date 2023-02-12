#include <omp.h>
#include <stdio.h>

int main(){
  #pragma omp parallel
  {
    int numThreads = omp_get_num_threads(); // Gets number of threads
    int threadId = omp_get_thread_num();
    // Both present in stack of each thread
    // Each thread has its own copy of numThreads and ThreadId
    printf("Hello from thread %d of %d\n", threadId, numThreads);
  }
  return 0;
}
