#include <iostream>
#include "software.h"
#include "opsis.h"
#include "graphiceditor.h"
#include "develenvir.h"


using namespace std;

int main()
{
    setlocale(LC_ALL, "Russian");

    opsis a;
    a.setname("po");
    a.setauthor("author");
    a.settype("wind");
    a.setarchitecture("arh");
    a.print();

    graphiceditor b;
    b.setname("sd");
    b.setauthor("no");
    b.settype("window");
    b.setopersis("pro");
    b.print();

    develenvir c;
    c.setname("fg");
    c.setauthor("ner");
    c.settype("wdfg");
    c.setprlan("kz");
    c.print();


    return 0;
}
