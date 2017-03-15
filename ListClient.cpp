#include <iostream>
#include "List.h"

using namespace std;

int main()
{

	 List L1, L2;

	 L1.insert(14,1);
	 L1.insert(10,2);
	 L1.insert(3,3);
	 
	 cout << "Elements in L1: " << endl;
	  for (int i=1; i <= L1.size(); i++)
	 {
		 cout << L1.getAt(i) << " ";
	 }
	 
	 L2.insert(22,1);
	 L2.insert(34,2);
	 L2.remove(1);
	 
	 cout << endl <<"Elements in L2: " << endl;

	 for (int i=1; i <= L2.size(); i++)
	 {
		 cout << L2.getAt(i) << " ";
	 }
	 
	 return 0;

}
