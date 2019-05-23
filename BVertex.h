#ifndef __BVERTEX_H__
#define __BVERTEX_H__
#include "Vertex.h"

class BVertex : public Vertex
{

	//---------------------------------
	// Variables
	int color;
	Vector<BVertex> neighbors;

	//---------------------------------
	// Methods

	BVertex(long id);

}