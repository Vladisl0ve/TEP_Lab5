#pragma once
#include "CNodeDynamic.h"
using namespace std;
class CTreeDynamic
{
public:
	CTreeDynamic();
	~CTreeDynamic();

	bool bMoveSubtree(CNodeDynamic* pcParentNode, CNodeDynamic* pcNewChildNode);
	CNodeDynamic* pcGetRoot();
	void vPrintTree();
	void vPrintNice();
private:
	CNodeDynamic* pc_root;
};