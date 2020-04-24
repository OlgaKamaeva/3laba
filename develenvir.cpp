#include <iostream>
#include "develenvir.h"
#include "software.h"
using namespace std;

develenvir::develenvir():software(), prlan("eng"){}
develenvir::develenvir(string author, string name, string type, string opersis):software(name, author, type),prlan("rus")
{
    (setprlan(prlan));
}
void develenvir::setprlan(string sprlan)
{
    this->prlan=sprlan;
}
string develenvir::getprlan() const
{
    return prlan;
}
void develenvir::operator= (develenvir &i)
{
    (setprlan(i.prlan));
}
void develenvir::print() const
  {
    setlocale(LC_ALL, "Russian");
    cout<<"Информация о классе develenvir:"<<endl;
    cout<<"Название    :  "<<name<<endl;
    cout<<"Автор  :  "<<author<<endl;
    cout<<"Тип :  "<<type<<endl;
    cout<<"язык программирования :  "<<prlan<<endl<<endl;
  }
