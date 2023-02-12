
## Types of Interconnection systems
**Static Interconnection Network:**
	Formed By links that connect up various nodes together. 
	**2-D Mesh** -> One node connected to 4 nodes at max. Number of hops = n^(1/2).  About 2n links in total.
	**2-D tourus** -> To reduce mesh diameter, connect last nodes to first nodes both horizontally and vertically. About 2n links but diameter is half. Diameter directly proportional to Latency.
	(**3D mesh and 3D tourous also exist, n^(1/3) hops such that each node has 6 neighbours and around 3n links exist.**)
	**Bisection Bandwidth** -> Maximum amount of data that can be passed through two halves of a given system. Can be found by finding the cut that results in the most minimumnumber of cuts.
	Example: In 2-D torous a cut at half allows us to pass 2(n^0.5) as the maximum amount of data that can be passed thorugh this, total links being (n^2)/4
**Dynamic Interconnection Network**
	It has links the same as static interconnection network and it also has switches, which can redirect data from any input port to any output port.
	
