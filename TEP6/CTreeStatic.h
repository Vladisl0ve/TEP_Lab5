#include "CNodeStatic.h"

#include <iostream>
#include <string>
#include <vector>

using namespace std;

class  CTreeStatic {

public:

	CTreeStatic();
	~CTreeStatic();

	CNodeStatic* pcGetRoot();
	bool bMoveSubtree(CNodeStatic* pcParentNode, CNodeStatic* pcNewChildNode);
	void  vPrintTree();

private:

	CNodeStatic c_root;

};

