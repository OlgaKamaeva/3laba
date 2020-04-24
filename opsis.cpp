#include <iostream>
#include "software.h"
#include "opsis.h"
using namespace std;

opsis::opsis():software(), architecture("arh1"){}
opsis::opsis(string name, string author, string type, string architecture ):software(name, author, type), architecture("arh2")
{
(setarchitecture(architecture));
}
opsis::opsis(const opsis &a)
{
this->architecture=a.architecture;
}
void opsis::setarchitecture(string sarchitecture)
{
this->architecture=sarchitecture;
}
string opsis::getarchitecture() const
{
return architecture;
}
void opsis::operator=(opsis &h)
{
(setarchitecture(h.architecture));
}
void opsis::print() const
{
setlocale(LC_ALL, "Russian");
cout<<"Информация о классе opsis:"<<endl;
cout<<"Название : "<<name<<endl;
cout<<"Автор : "<<author<<endl;
cout<<"Тип : "<<type<<endl;
cout<<"Архитектура : "<<architecture<<endl<<endl;
}
