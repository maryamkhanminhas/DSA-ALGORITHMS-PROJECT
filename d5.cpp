#include <iostream>
#include <cstdlib>
#include <ctime>
#include <string>
#include <vector>
#include <map>
#include <list>
using namespace std;

// ---------------- Utility Functions ----------------
void clearScreen() {
#ifdef _WIN32
    system("cls");
#else
    system("clear");
#endif
}
void setBeautifulColor() {
#ifdef _WIN32
    string colors[] = {"1F","2F","3F","4F","5F","6F","9F","AF","CF","DF"};
    int index = rand() % 10;
    string command = "color " + colors[index];
    system(command.c_str());
#endif
}

// ------------------- ARRAY -------------------
const int MAX_ARRAY = 100;
string arr[MAX_ARRAY];
int n = 0;

void arrayInsert() {
    if(n>=MAX_ARRAY){cout<<"Array full!\n"; return;}
    string val; cout<<"Enter item to insert: "; cin >> ws; getline(cin,val);
    arr[n++] = val; cout<<"Inserted\n";
}
void arrayDelete() {
    if(n==0){cout<<"Array empty!\n"; return;}
    int pos; cout<<"Enter position to delete: "; cin>>pos;
    if(pos<0 || pos>=n){cout<<"Invalid position\n"; return;}
    for(int i=pos;i<n-1;i++) arr[i]=arr[i+1];
    n--; cout<<"Deleted\n";
}
void arraySearch() {
    if(n==0){cout<<"Array empty!\n"; return;}
    string key; cout<<"Search item: "; cin >> ws; getline(cin,key);
    for(int i=0;i<n;i++){if(arr[i]==key){cout<<"Found at index "<<i<<"\n"; return;}}
    cout<<"Not found\n";
}
void arrayUpdate() {
    if(n==0){cout<<"Array empty!\n"; return;}
    int pos; cout<<"Enter index to update: "; cin>>pos;
    if(pos<0 || pos>=n){cout<<"Invalid index\n"; return;}
    string val; cout<<"Enter new value: "; cin >> ws; getline(cin,val);
    arr[pos]=val; cout<<"Updated\n";
}
void arrayDisplay() {
    if(n==0){cout<<"Array empty\n"; return;}
    cout<<"Array items: ";
    for(int i=0;i<n;i++) cout<<arr[i]<<" ";
    cout<<"\n";
}

// ------------------- LINKED LIST -------------------
struct Node{ string data; Node* next; };
Node* head = nullptr;

void llInsert() {
    string val; cout<<"Enter item: "; cin >> ws; getline(cin,val);
    Node* nNode = new Node{val,nullptr};
    if(!head) head=nNode;
    else{ Node* t=head; while(t->next) t=t->next; t->next=nNode;}
    cout<<"Inserted\n";
}
void llDelete() {
    if(!head){cout<<"List empty\n"; return;}
    string val; cout<<"Enter item to delete: "; cin >> ws; getline(cin,val);
    Node *t=head,*prev=nullptr;
    while(t && t->data!=val){prev=t; t=t->next;}
    if(!t){cout<<"Not found\n"; return;}
    if(prev) prev->next=t->next; else head=t->next;
    delete t; cout<<"Deleted\n";
}
void llSearch() {
    if(!head){cout<<"List empty\n"; return;}
    string key; cout<<"Search item: "; cin >> ws; getline(cin,key);
    Node* t=head; int pos=0;
    while(t){if(t->data==key){cout<<"Found at position "<<pos<<"\n"; return;} t=t->next; pos++;}
    cout<<"Not found\n";
}
void llUpdate() {
    if(!head){cout<<"List empty\n"; return;}
    string key; cout<<"Item to update: "; cin >> ws; getline(cin,key);
    Node* t=head; 
    while(t){if(t->data==key){string val; cout<<"New value: "; cin >> ws; getline(cin,val); t->data=val; cout<<"Updated\n"; return;} t=t->next;}
    cout<<"Not found\n";
}
void llDisplay() {
    if(!head){cout<<"List empty\n"; return;}
    cout<<"Linked List: ";
    Node* t=head;
    while(t){cout<<t->data<<" "; t=t->next;}
    cout<<"\n";
}

// ------------------- STACK -------------------
const int MAX_STACK = 100;
string stackArr[MAX_STACK];
int top = -1;

