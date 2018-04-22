#ifndef _GRAPHOBJ_H_
#define _GRAPHOBJ_H_

#include <vector>

class Graph {
public:
	ListElement* edgeListHead;
	int numNodes;
	int numEdges;

	void createFromList(ListElement*, int, int);
	vector<Node> adjacencyList(Node);
};

class Node {
public:
	float x;
	float y;
	char* Name = NULL;
};

class Edge {
public:
	Node v1, v2;
	float center_point;
};

class ListElement {
public:
	Edge edge;
	ListElement* next = NULL;
};

/* Sets up the values in the graph */
void Graph::createFromList(ListElement* edgeList, int nodes, int edges);

/* Gets the adjacency list for a given node in the graph */
vector<Node> Graph::adjacencyList(Node v);

#endif
