typedef struct Node {
	int priority;
	int count;
	char character;
	struct Node *left, *right;
} Node;

typedef struct {
	int size, max_capacity;
	Node** array;
} PrioQueue;

typedef struct {
	char lenght;
	unsigned int code;
} Code;

char CountChars(char* filename, int* count);
void PrintChars(int* count);
PrioQueue* InitPrioQueue(void);
void Swap(int i, int j, PrioQueue* prioqueue);
void UpHeap(int i, PrioQueue* prioqueue);
void DownHeap(int i , PrioQueue* prioqueue);
char PrioQueueEmpty(PrioQueue* prioqueue);
char PrioQueueInsertNode(Node* new_node, PrioQueue* prioqueue);
Node* PrioQueueRemoveNode(PrioQueue* prioqueue);
Node* CreateNode(int count);
char CheckCount(int* count, Node* HuffmanTreeRoot);
Node* CreateHuffmanTree(int* count);
void FindBinaryCodes(Node* root, int level, unsigned int binary_code, Code* binary_codes);