void stackPush() {
    if(top>=MAX_STACK-1){cout<<"Stack Overflow\n"; return;}
    string val; cout<<"Enter item to push: "; cin >> ws; getline(cin,val);
    stackArr[++top]=val; cout<<"Pushed\n";
}
void stackPop() {
    if(top==-1){cout<<"Stack Underflow\n"; return;}
    cout<<"Popped: "<<stackArr[top--]<<"\n";
}
void stackPeek() {if(top==-1){cout<<"Empty\n";} else cout<<"Top: "<<stackArr[top]<<"\n";}
void stackDisplay() {
    if(top==-1){cout<<"Empty\n"; return;}
    cout<<"Stack: "; for(int i=top;i>=0;i--) cout<<stackArr[i]<<" "; cout<<"\n";
}

// ------------------- QUEUE -------------------
const int MAX_QUEUE = 100;
string queueArr[MAX_QUEUE];
int front=-1,rear=-1;

void queueEnqueue() {
    if(rear>=MAX_QUEUE-1){cout<<"Queue Full\n"; return;}
    string val; cout<<"Enter item: "; cin >> ws; getline(cin,val);
    if(front==-1) front=0;
    queueArr[++rear]=val; cout<<"Enqueued\n";
}
void queueDequeue() {
    if(front==-1 || front>rear){cout<<"Queue empty\n"; return;}
    cout<<"Dequeued: "<<queueArr[front++]<<"\n";
    if(front>rear) front=rear=-1;
}
void queuePeek() {if(front==-1 || front>rear){cout<<"Queue empty\n"; return;} cout<<"Front: "<<queueArr[front]<<"\n";}
void queueDisplay() {if(front==-1 || front>rear){cout<<"Queue empty\n"; return;} cout<<"Queue: "; for(int i=front;i<=rear;i++) cout<<queueArr[i]<<" "; cout<<"\n";}

// ------------------- TREE (BST) -------------------
struct TreeNode{
    string data; TreeNode* left; TreeNode* right;
    TreeNode(string d):data(d),left(nullptr),right(nullptr){}
};
TreeNode* rootTree=nullptr;

TreeNode* bstInsertNode(TreeNode* node, string val){
    if(!node) return new TreeNode(val);
    if(val<node->data) node->left=bstInsertNode(node->left,val);
    else node->right=bstInsertNode(node->right,val);
    return node;
}
void bstInsert() { string val; cout<<"Enter item: "; cin >> ws; getline(cin,val); rootTree=bstInsertNode(rootTree,val); cout<<"Inserted\n";}
void bstInorder(TreeNode* node){ if(!node) return; bstInorder(node->left); cout<<node->data<<" "; bstInorder(node->right);}
void bstDisplay(){ cout<<"BST Inorder: "; bstInorder(rootTree); cout<<"\n";}
void bstSearch() {
    if(!rootTree){cout<<"Tree empty\n"; return;}
    string key; cout<<"Search item: "; cin >> ws; getline(cin,key);
    TreeNode* t=rootTree;
    while(t){ if(t->data==key){cout<<"Found\n"; return;} t= (key< t->data)? t->left:t->right;}
    cout<<"Not found\n";
}

// ------------------- GRAPH -------------------
map<string, list<string>> graph;

void addVertex() {
    string v; cout << "Enter vertex name: "; cin >> ws; getline(cin, v);
    if(graph.find(v)==graph.end()){ graph[v] = list<string>(); cout<<"Vertex added\n";}
    else cout<<"Vertex already exists\n";
}
void addEdge() {
    string u,v; 
    cout << "Enter source vertex: "; cin >> ws; getline(cin,u);
    cout << "Enter destination vertex: "; cin >> ws; getline(cin,v);
    if(graph.find(u)!=graph.end() && graph.find(v)!=graph.end()){ graph[u].push_back(v); cout<<"Edge added\n";}
    else cout<<"One or both vertices not found\n";
}
void deleteEdge() {
    string u,v;
    cout << "Enter source vertex: "; cin >> ws; getline(cin,u);
    cout << "Enter destination vertex: "; cin >> ws; getline(cin,v);
    if(graph.find(u)!=graph.end()){ graph[u].remove(v); cout<<"Edge removed if existed\n"; } 
    else cout<<"Source vertex not found\n";
}
void deleteVertex() {
    string v; cout<<"Enter vertex to delete: "; cin >> ws; getline(cin,v);
    if(graph.find(v)!=graph.end()){ graph.erase(v); for(auto &p: graph){ p.second.remove(v); } cout<<"Vertex and edges deleted\n"; }
    else cout<<"Vertex not found\n";
}
void displayGraph() {
    if(graph.empty()){ cout<<"Graph empty\n"; return;}
    for(auto &p: graph){ cout<<p.first<<" -> "; for(string nbr: p.second) cout<<nbr<<" "; cout<<"\n"; }
}

