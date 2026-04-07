#ifndef NODE_H
#define NODE_H

class NODE {
private:
    int id;
    NODE* next;

public:
    NODE(int id = 1);
    virtual ~NODE();

    virtual void show_node() const;
    void insert(NODE* node);
    NODE* move_next() const;
};

#endif