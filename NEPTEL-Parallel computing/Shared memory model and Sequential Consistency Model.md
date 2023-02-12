**Note** : Compilers reorganise he code according to the utility. May lead to deadlock or starvation of threads.
## Need?
In the absence of these models the compiler needs to be restricted in terms of storing variables to registers and many other operations that were implemented to improve the performance of the system. Therefore in case of shared memory it is upto the programmer to manage these models in order to prevent data inconsistency. And that is why we sequential consistency model which defines how the memory will be shown/represented to the programmer to eliminate the gaps between what the programmer expects and how the system behaves. Sequential consistency model also ensures optimization techniques to improve performance.
## Sequential Consistency Model
A multiprocessor system is seq consistent if the result of any execution is the same as if the operations of all the processors were executed in somesequential order and the operations of each individual processor appear in this sequence in the order specified by its program.
**We cannot build good performing systems with sequentially consistency models as it takes away most of the optimization techniques like caching in registers to prevent freq access to memory etc.**
### Petersons model types algos
1. Deschins Algorithm to oenable parallel programming