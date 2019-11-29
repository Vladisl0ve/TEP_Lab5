#include "CTreeDynamic.h"

CTreeDynamic::CTreeDynamic()
{
	pc_root = new CNodeDynamic;
}


CTreeDynamic::~CTreeDynamic()
{
	delete pcGetRoot();
}
bool CTreeDynamic::bMoveSubtree(CNodeDynamic* pcParentNode, CNodeDynamic* pcNewChildNode)
{
	pcParentNode->vAddNewChild(pcNewChildNode);
	pcNewChildNode->bRemoveNode();
	return true;
}
CNodeDynamic* CTreeDynamic::pcGetRoot()
{
	return pc_root;
}
void CTreeDynamic::vPrintTree()
{
	pc_root->vPrintTreeScheme(0);
}