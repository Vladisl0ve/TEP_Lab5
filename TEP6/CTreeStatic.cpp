#include "CTreeStatic.h"

CTreeStatic::CTreeStatic()
{
	c_root = CNodeStatic();

}


CTreeStatic::~CTreeStatic()
{
}

bool CTreeStatic::bMoveSubtree(CNodeStatic* pcParentNode, CNodeStatic* pcNewChildNode)
{
	pcParentNode->vAddNewChild(*pcNewChildNode);
	pcNewChildNode->vRemoveNode();
	return true;
}

void CTreeStatic::vPrintTree()
{
	c_root.vPrintAllBelow();
}
