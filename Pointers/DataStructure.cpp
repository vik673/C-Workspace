// Build dynamic data structor like list, tree and graph

struct Node{
 int data;
 Node* next;
};

Node* head = new Node();
head->data = 10;
head->next = nullptr;