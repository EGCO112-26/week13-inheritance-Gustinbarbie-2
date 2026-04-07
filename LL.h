#ifndef LL_H
#define LL_H

#include "NODE.h"

class LL {
private:
    NODE* head;
    int size;

public:
    LL();
    ~LL();

    void add_node(NODE* node);
    void show_all() const;
};

#endif