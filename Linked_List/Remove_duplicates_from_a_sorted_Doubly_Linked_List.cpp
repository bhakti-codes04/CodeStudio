/**
 * Definition of doubly linked list:
 * class Node {
 * public:
 *      int data;
 *      Node *prev;
 *      Node *next;
 *      Node() {
 *          this->data = 0;
 *          this->prev = NULL;
 *          this->next = NULL;
 *      }
 *      Node(int data) {
 *          this->data = data;
 *          this->prev = NULL;
 *          this->next = NULL;
 *      }
 *      Node (int data, Node *next, Node *prev) {
 *          this->data = data;
 *          this->prev = prev;
 *          this->next = next;
 *      }
 * };
 *
 *************************************************************************/

Node * removeDuplicates(Node *head)
{
    // FOR EMPTY LINKED LIST 
    if(head == NULL)
        return NULL;

    // FOR NON_EMPTY LL 

    Node*curr = head;

    while(curr != NULL){
        if((curr->next != NULL ) && (curr->data == curr->next->data)){
            Node*next_to_next = curr->next->next;
            Node*node_to_delete = curr->next;
            delete(node_to_delete);
            curr->next = next_to_next;
        }
        else{ // if not equal 
        curr = curr->next;

        }
    }
    return head;
}

