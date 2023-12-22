#include <iostream>
using namespace std;

class Node {
public:  // Make data and next public
    int data;
    Node* next;
    
    Node(int data) {
		this -> data =data ; // to fetch data from the user 
		this -> next =NULL ; // pointing it to next NULL value
	}
};

void insertathead(Node*& head, int d1) {
    Node* temp = new Node(d1);    //new node temp with stored vakue d1
    temp -> next = head;          //temp stored vaalue d1 pointing to next to become head 
    head = temp;				// temp intialized as new head 
}

void insertatindex (Node*& head , int index , int d1 )
{
	Node* temp = head ;		//new node temp with stored value head 
	int c=1 ;					//ek count rakha 
//	if(index ==1){
//		insertathead(head, d1);  if insertion is on heead 
//		return ;
//	}
	while (c< index-1)			//index se ek pehle aana hai so index-1
	{
		temp = temp -> next;		//traversal
	}
	Node* insert = new Node(d1);			//new node for insertion with value d1 
	insert ->  next = temp -> next;				
	//inserted value ka next element jo hoga votemp ka next bn jayega 
	temp -> next = insert ;  //jo temp ka next hoga vo hojayega insert 
	 
}

void print(Node* head)      //printing the value of head initialzied before
 {
    Node* temp = head;    	//new node temp with stored value head 
    while (temp != NULL) {		//jab tk null nhi hota hai 
        cout << temp->data << " ";    // jo data store hai vo print krega 
        temp = temp->next;           // aage traverse krta rahega 
    }
    cout << endl;
}

int main() {
    Node* node1 = new Node(50);
      cout << node1->data << endl;
//    cout << node1->next << endl;

    Node* head = node1;
    insertathead(head, 12);

    print(head);
    
    insertathead(head, 2);

    print(head);
    
    insertatindex(head , 3, 56);
    print (head) ;

    return 0;
}



















