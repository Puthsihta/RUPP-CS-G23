// GRAPH
#include <iostream>
#include <conio.h>
using namespace std;

// Pseudo Code for Depth First Search

void dfs(Vertex V)
{
	visit(v) = 1; // visit V node So V =1; 
	// if not visit yet So Node V = 0;
	for(each W adjacent to V)  // if V have 3 node So W have 3 node also
		// W node connect to V node call adjacent
		if(visit(W)==0) 
			dfs(W) // recursive
}

// Pseudo Code for Breadth First Search

visit(v) =1 // start from V //mean visit node V (V=1)
clearQueue(Q) // create empty Queue
Enq(Q V) // V is elements(Node), mean put V in Q
while(!EmptyQueue(Q)) // check Q empty or not (1 or 0)
{
	V=deq(Q) //get out node from Q (is V)
	for(Each W adjacent to V) // W is adjacent by V (if W=3 So for loop (Loop 3 time))
	{
		if(visit(W)==0) //
		{
			ENq(Q W)
			visit[w]=1;
		}
	}
	
}

int main()
{
	
	
	getch();
	return 0;
}