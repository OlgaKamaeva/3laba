#ifndef OPERATING_SYSTEM_H_INCLUDED
#define OPERATING_SYSTEM_H_INCLUDED
#include "software.h"

using namespace std;

class opsis : public software
{
protected:
string architecture;
public:
opsis();
opsis(string author,string name,string type, string architecture);
opsis(const opsis &a);
void setarchitecture (string architecture);
string getarchitecture () const;
void print() const override;
void operator= (opsis &h);
};
#endif // OPERATING_SYSTEM_H_INCLUDED