// ------------------- MAIN MENU -------------------
int main() {
    srand(time(0));
    int choice;
    do {
        clearScreen(); setBeautifulColor();
        cout<<"\n====== LOST & FOUND MANAGEMENT SYSTEM ======\n";
        cout<<"1. Array Operations\n2. Linked List Operations\n3. Stack Operations\n4. Queue Operations\n5. Tree Operations\n6. Graph Operations\n7. Exit\n";
        cout<<"Enter choice: "; cin>>choice;
        switch(choice){
            case 1: { int ch; do { clearScreen(); setBeautifulColor();
                cout<<"\n--- Array Menu ---\n1.Insert 2.Delete 3.Search 4.Update 5.Display 6.Back\nChoice: "; cin>>ch;
                switch(ch){ case 1: arrayInsert(); break; 
				case 2: arrayDelete(); break; 
				case 3: arraySearch(); break;
				 case 4: arrayUpdate(); break; 
				 case 5: arrayDisplay(); break;}
                if(ch!=6){ cout<<"\nPress Enter to continue..."; cin.ignore(); cin.get();}
            }while(ch!=6); break; }
            case 2: { int ch; do { clearScreen(); setBeautifulColor();
                cout<<"\n--- Linked List Menu ---\n1.Insert 2.Delete 3.Search 4.Update 5.Display 6.Back\nChoice: "; cin>>ch;
                switch(ch){ case 1: llInsert();break;
				 case 2: llDelete();break;
				  case 3: llSearch(); break;
				   case 4: llUpdate(); break; 
				   case 5: llDisplay(); break;}
                if(ch!=6){ cout<<"\nPress Enter to continue..."; cin.ignore(); cin.get();}
            }while(ch!=6); break; }
            case 3: { int ch; do { clearScreen(); setBeautifulColor();
                cout<<"\n--- Stack Menu ---\n1.Push 2.Pop 3.Peek 4.Display 5.Back\nChoice: "; cin>>ch;
                switch(ch){ case 1: stackPush(); break; case 2: stackPop(); break; case 3: stackPeek(); break; case 4: stackDisplay(); break;}
                if(ch!=5){ cout<<"\nPress Enter to continue..."; cin.ignore(); cin.get();}
            }while(ch!=5); break; }
            case 4: { int ch; do { clearScreen(); setBeautifulColor();
                cout<<"\n--- Queue Menu ---\n1.Enqueue 2.Dequeue 3.Peek 4.Display 5.Back\nChoice: "; cin>>ch;
                switch(ch){ case 1: queueEnqueue(); break; 
				case 2: queueDequeue(); break; 
				case 3: queuePeek(); break; 
				case 4: queueDisplay(); break;}
                if(ch!=5){ cout<<"\nPress Enter to continue..."; cin.ignore(); cin.get();}
            }while(ch!=5); break; }
            case 5: { int ch; do { clearScreen(); setBeautifulColor();
                cout<<"\n--- Tree Menu ---\n1.Insert 2.Search 3.Display 4.Back\nChoice: "; cin>>ch;
                switch(ch){ case 1: bstInsert(); break; case 2: bstSearch(); break; case 3: bstDisplay(); break;}
                if(ch!=4){ cout<<"\nPress Enter to continue..."; cin.ignore(); cin.get();}
            }while(ch!=4); break; }
            case 6: { int ch; do { clearScreen(); setBeautifulColor();
                cout<<"\n--- Graph Menu ---\n1.Add Vertex 2.Add Edge 3.Delete Vertex 4.Delete Edge 5.Display 6.Back\nChoice: "; cin>>ch;
                switch(ch){ case 1: addVertex(); break; case 2: addEdge(); break; case 3: deleteVertex(); break; case 4: deleteEdge(); break; case 5: displayGraph(); break;}
                if(ch!=6){ cout<<"\nPress Enter to continue..."; cin.ignore(); cin.get();}
            }while(ch!=6); break; }
            case 7: cout<<"Exiting...\n"; break;
            default: cout<<"Invalid choice\n"; cout<<"\nPress Enter to continue..."; cin.ignore(); cin.get();
        }
    } while(choice!=7);
    return 0;
}
