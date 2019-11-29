#pragma once
#include <iostream>
#include <string>
#include <vector>

using namespace std;

class  CNodeDynamic {

public:

	CNodeDynamic();
	~CNodeDynamic();

	bool bRemoveNode(CNodeDynamic* node);
	bool bRemoveNode();

	CNodeDynamic* pcGetChild(int  iChildOffset);

	void vSetValue(int iNewVal);
	int iGetChildrenNumber();
	int getOffset(CNodeDynamic* node);
	void vAddNewChild();
	void vAddNewChild(CNodeDynamic* cnd);

	void vPrint();
	void vPrintAllBelow();
	void vPrintUp();
	void vPrintTreeScheme(int iSpace);

private:
	vector <CNodeDynamic*>  v_children;
	CNodeDynamic* pc_parent_node;
	int  i_val;
	int iDEFAULT_VAL = 0;
	int iDEFAULT_VAL_ERROR = -1;
};