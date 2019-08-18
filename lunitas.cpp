/***
 * LUnitas
 * 
 * Class of a lingustic unit having string representation and properities.
 * 
 * @author: Zbigniew Szczepański
 * 
 */
#include <string>

using namespace std;

class LUnitas
{
	string *lunit;
	LProps lprops;
	
public:	
	LUnit(string*);
	~LUnit();
}