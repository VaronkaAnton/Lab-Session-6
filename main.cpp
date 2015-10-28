#include <iostream>
#include <algorithm>
#include "complexnumbers.h"
#include "stack.h"

using namespace std;
int compare(complexnumber zone, complexnumber ztwo);

int main()
{
	int count;
	double tempRe, tempIm;
	complexnumber array [100];
	stack st;
	st.init();

	cout << "Input size of array" << endl;
	cin >> count;

	for (int i = 0; i < count; i++)
	{
		cout << "complex number " << i+1 << ": ";
		cin >> tempRe;
		cin >> tempIm;
		complexnumber tempComp(tempRe, tempIm);
		array[i] = tempComp;
		st.push(tempComp);
	}

	sort(array, array + count, compare);

	cout << "sorted array of complex numbers:" << endl;
	for (int i = 0; i < count; i++)
	{
		cout << array[i].getRe() << " " << array[i].getIm() << endl;
	}

	cout << "Popping stack: " << endl;
	for (int i = 0; i < count; i++)
	{
		complexnumber stacktop = st.pop();
		cout << stacktop.getRe() << " " << stacktop.getIm() << endl;
	}

	double tempone, temptwo, tempthree, tempfour;
	cout << "Input the first complex number" << endl;
	cin >> tempone;
	cin >> temptwo;
	cout << "Input the second complex number" << endl;
	cin >> tempthree;
	cin >> tempfour;
	complexnumber zone (tempone, temptwo);
	complexnumber ztwo (tempthree, tempfour);

	complexnumber sum, diff, prod, quot, conjugated;

	sum = sum.add(zone, ztwo);
	diff = diff.substr(zone, ztwo);
	prod = prod.mult(zone, ztwo);
	quot = quot.div(zone, ztwo);
	
	cout <<"abs (z1) = " << zone.complabs() << endl;
	cout << "conjugate (z1) = " << zone.conj().getRe() <<" + " << "(" << zone.conj().getIm() << ") i" << endl;
	cout << "abs (z2) = " << ztwo.complabs() << endl;
	cout << "conjugate (z2) = " << ztwo.conj().getRe() << " + " << "(" << ztwo.conj().getIm() << ") i" << endl;
	cout << "z1 + z2 = " << sum.getRe() << " + " << "("<< sum.getIm() << ") i" << endl;
	cout << "z1 - z2 = " << diff.getRe() << " + " << "(" << diff.getIm() << ") i" << endl;
	cout << "z1 * z2 = " << prod.getRe() << " + " << "(" << prod.getIm() << ") i" << endl;
	cout << "z1 / z2 = " << quot.getRe() << " + " << "(" << quot.getIm() << ") i" << endl;

	
}

int compare(complexnumber zone, complexnumber ztwo)
{
	return zone.complabs() < ztwo.complabs();
}