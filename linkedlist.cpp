#include <iostream>
using namespace std;

int main()
{
    // Define the node structure
    struct Node {
        char data;
        Node* pnext;
    };

    Node* phead = nullptr;


    Node* newNode = new Node;

    newNode->data = 'A';

    newNode->pnext = phead;

    Node* pnext = new Node;

    pnext->data = 'B';

    pnext->pnext = phead;

    phead = newNode;

    cout << "Head node data: " << phead->data << endl;

    delete phead;

    return 0;
}
