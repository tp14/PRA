#ifndef _avl_node_h
#define _avl_node_h

typedef struct avl_node avl_node;
struct avl_node {
    avl_node* right;
    avl_node* left;
    int key;
    int node_height;
    unsigned count;
};

#endif
