#ifndef GRAPHICEDITOR_H_INCLUDED
#define GRAPHICEDITOR_H_INCLUDED
#include "software.h"

using namespace std;

class graphiceditor : public software
{
protected:
    string opersis;
public:
  graphiceditor();
  graphiceditor(string author,string name,string type,string opersis);
  void setopersis(string sopersis);
  string getopersis () const;
  void print() const override;
void operator= (graphiceditor &t);
};
#endif // GRAPHICEDITOR_H_INCLUDED
