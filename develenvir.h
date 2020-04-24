#ifndef DEVELENVIR_H_INCLUDED
#define DEVELENVIR_H_INCLUDED
#include "software.h"
using namespace std;

class develenvir: public software
{
protected:
    string prlan;
public:
    develenvir();
    develenvir(string author, string name, string type, string prlan);
    void setprlan(string sprlan);
    string getprlan() const;
    void print() const override;
    void operator= (develenvir &b);

};
#endif // DEVELENVIR_H_INCLUDED
