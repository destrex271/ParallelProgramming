#include <omp.h>
#include <stdio.h>

int main(){
  int numThreads;// Gets number of threads
  // numThreads = omp_get_num_threads(); // Returns 1 as only main thread is running
  // threadId as private as individual to each thread, sort of like a private copy for each thread
  // numThreads as shared as it is common for all the threads that will be executing 
  // DEfault behaviour for variables that are declared outside parallel region in openmp is shared
  // Adding a new parallel block to get number of threads and allow for long wait
  #pragma omp parallel default(shared)
  {
    int j, tid = omp_get_num_threads();
    if(tid == 0){
      for(long int i = 0; i <10000000; i++);
      numThreads = omp_get_num_threads();
    }
  }
  // Not elegant due to above overhead
  // Unecessary calls to omp_get_num_threads_
  // Unecessary fork and join calls
  #pragma omp parallel default(shared) 
  {
    int tid;
    // numThreads = omp_get_num_threads();
    tid = omp_get_thread_num();
    // Long wait implemented below
    // for(long int i = 0; i < 10000000000; i++);
    // all printed 11 as 11 was the last thread that executed and it changed the value of threadId
    // in that wait time period.
    // Both present in stack of each thread
    // Each thread has its own copy of numThreads and ThreadId
    printf("Hello from thread %d of %d\n", tid, numThreads);
  }
  return 0;
}
