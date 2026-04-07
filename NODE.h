
#ifndef NODE_H
#define NODE_H

class NODE{
      int id;
      NODE* next;
public:
        NODE(int id=001);
        void show_node();
        void insert(NODE*&);
        NODE* move_next();
        ~NODE();
      };

#endif