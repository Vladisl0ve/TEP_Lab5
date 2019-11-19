#ifndef CTreeStatic_H
#define CTreeStatic_H

#include "CNodeStatic.h"

#include <iostream>
#include <string>
#include <vector>

using namespace std;

class  CTreeStatic {

public:

	CTreeStatic();
	~CTreeStatic();

	CNodeStatic  *pcGetRoot()
	{
		return(&c_root);
	}
	bool bMoveSubtree(CNodeStatic* pcParentNode, CNodeStatic* pcNewChildNode);
	void  vPrintTree();

private:

	CNodeStatic  c_root;

};//class  CTreeStatic 

#endif

