#pragma once
#include <iostream>
#include <string>
#include <vector>

using namespace std;

class  CNodeDynamic {

public:

	CNodeDynamic();
	~CNodeDynamic();

	void vRemoveNode(CNodeDynamic* node);

	void vRemoveNode();

	CNodeDynamic* pcGetChild(int  iChildOffset);

	void vSetValue(int iNewVal);
	int iGetChildrenNumber();
	void vAddNewChild();
	void vAddNewChild(CNodeDynamic* cnd);
	void vPrint();
	void vPrintAllBelow();

private:
	vector <CNodeDynamic*>  v_children;
	CNodeDynamic* pc_parent_node;
	int  i_val;
	const int iDEFAULT_VAL = 0;
};