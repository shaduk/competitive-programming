{"filter":false,"title":"insertendlist.cpp","tooltip":"/hackerrank/DS/insertendlist.cpp","undoManager":{"mark":22,"position":22,"stack":[[{"start":{"row":0,"column":0},"end":{"row":24,"column":0},"action":"insert","lines":["/*","  Insert Node at the end of a linked list ","  head pointer input could be NULL as well for empty list","  Node is defined as ","  struct Node","  {","     int data;","     struct Node *next;","  }","*/","Node* Insert(Node *head,int data)","{","   Node* temp = new Node();","    Node* temp2 = head;","    temp->data = data;","    temp->next = NULL;","    while(temp2->next != NULL)","        {","        temp2 = temp2->next;","    }","    temp->next = temp2->next;","    temp2->next = temp;","    return head;","}",""],"id":1}],[{"start":{"row":0,"column":0},"end":{"row":24,"column":0},"action":"remove","lines":["/*","  Insert Node at the end of a linked list ","  head pointer input could be NULL as well for empty list","  Node is defined as ","  struct Node","  {","     int data;","     struct Node *next;","  }","*/","Node* Insert(Node *head,int data)","{","   Node* temp = new Node();","    Node* temp2 = head;","    temp->data = data;","    temp->next = NULL;","    while(temp2->next != NULL)","        {","        temp2 = temp2->next;","    }","    temp->next = temp2->next;","    temp2->next = temp;","    return head;","}",""],"id":2},{"start":{"row":0,"column":0},"end":{"row":34,"column":0},"action":"insert","lines":["/*","  Insert Node at the end of a linked list ","  head pointer input could be NULL as well for empty list","  Node is defined as ","  struct Node","  {","     int data;","     struct Node *next;","  }","*/","Node* Insert(Node *head,int data)","{","    if(head == NULL)","     {","        Node *temp = head;","        Node* temp3 = new Node();","        temp3->data = data;","        temp3->next = NULL;","        temp = temp3;","        return temp;","    }","    else","    {","        Node* temp1;","        temp1 = head;","        Node* temp2 = new Node();","        temp2->data = data;","        temp2->next = NULL;","        while(temp1->next != NULL)","            temp1 = temp1->next;","        temp1->next = temp2;","            return head;","    }","}",""]}],[{"start":{"row":15,"column":8},"end":{"row":17,"column":27},"action":"remove","lines":["Node* temp3 = new Node();","        temp3->data = data;","        temp3->next = NULL;"],"id":3}],[{"start":{"row":15,"column":4},"end":{"row":15,"column":8},"action":"remove","lines":["    "],"id":4}],[{"start":{"row":15,"column":0},"end":{"row":15,"column":4},"action":"remove","lines":["    "],"id":5}],[{"start":{"row":14,"column":26},"end":{"row":15,"column":0},"action":"remove","lines":["",""],"id":6}],[{"start":{"row":13,"column":6},"end":{"row":14,"column":0},"action":"insert","lines":["",""],"id":7},{"start":{"row":14,"column":0},"end":{"row":14,"column":9},"action":"insert","lines":["         "]}],[{"start":{"row":14,"column":9},"end":{"row":15,"column":0},"action":"insert","lines":["",""],"id":8},{"start":{"row":15,"column":0},"end":{"row":15,"column":9},"action":"insert","lines":["         "]}],[{"start":{"row":15,"column":8},"end":{"row":15,"column":9},"action":"remove","lines":[" "],"id":9}],[{"start":{"row":15,"column":4},"end":{"row":15,"column":8},"action":"remove","lines":["    "],"id":10}],[{"start":{"row":15,"column":0},"end":{"row":15,"column":4},"action":"remove","lines":["    "],"id":11}],[{"start":{"row":14,"column":9},"end":{"row":15,"column":0},"action":"remove","lines":["",""],"id":12}],[{"start":{"row":14,"column":9},"end":{"row":15,"column":0},"action":"insert","lines":["",""],"id":13},{"start":{"row":15,"column":0},"end":{"row":15,"column":9},"action":"insert","lines":["         "]}],[{"start":{"row":14,"column":8},"end":{"row":16,"column":27},"action":"insert","lines":["Node* temp3 = new Node();","        temp3->data = data;","        temp3->next = NULL;"],"id":14}],[{"start":{"row":26,"column":7},"end":{"row":28,"column":27},"action":"remove","lines":[" Node* temp2 = new Node();","        temp2->data = data;","        temp2->next = NULL;"],"id":15}],[{"start":{"row":27,"column":4},"end":{"row":27,"column":8},"action":"remove","lines":["    "],"id":16}],[{"start":{"row":27,"column":0},"end":{"row":27,"column":4},"action":"remove","lines":["    "],"id":17}],[{"start":{"row":26,"column":7},"end":{"row":27,"column":0},"action":"remove","lines":["",""],"id":18}],[{"start":{"row":26,"column":7},"end":{"row":26,"column":8},"action":"insert","lines":[" "],"id":19}],[{"start":{"row":24,"column":8},"end":{"row":25,"column":0},"action":"insert","lines":["",""],"id":20},{"start":{"row":25,"column":0},"end":{"row":25,"column":8},"action":"insert","lines":["        "]}],[{"start":{"row":24,"column":8},"end":{"row":25,"column":0},"action":"insert","lines":["",""],"id":21},{"start":{"row":25,"column":0},"end":{"row":25,"column":8},"action":"insert","lines":["        "]}],[{"start":{"row":24,"column":8},"end":{"row":26,"column":27},"action":"insert","lines":[" Node* temp2 = new Node();","        temp2->data = data;","        temp2->next = NULL;"],"id":22}],[{"start":{"row":24,"column":8},"end":{"row":24,"column":9},"action":"remove","lines":[" "],"id":23}]]},"ace":{"folds":[],"scrolltop":60,"scrollleft":0,"selection":{"start":{"row":7,"column":23},"end":{"row":7,"column":23},"isBackwards":false},"options":{"guessTabSize":true,"useWrapMode":false,"wrapToView":true},"firstLineState":0},"timestamp":1459883702311,"hash":"aafe54d99cf118d107254167df670a3af4bca10d"}