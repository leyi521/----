#ifndef _HORCRUX
#define _HORCRUX
#include <string>
using namespace std;


class Horcrux
{
public:
	Horcrux(string name = 0, int id = 0);
	~Horcrux();
	string getName();
	int getId();
private:
	string name;
	int id;
};


#endif // !_HORCRUX