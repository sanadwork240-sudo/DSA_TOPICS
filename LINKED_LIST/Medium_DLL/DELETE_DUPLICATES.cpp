Node* removeDuplicates(Node* head){

    if(head==NULL) return head;

    Node* curr = head;

    while(curr && curr->next){

        if(curr->data == curr->next->data){

            Node* temp = curr->next;

            curr->next = temp->next;

            if(temp->next)
                temp->next->prev = curr;

            delete temp;
        }
        else{

            curr = curr->next;
        }
    }

    return head;
}