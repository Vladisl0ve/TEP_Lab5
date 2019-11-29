#include "CTreeStatic.h"

CTreeStatic::CTreeStatic()
{
	CNodeStatic newRoot;
	c_root = newRoot;
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
	pcNewChildNode->bRemoveNode();
	return true;
}

void CTreeStatic::vPrintTree()
{
	c_root.vPrintTreeScheme(0);
}