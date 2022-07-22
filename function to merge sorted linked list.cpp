SinglyLinkedListNode* mergeLists(SinglyLinkedListNode* head1, SinglyLinkedListNode* head2) {
    SinglyLinkedListNode*dummyNode=new SinglyLinkedListNode(-1);
    SinglyLinkedListNode*h1;
    SinglyLinkedListNode*h2;
    SinglyLinkedListNode*h3=dummyNode;
    while(h1!=NULL && h2!=NULL){
        if(h1->data < h2->data){
            h3->next=h1;
            h1=h1->next;
        }
        else {
        h3->next=h2;
        h2=h2->next;
        }
        h3=h3->next;
    }
    while(h1!=NULL){
        h3->next=h1;
        h3=h3->next;
        
    }
    while(h2!=NULL){
        h3->next=h2;
        h3=h3->next;
    }
    return dummyNode->next;
    
}


// BY recursion;::
SinglyLinkedListNode* mergeLists(SinglyLinkedListNode* head1, SinglyLinkedListNode* head2) {
    if(head1==NULL){
        return head2;
    }
    if(head2==NULL){
        return head1;
    }
    SinglyLinkedListNode*result;
    if(head1->data<head2->data){
        result=head1;
        result->next=mergeLists(head1->next,head2);
    }
    else{
         result=head2;
        result->next=mergeLists(head1,head2->next);
    }
    return result;
}