#ifndef SOFTWARE_H_INCLUDED
#define SOFTWARE_H_INCLUDED

using namespace std;

class software
{
protected:
string name;
string author;
string type;
public:
software();
software(string name, string author, string type);
software(const software &a);
void setname(string sname);
void setauthor(string sauthor);
void settype (string stype);
string getname()const;
string getauthor() const;
string gettype() const;
virtual void print() const = 0;
void operator= (software &k);

};

#endif // SOFTWARE_H_INCLUDED
