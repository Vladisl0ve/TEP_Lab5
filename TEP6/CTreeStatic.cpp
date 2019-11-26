#include "CTreeStatic.h"

CTreeStatic::CTreeStatic()
{
	this->c_root = CNodeStatic();
}


CTreeStatic::~CTreeStatic()
{
}

CNodeStatic* CTreeStatic::pcGetRoot()
{
	return &c_root;
};

bool CTreeStatic::bMoveSubtree(CNodeStatic* pcParentNode, CNodeStatic* pcNewChildNode)
{
	pcParentNode->vAddNewChild(*pcNewChildNode);
	pcNewChildNode.
	return true;
}

void CTreeStatic::vPrintTree()
{
	c_root.vPrintAllBelow();
}