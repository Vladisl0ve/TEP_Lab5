#include "CTreeDynamic.h"

CTreeDynamic::CTreeDynamic()
{
	pc_root = new CNodeDynamic;
}


CTreeDynamic::~CTreeDynamic()
{
	pcGetRoot()->vRemoveNode();
}
bool CTreeDynamic::bMoveSubtree(CNodeDynamic* pcParentNode, CNodeDynamic* pcNewChildNode)
{
	pcParentNode->vAddNewChild(pcNewChildNode);
	pcNewChildNode->vRemoveNode();
	pcNewChildNode->vRemoveFromParent();
	return true;
}
CNodeDynamic* CTreeDynamic::pcGetRoot()
{
	return pc_root;
}
void CTreeDynamic::vPrintTree()
{
	pc_root->vPrintAllBelow();
}
void CTreeDynamic::vPrintNice()
{
	pc_root->vPrintNicely(0);
}