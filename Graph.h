#include <iostream> 
#include <list> 
#include <iterator>
using namespace std;

#ifndef __GRAPH_H__
#define __GRAPH_H__

class Graph
{

public:

	//---------------------------------
	// Variables
	Hashmap<long, Vertex> vertices;

	int numVertices;

	//---------------------------------
	// Methods

	void addVertex(Vertex v);
	virtual void removeVertex(Vertex v);



	// Returns a MetaGraph object
	// with each biconnected component
	// as its own vertex
	MetaGraph Tarjans(); 


	// Prints information
	// eg numVertices, numEdges
	virtual void print();

	Graph();
	~Graph();


}