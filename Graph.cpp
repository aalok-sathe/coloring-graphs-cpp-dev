#include "Graph.h"
using namespace std;

Graph::addVertex(Vertex v)
{
	vertices.add(pair<long, Vertex>(v.id, v))
}