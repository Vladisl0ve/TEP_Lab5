#include "CTreeDynamic.h"


CTreeDynamic::CTreeDynamic()
{
	pc_root = new CNodeDynamic;
}


CTreeDynamic::~CTreeDynamic()
{
}
bool CTreeDynamic::bMoveSubtree(CNodeDynamic* pcParentNode, CNodeDynamic* pcNewChildNode)
{
	pcParentNode->vAddNewChild(*pcNewChildNode);
	pcNewChildNode->vRemoveNode();
	return true;
}
void CTreeDynamic::vPrintTree()
{
	pc_root->vPrintAllBelow();
}