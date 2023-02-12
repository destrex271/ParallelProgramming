**omp.h** : Contains prototypes for various OpenMp functions. Open mp is for shared memory architecture.



# Threads
Same as that you studied in OS.
OMP_NUM_THREADS env variable limits the number of threads launched when running opnmp in #pragma omp parallel mode.

# Race Condition
Race condition occurs when multiple threads share a resource and manipulate the resource as and when they require leading to loss of data integrity. This is bad for parallel systems as the data generated is not the real data. This has been shown in branch `race_condition`

# Fork Join model
When the #pragma omp parallel directive is encountered the compiler replaces it with functions that can create new threads. This known as forking as multiple threads branch out from the single main process. Once these threads complete their function, a join operation is implemented that essentially leads them back to the original single main process. 