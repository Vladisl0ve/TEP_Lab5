#include "CNodeStatic.h"



CNodeStatic::CNodeStatic()
{
	i_val = iDEFAULT_VAL;
	pc_parent_node = NULL;
};

CNodeStatic::~CNodeStatic()
{

}

int CNodeStatic::getOffset(CNodeStatic* node)
{
	int offset = iDEFAULT_VAL_ERROR;

	for (int i = 0; i < this->iGetChildrenNumber(); i++) {
		if (&(this->v_children.at(i)) == node) {
			offset = i;
		}
	}

	return offset;
}

bool CNodeStatic::bRemoveNode(CNodeStatic* node)
{
	int offset = node->pc_parent_node->getOffset(node);
	if (offset == iDEFAULT_VAL_ERROR|| node == nullptr)
		return false;

	node->pc_parent_node->v_children.erase(node->pc_parent_node->v_children.begin() + offset);
	node->pc_parent_node = NULL;
	return true;
}
bool CNodeStatic::bRemoveNode()
{
	return bRemoveNode(this);
}

void CNodeStatic::vSetValue(int iNewVal)
{
	i_val = iNewVal;
}
CNodeStatic* CNodeStatic::getParent()
{
	return pc_parent_node;
}
;

int CNodeStatic::iGetChildrenNumber()
{
	return(v_children.size());
};

void CNodeStatic::vAddNewChild()
{
	CNodeStatic c;
	c.pc_parent_node = this;
	v_children.push_back(c);
}
void CNodeStatic::vAddNewChild(CNodeStatic cnd)
{
	CNodeStatic c = cnd;
	c.pc_parent_node = this;
	v_children.push_back(c);
}

CNodeStatic* CNodeStatic::pcGetChild(int iChildOffset)
{
	if (iChildOffset < 0) {
		cout << "Error: child's place must be greater than 0. You had: " << iChildOffset << endl;
		return NULL;
	}

	if (this->iGetChildrenNumber() != 0)
		return &(this->v_children[iChildOffset]);
	else
		return NULL;
}

void CNodeStatic::vPrint()
{
	cout << " " << i_val;
};

void CNodeStatic::vPrintAllBelow()
{
	this->vPrint();

	for (int i = 0; i < this->iGetChildrenNumber(); i++) {
		
		this->v_children[i].vPrintAllBelow();

	}
}
void CNodeStatic::vPrintUp() {
	this->vPrint();
	if (this->pc_parent_node != NULL)
		(this->pc_parent_node)->vPrintUp();
}
void CNodeStatic::vPrintTreeScheme(int iSpace)
{
	vPrint();
	std::cout << "\n";
	for (int i = 0; i < v_children.size(); i++) {
		for (int j = 0; j < iSpace; j++) {
			std::cout << "  ";
		}
		std::cout << "|-";
		v_children[i].vPrintTreeScheme(iSpace + 1);

	}
}
void CNodeStatic::vFindGreater(int iVal) {
	if (i_val > iVal)
		cout << i_val << " ";

	for (int i = 0; i < this->iGetChildrenNumber(); i++)
		this->v_children[i].vFindGreater(iVal);
}