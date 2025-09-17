#include <iostream>
#include <string>
using namespace std;
    struct Node {
        char data;
        Node* pnext;
    };
int main() {
    string mystr = "abcDefg";
    Node* phead = nullptr;
    Node* pnext = nullptr;
    Node* pnew  = new Node();
    pnew->data = mystr[0];
    pnew->pnext = nullptr;

    cout << pnew->data << endl;
    cout << pnew->pnext << endl;

    phead = pnew;






    return 0;
}