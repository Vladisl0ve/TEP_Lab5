#include "CNodeDynamic.h"

CNodeDynamic::CNodeDynamic()
{
	i_val = iDEFAULT_VAL;
	pc_parent_node = NULL;
}

CNodeDynamic::~CNodeDynamic()
{
	vRemoveNode();
}
bool CNodeDynamic::operator==(const CNodeDynamic& node)
{
	if (i_val == node.i_val && pc_parent_node == node.pc_parent_node)
		return true;
	else
		return false;
}
void CNodeDynamic::vRemoveFromParent(CNodeDynamic* node)
{
	for (int i = 0; i < node->pc_parent_node->iGetChildrenNumber(); i++)
	{
		if (node->pc_parent_node->v_children[i] == node)
		{
			node->pc_parent_node->v_children.erase(node->pc_parent_node->v_children.begin() + i);
			return;
		}
	}
}
void CNodeDynamic::vRemoveFromParent()
{
	vRemoveFromParent(this);
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
void CNodeDynamic::vAddNewChild(CNodeDynamic* cnd)
{
	CNodeDynamic* c = new CNodeDynamic;
	c->i_val = cnd->i_val;
	c->pc_parent_node = this;

	for (int i = 0; i < cnd->iGetChildrenNumber(); i++)
	{
		c->v_children.push_back(cnd->pcGetChild(i));
	}
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