#include "LL.h"

LL::LL()
    : head(nullptr), size(0)
{
}

LL::~LL()
{
    NODE* current = head;
    while (current != nullptr) {
        NODE* next = current->move_next();
        delete current;
        current = next;
    }
}

void LL::show_all() const
{
    NODE* current = head;
    while (current != nullptr) {
        current->show_node();
        current = current->move_next();
    }
}

void LL::add_node(NODE* node)
{
    if (head != nullptr) {
        head->insert(node);
    }
    head = node;
    ++size;
}
