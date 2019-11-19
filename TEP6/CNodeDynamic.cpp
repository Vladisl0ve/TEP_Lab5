#include "CNodeDynamic.h"

CNodeDynamic::CNodeDynamic()
{
	i_val = iDEFAULT_VAL;
	pc_parent_node = NULL;
}

CNodeDynamic::~CNodeDynamic()
{
	cout << "CNodeDynamic is closed" << endl;
	for (int ii = 0; ii < v_children.size(); ii++)
	{
		delete v_children[ii];
	}
}

void CNodeDynamic::vRemoveNode(CNodeDynamic* node)
{
	for (int i = 0; i < node->iGetChildrenNumber(); i++)
	{
		node->v_children[i]->vRemoveNode(node->v_children[i]);
	}
	node->v_children.clear();
	node = nullptr;
}

void CNodeDynamic::vRemoveNode()
{
	for (int i = 0; i < iGetChildrenNumber(); i++)
	{
		v_children[i]->vRemoveNode(this->v_children[i]);
	}
	v_children.clear();
	vRemoveNode(this);
}

void CNodeDynamic::vSetValue(int iNewVal)
{
	i_val = iNewVal;
}
int CNodeDynamic::iGetChildrenNumber()
{
	return v_children.size();
}

void CNodeDynamic::vAddNewChild()
{
	CNodeDynamic* c = new CNodeDynamic;
	c->pc_parent_node = this;
	v_children.push_back(c);
}

CNodeDynamic* CNodeDynamic::pcGetChild(int iChildOffset)
{
	while (iChildOffset < 0) {
		cout << "Error: child's place must be greater than 0. You had: " << iChildOffset << ". Type a new one." << endl;
		cin >> iChildOffset;
	}

	if (this->iGetChildrenNumber() != 0)
		return (this->v_children[iChildOffset]);
	else
		return NULL;

}

void CNodeDynamic::vPrint()
{
	cout << " " << i_val;
}

void CNodeDynamic::vPrintAllBelow()
{
	this->vPrint();
	for (int i = 0; i < this->iGetChildrenNumber(); i++)
		this->v_children[i]->vPrintAllBelow();
}