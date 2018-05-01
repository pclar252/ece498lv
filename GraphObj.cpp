#include "GraphObj.h"

using namespace std;

void Graph::createFromList(ListElement* edgeList, int nodes, int edges) {
	this->edgeListHead = edgeList;
	this->numNodes = nodes;
	this->numEdges = edges

}

vector<Node> Graph::adjacencyList(Node v) {
	unsigned i;
	vector<Node> ret;
	ListElement* temp = this->edgeListHead;

	for(i = 0; i < numEdges; i++, temp = temp.next) {
		if(v == temp.v1) {
			ret.push_back(temp->v2);
			continue;
		}
		if(v == temp.v2) {
			ret.push_back(temp->v1);
			continue;
		}
	}

	return ret;
}

