#ifndef CNODESTATIC_H
#define CNODESTATIC_H

#include <iostream>
#include <string>
#include <vector>

using namespace std;

class  CNodeStatic {

public:
	CNodeStatic()
	{
		i_val = 0;
		pc_parent_node = NULL;
	};
	~CNodeStatic();

	void vRemoveNode(CNodeStatic* node);
	void vRemoveNode();

	void  vSetValue(int  iNewVal)
	{
		i_val = iNewVal;
	};

	int  iGetChildrenNumber()
	{
		return(v_children.size());
	};
	void  vAddNewChild();
	void vAddNewChild(CNodeStatic cnd);
	CNodeStatic  *pcGetChild(int  iChildOffset);
	void  vPrint() { cout << " " << i_val; };
	void  vPrintAllBelow();
	void  vPrintUp();

private:

	vector <CNodeStatic> v_children;
	CNodeStatic  *pc_parent_node;
	int  i_val;

};//class  CNodeStatic 

#endif