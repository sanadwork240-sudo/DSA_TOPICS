Node* deleteAllOccurOfX(Node* head, int x) {

    Node* curr = head;

    while(curr){

        if(curr->data == x){

            Node* temp = curr;

            if(curr->prev)
                curr->prev->next = curr->next;
            else
                head = curr->next;

            if(curr->next)
                curr->next->prev = curr->prev;

            curr = curr->next;

            delete temp;
        }
        else{
            curr = curr->next;
        }
    }

    return head;
}