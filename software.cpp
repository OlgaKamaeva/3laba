#include <iostream>
#include "software.h"
using namespace std;

software::software()
{
name = "po";
author= "author";
type = "wind";
}
software::software(string name, string author, string type):software()
{
setname(name);
setauthor(author);
settype(type);
}
software::software(const software &a)
{
this-> name = a.name;
this-> author= a.author;
this-> type = a.type;
}
void software::setname(string sname)
{
this->name=sname;
}
void software::setauthor(string sauthor)
{
this->author=sauthor;
}
void software::settype(string stype)
{
this->type=stype;
}
string software::getname() const
{
return name;
}
string software::getauthor() const
{
return author;
}
string software::gettype() const
{
return type;
}
void software::operator=(software &k)
{
setname(k.name);
setauthor(k.author);
settype(k.type);
}
