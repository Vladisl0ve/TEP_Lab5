#include "CNodeDynamic.h"

CNodeDynamic::CNodeDynamic()
{
	i_val = iDEFAULT_VAL;
	pc_parent_node = NULL;
}

CNodeDynamic::~CNodeDynamic()
{
	for (int i = 0; i < iGetChildrenNumber(); i++)
	{
		delete v_children.at(i);
	}
}
int CNodeDynamic::getOffset(CNodeDynamic* node)
{
	int offset = -1;

	for (int i = 0; i < iGetChildrenNumber(); i++)
	{
		if (v_children.at(i) == node) {
			offset = i;
		}
	}
	return offset;
}
bool CNodeDynamic::bRemoveNode(CNodeDynamic* node)
{
	int offset = node->pc_parent_node->getOffset(node);
	if (offset == -1 || node == nullptr)
		return false;

	node->pc_parent_node->v_children.erase(node->pc_parent_node->v_children.begin() + offset);
	return true;
}
bool CNodeDynamic::bRemoveNode()
{
	return bRemoveNode(this);
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
void CNodeDynamic::vPrintNicely(int count)
{

	this->vPrint();
	for (int i = 0; i < this->iGetChildrenNumber(); i++) {
		cout << endl;
		for (int i = 0; i < count; i++) {
			cout << "   ";
		}
		cout << "|---";
		count++;
		this->v_children[i]->vPrintNicely(count);
	}


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