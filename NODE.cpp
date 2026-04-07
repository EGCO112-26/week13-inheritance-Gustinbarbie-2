#include "NODE.h"

#include <iostream>

NODE::NODE(int x)
    : id(x), next(nullptr)
{
    std::cout << "adding " << x << std::endl;
}

NODE::~NODE()
{
    std::cout << "Node " << id << " is being deleted" << std::endl;
}

NODE* NODE::move_next() const
{
    return next;
}

void NODE::show_node() const
{
    std::cout << "Node data:" << id << std::endl;
}

void NODE::insert(NODE* node)
{
    node->next = this;
}
