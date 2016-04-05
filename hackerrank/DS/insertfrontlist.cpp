/*
  Insert Node at the begining of a linked list
  Initially head pointer argument could be NULL for empty list
  Node is defined as 
  struct Node
  {
     int data;
     struct Node *next;
  }
return back the pointer to the head of the linked list in the below method.
*/
Node* Insert(Node *head,int data)
{
    if(head == NULL)
     {
        Node* temp3 = new Node();
        temp3->data = data;
        temp3->next = NULL; 
         
        Node *temp = head;
        temp = temp3;
        return temp;
    }
    else
    {
        Node* temp2 = new Node();
        temp2->data = data;
        temp2->next = head;
        return temp2;
    }
    
}
