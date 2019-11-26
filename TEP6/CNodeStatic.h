#pragma once
#include <iostream>
#include <string>
#include <vector>

using namespace std;

class  CNodeStatic {

public:
	CNodeStatic();
	~CNodeStatic();

	int getOffset(CNodeStatic* node);

	bool bRemoveNode(CNodeStatic* node);

	bool bRemoveNode();

	void  vSetValue(int  iNewVal);
	CNodeStatic* getParent();
	int iGetChildrenNumber();
	void vAddNewChild();
	void vAddNewChild(CNodeStatic cnd);
	CNodeStatic* pcGetChild(int  iChildOffset);
	void  vPrint();
	void  vPrintAllBelow();
	void  vPrintUp();

	void vFindGreater(int iVal);

private:
	vector <CNodeStatic> v_children;
	CNodeStatic* pc_parent_node;
	int  i_val;
	const int iDEFAULT_VAL = 0;

};