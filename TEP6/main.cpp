#include "CNodeStatic.h"
#include "CTreeStatic.h"
#include "CNodeDynamic.h"
#include "CTreeDynamic.h"

int main()
{
	/*CNodeStatic c_root;
	c_root.vAddNewChild();
	c_root.vAddNewChild();
	c_root.pcGetChild(0)->vSetValue(1);
	c_root.pcGetChild(1)->vSetValue(2);
	c_root.pcGetChild(0)->vAddNewChild();
	c_root.pcGetChild(0)->vAddNewChild();
	c_root.pcGetChild(0)->pcGetChild(0)->vSetValue(11);
	c_root.pcGetChild(0)->pcGetChild(1)->vSetValue(12);
	c_root.pcGetChild(1)->vAddNewChild();
	c_root.pcGetChild(1)->vAddNewChild();
	c_root.pcGetChild(1)->pcGetChild(0)->vSetValue(21);
	c_root.pcGetChild(1)->pcGetChild(1)->vSetValue(22);
	c_root.vPrintAllBelow();
	cout << endl;
	c_root.pcGetChild(0)->pcGetChild(1)->vPrintUp();
	cout << endl;
	c_root.vPrintUp();
	cout << endl;
	CTreeStatic ctreestatic1;
	ctreestatic1.pcGetRoot()->vAddNewChild();
	ctreestatic1.pcGetRoot()->vAddNewChild();
	ctreestatic1.vPrintTree();
	cout << "####" << endl;
	CTreeStatic ctreestatic2;
	ctreestatic2.pcGetRoot()->vAddNewChild(c_root);
	ctreestatic2.bMoveSubtree(ctreestatic2.pcGetRoot()->pcGetChild(0), ctreestatic1.pcGetRoot()->pcGetChild(0));
	ctreestatic2.vPrintTree();

	cout << endl;*/

	///////////////////////////////////////////////////////////////
	/*CNodeDynamic CNodeDynamic;
	CNodeDynamic.vAddNewChild();
	CNodeDynamic.vAddNewChild();
	CNodeDynamic.pcGetChild(0)->vSetValue(1);
	CNodeDynamic.pcGetChild(1)->vSetValue(2);
	CNodeDynamic.pcGetChild(0)->vAddNewChild();
	CNodeDynamic.pcGetChild(0)->vAddNewChild();
	CNodeDynamic.pcGetChild(0)->pcGetChild(0)->vSetValue(11);
	CNodeDynamic.pcGetChild(0)->pcGetChild(1)->vSetValue(12);
	CNodeDynamic.pcGetChild(1)->vAddNewChild();
	CNodeDynamic.pcGetChild(1)->vAddNewChild();
	CNodeDynamic.pcGetChild(1)->pcGetChild(0)->vSetValue(21);
	CNodeDynamic.pcGetChild(1)->pcGetChild(1)->vSetValue(22);
	CNodeDynamic.vPrintAllBelow();*/

	//////////////////////////////////////////////////////////
	cout << endl;
	CTreeDynamic CTreeDynamic;
	CTreeDynamic.pcGetRoot()->vAddNewChild();
	CTreeDynamic.pcGetRoot()->vAddNewChild();
	CTreeDynamic.pcGetRoot()->pcGetChild(0)->vSetValue(1);
	CTreeDynamic.pcGetRoot()->pcGetChild(1)->vSetValue(2);
	CTreeDynamic.pcGetRoot()->pcGetChild(0)->vAddNewChild();
	CTreeDynamic.pcGetRoot()->pcGetChild(0)->vAddNewChild();
	CTreeDynamic.pcGetRoot()->pcGetChild(0)->pcGetChild(0)->vSetValue(11);
	CTreeDynamic.pcGetRoot()->pcGetChild(0)->pcGetChild(1)->vSetValue(12);
	CTreeDynamic.pcGetRoot()->pcGetChild(1)->vAddNewChild();
	CTreeDynamic.pcGetRoot()->pcGetChild(1)->vAddNewChild();
	CTreeDynamic.pcGetRoot()->pcGetChild(1)->pcGetChild(0)->vSetValue(21);
	CTreeDynamic.pcGetRoot()->pcGetChild(1)->pcGetChild(1)->vSetValue(22);
	CTreeDynamic.vPrintTree();
	system("pause");
}