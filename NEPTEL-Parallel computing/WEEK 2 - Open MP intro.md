**omp.h** : Contains prototypes for various OpenMp functions.



# Threads
Same as that you studied in OS.
OMP_NUM_THREADS env variable limits the number of threads launched when running opnmp in #pragma omp parallel mode.

# Race Condition
Race condition occurs when multiple threads share a resource and manipulate the resource as and when they require leading to loss of data integrity. This is bad for parallel systems as the data generated is not the real data. This has been shown in 