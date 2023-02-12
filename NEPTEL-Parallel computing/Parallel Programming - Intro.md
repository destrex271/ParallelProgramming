**What is  the difference between serial and parallel computing?**
**Ans.** 
Serial Computing:
	- Problem is broken into stream of instructions that are executed sequentially one after the other on a single processor.
	- One instruction executes at a time.
Parallel Computing
	- Problem is broken into parts that can be solved consurrently.
	- Each part is furthur broken into stream of instructions


# Parallel Architectures 
### Shared Memory: 
1. Memory accessible to multiple cpus.
2. Issue: Not very scalable, as they are using the same bus
3. Not very scalable
4. -> Open Mp will be used here
### Distributed Memory
1. Every cpu has its own memory unit, and communicate via a network.
2. Bottleneck shifts to network, scalable
3. -> MPI will be used here
### Hybrid
1. Different nodes with multiple cpus with their own memory and connected by a network.
2. On a node - Shared Memory; Overall - Distrbuted

# Programming models for Parallel Architecture
### Shared Memory
Global addr space visible to all task. - on shared memory arch
No direct communication.
### Message Passing
Each task only sees its own private addr space. To talk to other task messages/data is sent to the task. - on distributed memory. Uses interconnection network.
### Message Passing + Shared Memory
Each node has a pvt addr but all nodes or some nodes can have a global table to lookup - in hybrid arch.


