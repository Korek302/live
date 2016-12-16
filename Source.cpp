#include "Header.h"
#include <iostream>

using namespace std;

template<class X, class Y>
Para<X, Y>::Para(X val0, Y val1)
{
	value0 = new X();
	*value0 = val0;
	value1 = val1;
}

template<class X, class Y>
Para<X, Y>::Para(const Para<X, Y> &pcOther)
{
	value0 = new X;
	*value0 = pcOther.value0;
	value1 = pcOther.value1;
}

template<class X, class Y>
Para<X, Y>::~Para() 
{ 
	delete value0; 
}

template<class X, class Y>
void Para<X, Y>::operator=(const Para<X, Y> &pcOther)
{
	*value0 = pcOther.getVal0();
	value1 = pcOther.getVal1();
}

template<class X, class Y>
X Para<X, Y>::getVal0()
{
	return *value0;
}

template<class X, class Y>
Y Para<X, Y>::getVal1()
{
	return value1;
}

template<class X, class Y>
void Para<X, Y>::setVal0(X val)
{
	*value0 = val;
}

template<class X, class Y>
void Para<X, Y>::setVal1(Y val)
{
	value1 = val;
}

Para<float, int> szukajMin(float tab[], int size)
{
	int index = 0;
	for (int i = 1; i < size - 1; i++)
	{
		if (tab[index] > tab[i])
			index = i;
	}
	return Para<float, int>(tab[index], index);
}

int main()
{
	const int size = 3;
	float tab[size];
	tab[0] = 2.3f;
	tab[1] = 1.2f;
	tab[2] = 6.7f;

	Para<float, int> temp = szukajMin(tab, 3);

	cout << temp.getVal0() << ", " << temp.getVal1() << endl;
	
	getchar();
	return 0;
}