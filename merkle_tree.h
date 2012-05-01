
typedef int (*Hash_Function) (unsigned char *, unsigned int, unsigned char *);

typedef struct { 
    char *hash;
    char *data;
} merkle_tree_node;

typedef struct {
    size_t n;
    size_t tree_height;
    size_t hash_size;
    size_t data_block_size;
    size_t data_blocks;
    Hash_Function hash_function;
    merkle_tree_node *nodes;
} merkle_tree;

int build_tree(merkle_tree *mt, char **data);
int tree_cmp(merkle_tree *a, merkle_tree *b, size_t i);
int set_tree_data(merkle_tree *mt, size_t i, char *data);
void freeMerkleTree(merkle_tree *mt);
