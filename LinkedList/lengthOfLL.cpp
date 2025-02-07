int length(Node *head)
{
	//Write your code here
    int node=0;
    Node* temp = head;
    while(temp){
        node++;
        temp=temp->next;
    }
    return node;
}
