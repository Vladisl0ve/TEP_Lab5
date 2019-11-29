#include "CNodeStatic.h"
#include "CTreeStatic.h"
#include "CNodeDynamic.h"
#include "CTreeDynamic.h"

int main()
{
	CTreeDynamic ctdFirst;
	ctdFirst.pcGetRoot()->vSetValue(1);
	ctdFirst.pcGetRoot()->vAddNewChild();
	ctdFirst.pcGetRoot()->vAddNewChild();
	ctdFirst.pcGetRoot()->pcGetChild(0)->vSetValue(2);
	ctdFirst.pcGetRoot()->pcGetChild(1)->vSetValue(3);
	ctdFirst.pcGetRoot()->pcGetChild(0)->vAddNewChild();
	ctdFirst.pcGetRoot()->pcGetChild(0)->vAddNewChild();
	ctdFirst.pcGetRoot()->pcGetChild(0)->pcGetChild(0)->vSetValue(21);
	ctdFirst.pcGetRoot()->pcGetChild(0)->pcGetChild(1)->vSetValue(22);
	ctdFirst.pcGetRoot()->pcGetChild(1)->vSetValue(3);

	CTreeDynamic ctdSecond;
	ctdSecond.pcGetRoot()->vSetValue(10);
	ctdSecond.pcGetRoot()->vAddNewChild();
	ctdSecond.pcGetRoot()->vAddNewChild();
	ctdSecond.pcGetRoot()->pcGetChild(0)->vSetValue(20);
	ctdSecond.pcGetRoot()->pcGetChild(1)->vSetValue(30);
	ctdSecond.pcGetRoot()->pcGetChild(0)->vAddNewChild();
	ctdSecond.pcGetRoot()->pcGetChild(0)->vAddNewChild();
	ctdSecond.pcGetRoot()->pcGetChild(0)->pcGetChild(0)->vSetValue(200);
	ctdSecond.pcGetRoot()->pcGetChild(0)->pcGetChild(1)->vSetValue(210);
	ctdSecond.pcGetRoot()->pcGetChild(1)->vSetValue(30);

	ctdFirst.bMoveSubtree(ctdFirst.pcGetRoot()->pcGetChild(0)->pcGetChild(0), ctdSecond.pcGetRoot()->pcGetChild(0));
	ctdFirst.vPrintTree();
	cout << endl;
	ctdSecond.vPrintTree();
	cout << endl;
	cout << "---" << endl; // ---------------------------------------------------------------------
	cout << endl;
	CTreeStatic ctsFirst;
	ctsFirst.pcGetRoot()->vSetValue(1);
	ctsFirst.pcGetRoot()->vAddNewChild();
	ctsFirst.pcGetRoot()->vAddNewChild();
	ctsFirst.pcGetRoot()->pcGetChild(0)->vSetValue(2);
	ctsFirst.pcGetRoot()->pcGetChild(1)->vSetValue(3);
	ctsFirst.pcGetRoot()->pcGetChild(0)->vAddNewChild();
	ctsFirst.pcGetRoot()->pcGetChild(0)->vAddNewChild();
	ctsFirst.pcGetRoot()->pcGetChild(0)->pcGetChild(0)->vSetValue(21);
	ctsFirst.pcGetRoot()->pcGetChild(0)->pcGetChild(1)->vSetValue(22);
	ctsFirst.pcGetRoot()->pcGetChild(1)->vSetValue(3);

	CTreeStatic ctsSecond;
	ctsSecond.pcGetRoot()->vSetValue(10);
	ctsSecond.pcGetRoot()->vAddNewChild();
	ctsSecond.pcGetRoot()->vAddNewChild();
	ctsSecond.pcGetRoot()->pcGetChild(0)->vSetValue(20);
	ctsSecond.pcGetRoot()->pcGetChild(1)->vSetValue(30);
	ctsSecond.pcGetRoot()->pcGetChild(0)->vAddNewChild();
	ctsSecond.pcGetRoot()->pcGetChild(0)->vAddNewChild();
	ctsSecond.pcGetRoot()->pcGetChild(0)->pcGetChild(0)->vSetValue(200);
	ctsSecond.pcGetRoot()->pcGetChild(0)->pcGetChild(1)->vSetValue(210);
	ctsSecond.pcGetRoot()->pcGetChild(1)->vSetValue(30);



	ctsFirst.bMoveSubtree(ctsFirst.pcGetRoot()->pcGetChild(0)->pcGetChild(0), ctsSecond.pcGetRoot()->pcGetChild(0));
	ctsFirst.vPrintTree();
	cout << endl;
	ctsSecond.vPrintTree();
	cout << "\n###" << endl;

	system("pause");
}
