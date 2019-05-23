#ifndef __VERTEX_H__
#define __VERTEX_H__

class Vertex
{
public:

	long id;

	//---------------------------------
	// Variables for Tarjan's
	bool visited;
	int depth;
	int lowpoint;
	Vertex parent;

	//---------------------------------
	// Methods

	virtual Vertex getNextNeighbor();
}