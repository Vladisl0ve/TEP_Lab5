#pragma once
#include <iostream>
#include <string>
#include <vector>

using namespace std;

class  CNodeStatic {

public:
	CNodeStatic();
	~CNodeStatic();
	void operator=(const CNodeStatic& node);

	bool operator==(const CNodeStatic& node);
	void vRemoveNode(CNodeStatic* node);
	void vRemoveFromParent(CNodeStatic* node);
	void vRemoveFromParent();
	void vRemoveNode();

	void  vSetValue(int  iNewVal);

	int iGetChildrenNumber();
	void vAddNewChild();
	void vAddNewChild(CNodeStatic cnd);
	CNodeStatic* pcGetChild(int  iChildOffset);
	void  vPrint();
	void  vPrintAllBelow();
	void vPrintModify();
	void vPrintParent();
	void  vPrintUp();

	void vFindGreater(int iVal);

private:
	vector <CNodeStatic> v_children;
	CNodeStatic* pc_parent_node;
	int  i_val;
	const int iDEFAULT_VAL = 0;

};