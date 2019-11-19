#pragma once
#include <iostream>
#include <string>
#include <vector>

using namespace std;

class  CNodeStatic {

public:
	CNodeStatic();
	~CNodeStatic();

	void vRemoveNode(CNodeStatic* node);
	void vRemoveNode();

	void  vSetValue(int  iNewVal);

	int iGetChildrenNumber();
	void vAddNewChild();
	void vAddNewChild(CNodeStatic cnd);
	CNodeStatic* pcGetChild(int  iChildOffset);
	void  vPrint();
	void  vPrintAllBelow();
	void  vPrintUp();

private:
	vector <CNodeStatic> v_children;
	CNodeStatic* pc_parent_node;
	int  i_val;
	const int iDEFAULT_VAL = 0;

};