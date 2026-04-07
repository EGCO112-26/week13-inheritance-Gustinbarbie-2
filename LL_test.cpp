#include <iostream>
#include <string>

#include "LL.h"
#include "student.h"

int main(int argc, char* argv[])
{
    LL list;

    for (int i = 1; i + 2 < argc; i += 3) {
        int id = std::stoi(argv[i]);
        std::string name = argv[i + 1];
        double gpa = std::stod(argv[i + 2]);

        NODE* studentNode = new student(id, gpa, name);
        list.add_node(studentNode);
    }

    list.show_all();
    return 0;
}