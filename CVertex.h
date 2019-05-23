#ifndef __CVERTEX_H__
#define __CVERTEX_H__
#include "Vertex.h"

class CVertex : public Vertex
{

public:

	//Neighbor Track for Tarjan's
	short nt;

	//---------------------------------
	// Methods

	CVertex(long id);

}