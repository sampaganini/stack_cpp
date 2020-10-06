/*
Dokończyć (niczego nie zmieniając, jedynie dopisując) deklarację klas CPair i CStack tak, żeby poprawnie działały w podanej funkcji main.
*/

#include <string.h>

#include <vector>
#include <ostream>

using namespace std;

class CPair
{
	private:
 int a,b;

	public:
	CPair(){};
	CPair(int aa = 0, int bb = 0): a(aa),b(bb){};
	friend ostream& operator<<(ostream& o, const CPair& p)
	{
o << "(" << p.a << "," << p.b << ")";
return o;
}
  bool operator==(const CPair & p)
{
	if(p.a == a && p.b == b)
	return true;
return false;

}
};

class EmptyStack {};

class CStack
{
};
