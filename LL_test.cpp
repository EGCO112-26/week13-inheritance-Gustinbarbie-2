#include <iostream>
#include<cstdlib>
//#include "NODE.h"
using namespace std;

#include "LL.h"
#include "student.h"
int main(int argc, char *argv[])
{   LL A;
   for(int i=1;i+2<argc;i+=3)
   {
    int id = atoi(argv[i]);
    string name=argv[i+1];
    float gpa = atof(argv[i+1]);

    NODE* t = new student(id, gpa, name);
    A.add_node(t);
   }
   A.show_all();

    return 0;
}