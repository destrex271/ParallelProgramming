A single Processor has
1. Memory
2. Data Path
3. Processor

### Features of modern day processors
1. **Pipelining**:  Dividing an instruction into stages such that each stage is executed in one cycle.
		Register - CPU memory
		Requirement - Hardware for each stage
2. **SuperPipelining (SuperScalar execution)**: If instructions are not co dependent, they are executed parallely instead of being executed concurrently.
		Requirement: Multiple logical units -> More hardware
		Issues
		 - Data dependency
		 - Branching
		 - Memory Latency
		Out of Order Issue - Issuing instruction in dfi order
3. **VLIW(Very long Instruction words)**: To handle multiple instructions and allow for parallel computing
	Hardware becomes complex in superpipelining
	- Offload to compiler: Instruction words consisting of multiple instructions.
	 **vs Superpipelining**:
	 1. Super pipelining has more complex circuit while in vliw decisions made by compiler therefore simpler hardware
	 2. Superpipelining is real time therefore limited while vliw is offline so limitations of superpipelining can be removed, although it makes the compiling process really slow.
	 3. Vliw has no view of dynamic state as it pre processes every thing, while since superpipelining is more much better as it is realtime.

4. **Memory Latency**: Time taken from giving the address to retrieving the data. Performance depends on ability to feed data to processor. 
		Number of operations in time - unit is FLOPS-Floating point operations per second.

5. **Cache and Temporal Locality**:  Latency to main memory is of order of 100ns. Allows for faster data access.
	 - Located near processor, for fast retrieval to avoid pinging the main memory again and again
6. **Cache, Memory Bandwidth and spatial locality**: 
	1. **Memory Bandwidth**