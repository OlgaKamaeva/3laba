#include <iostream>
#include "graphiceditor.h"
#include "software.h"

using namespace std;

graphiceditor::graphiceditor():software(), opersis("op"){}
graphiceditor::graphiceditor(string author, string name, string type, string opersis):software(name, author, type), opersis("px")
{
    (setopersis(opersis));
}
void graphiceditor::setopersis(string sopersis)
{
    this->opersis=sopersis;
}
string graphiceditor::getopersis() const
{
    return opersis;
}
void graphiceditor::operator= (graphiceditor &s)
{
    (setopersis(s.opersis));
}
void graphiceditor::print() const
  {
    setlocale(LC_ALL, "Russian");
    cout<<"���������� � ������ graphiceditor:"<<endl;
    cout<<"��������    :  "<<name<<endl;
    cout<<"�����  :  "<<author<<endl;
    cout<<"��� :  "<<type<<endl;
    cout<<"������������ �������      :  "<<opersis<<endl<<endl;
  }
