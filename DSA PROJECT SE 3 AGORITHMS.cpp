#include <iostream>
#include <cstdlib> 
#include <ctime>   
using namespace std;
void insertionMenu();
void deletionMenu();
void searchingMenu();
void updatingMenu();
void sortingMenu();

// Linked List Menus
void linkedListMenu();
void linkedListInsertionMenu();
void linkedListDeletionMenu();
void linkedListSearchMenu();
void linkedListUpdateMenu();

// Doubly Linked List Menus and Functions
void dllMenu();
void dllInsertNode();
void dllDeleteNode();
void dllDisplayList();

// Circular Linked List Menus and Functions
void cllMenu();
void cllInsertNode();
void cllDeleteNode();
void cllDisplayList();

// Stack Menus (Array Based)
void stackMenu();
void stackPushMenu();
void stackPopMenu();
void stackPeekMenu();
void stackIsEmptyMenu();
void stackIsFullMenu();
void stackDisplayMenu();

// Queue Menus (Array Based)
void queueMenu();
void queueEnqueueMenu();
void queueDequeueMenu();
void queuePeekMenu();
void queueIsEmptyMenu();
void queueIsFullMenu();
void queueDisplayMenu();

// Circular Queue Menus
void circularQueueMenu();
void circularEnqueueMenu();
void circularDequeueMenu();
void circularDisplayMenu();

// Stack Using Linked List
void llStackMenu();
void llStackPushMenu();
void llStackPopMenu();

// Queue Using Linked List
void llQueueMenu();
void llQueueEnqueueMenu();
void llQueueDequeueMenu();

// Tree Algorithms
void treeMenu();
void treeTraversalMenu();
void bstInsertMenu();
void bstSearchMenu();

// Graph Algorithms
void graphMenu();
void graphBFSMenu();
void graphDFSMenu();




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



// Insertion Algorithms
void insertionMenu() {
    clearScreen(); setBeautifulColor();
    int choice;
    cout << "\n------ INSERTION MENU ------\n";
    cout << "1. General Insertion\n";
    cout << "2. Insertion at Beginning\n";
    cout << "3. Insertion at Middle (Specific)\n";
    cout << "4. Insertion at End\n";
    cout << "5. Back to Main Menu\n";
    cout << "Enter choice: ";
    cin >> choice;

    clearScreen(); setBeautifulColor();
    switch(choice) {
        case 1:
            cout << "\nINSERTION (GENERAL CREATE)\n";
            cout << "Algorithm Insert(A, n, pos, value, capacity):\n";
            cout << "Step 1: If n = capacity then Print 'Array is full, cannot insert'.\n";
            cout << "Step 2: If pos < 0 OR pos > n then Print 'Invalid position'.\n";
            cout << "Step 3: For i <- n-1 down to pos do Shift right.\n";
            cout << "Step 4: Place new value at A[pos].\n";
            cout << "Step 5: Increase n by 1.\n";
            cout << "Step 6: Print 'Insertion Successful'.\n";
            break;
        case 2:
            cout << "\nINSERTION AT BEGINNING\n";
            cout << "Algorithm InsertAtBeginning(A, n, value, capacity):\n";
            cout << "Step 1: If n = capacity then Print 'Array full'.\n";
            cout << "Step 2: Shift all elements right by 1.\n";
            cout << "Step 3: Place value at A[0].\n";
            cout << "Step 4: Increase n by 1.\n";
            cout << "Step 5: Print 'Insertion at beginning successful'.\n";
            break;
        case 3:
            cout << "\nINSERTION AT MIDDLE (SPECIFIC POSITION)\n";
            cout << "Algorithm InsertAtMiddle(A, n, pos, value, capacity):\n";
            cout << "Step 1: If n = capacity then Print 'Array full'.\n";
            cout << "Step 2: If pos < 0 OR pos > n then Print 'Invalid position'.\n";
            cout << "Step 3: Shift elements from pos to right.\n";
            cout << "Step 4: Place value at A[pos].\n";
            cout << "Step 5: Increase n by 1.\n";
            cout << "Step 6: Print 'Insertion at middle successful'.\n";
            break;
        case 4:
            cout << "\nINSERTION AT END\n";
            cout << "Algorithm InsertAtEnd(A, n, value, capacity):\n";
            cout << "Step 1: If n = capacity then Print 'Array full'.\n";
            cout << "Step 2: Place value at A[n].\n";
            cout << "Step 3: Increase n by 1.\n";
            cout << "Step 4: Print 'Insertion at end successful'.\n";
            break;
        default:
            cout << "Returning to Main Menu...\n";
    }
}

// Deletion Algorithms
void deletionMenu() {
    clearScreen(); setBeautifulColor();
    int choice;
    cout << "\n------ DELETION MENU ------\n";
    cout << "1. General Deletion\n";
    cout << "2. Deletion at Beginning\n";
    cout << "3. Deletion at Middle (Specific)\n";
    cout << "4. Deletion at End\n";
    cout << "5. Back to Main Menu\n";
    cout << "Enter choice: ";
    cin >> choice;

    clearScreen(); setBeautifulColor();
    switch(choice) {
        case 1:
            cout << "\nDELETE (GENERAL)\n";
            cout << "Algorithm Delete(A, n, pos):\n";
            cout << "Step 1: If pos < 0 OR pos >= n then Print 'Invalid index'.\n";
            cout << "Step 2: Shift elements left from pos.\n";
            cout << "Step 3: Reduce n by 1.\n";
            cout << "Step 4: Print 'Deletion successful'.\n";
            break;
        case 2:
            cout << "\nDELETION AT BEGINNING\n";
            cout << "Algorithm DeleteAtBeginning(A, n):\n";
            cout << "Step 1: If n = 0 then Print 'Array empty'.\n";
            cout << "Step 2: Shift elements left from index 0.\n";
            cout << "Step 3: Reduce n by 1.\n";
            cout << "Step 4: Print 'Deletion at beginning successful'.\n";
            break;
        case 3:
            cout << "\nDELETION AT MIDDLE (SPECIFIC POSITION)\n";
            cout << "Algorithm DeleteAtMiddle(A, n, pos):\n";
            cout << "Step 1: If pos < 0 OR pos >= n then Print 'Invalid position'.\n";
            cout << "Step 2: Shift elements left from pos.\n";
            cout << "Step 3: Reduce n by 1.\n";
            cout << "Step 4: Print 'Deletion at middle successful'.\n";
            break;
        case 4:
            cout << "\nDELETION AT END\n";
            cout << "Algorithm DeleteAtEnd(A, n):\n";
            cout << "Step 1: If n = 0 then Print 'Array empty'.\n";
            cout << "Step 2: Reduce n by 1.\n";
            cout << "Step 3: Print 'Deletion at end successful'.\n";
            break;
        default:
            cout << "Returning to Main Menu...\n";
    }
}

// Searching Algorithms
void searchingMenu() {
    clearScreen(); setBeautifulColor();
    int choice;
    cout << "\n------ SEARCHING MENU ------\n";
    cout << "1. Linear Search\n";
    cout << "2. Binary Search\n";
    cout << "3. Back to Main Menu\n";
    cout << "Enter choice: ";
    cin >> choice;

    clearScreen(); setBeautifulColor();
    switch(choice) {
        case 1:
            cout << "\nLINEAR SEARCH\n";
            cout << "Algorithm LinearSearch(A, n, key):\n";
            cout << "Step 1: For i <- 0 to n-1 do\n";
            cout << "Step 2:   If A[i] = key then Return i.\n";
            cout << "Step 3: If key not found then Return -1.\n";
            break;
        case 2:
            cout << "\nBINARY SEARCH\n";
            cout << "Algorithm BinarySearch(A, n, key):\n";
            cout << "Step 1: Set low <- 0, high <- n-1.\n";
            cout << "Step 2: While low <= high do\n";
            cout << "Step 3:   mid <- (low+high)/2.\n";
            cout << "Step 4:   If A[mid] = key then Return mid.\n";
            cout << "Step 5:   Else if A[mid] < key then low <- mid+1.\n";
            cout << "Step 6:   Else high <- mid-1.\n";
            cout << "Step 7: If not found then Return -1.\n";
            break;
        default:
            cout << "Returning to Main Menu...\n";
    }
}

// Updating Algorithms
void updatingMenu() {
    clearScreen(); setBeautifulColor();
    int choice;
    cout << "\n------ UPDATING MENU ------\n";
    cout << "1. Update by Index\n";
    cout << "2. Update by Value (First Occurrence)\n";
    cout << "3. Back to Main Menu\n";
    cout << "Enter choice: ";
    cin >> choice;

    clearScreen(); setBeautifulColor();
    switch(choice) {
        case 1:
            cout << "\nUPDATE BY INDEX\n";
            cout << "Algorithm UpdateByIndex(A, n, index, newValue):\n";
            cout << "Step 1: If index < 0 OR index >= n then Print 'Invalid index'.\n";
            cout << "Step 2: Else A[index] <- newValue.\n";
            cout << "Step 3: Print 'Update Successful'.\n";
            break;
        case 2:
            cout << "\nUPDATE BY VALUE (FIRST OCCURRENCE)\n";
            cout << "Algorithm UpdateByValue(A, n, oldValue, newValue):\n";
            cout << "Step 1: For i <- 0 to n-1 do\n";
            cout << "Step 2:   If A[i] = oldValue then A[i] <- newValue and break.\n";
            cout << "Step 3: If oldValue not found then Print 'Value not found'.\n";
            break;
        default:
            cout << "Returning to Main Menu...\n";
    }
}


void sortingMenu() {
    clearScreen(); setBeautifulColor();
    int choice;
    cout << "\n------ SORTING MENU ------\n";
    cout << "1. Bubble Sort\n";
    cout << "2. Selection Sort\n";
    cout << "3. Insertion Sort\n";
    cout << "4. Merge Sort\n";
    cout << "5. Quick Sort\n";
    cout << "6. Counting Sort\n";
    cout << "7. Back to Main Menu\n";
    cout << "Enter choice: ";
    cin >> choice;

    clearScreen(); setBeautifulColor();
    switch(choice) {
        case 1:
            cout << "\nBUBBLE SORT\n";
            cout << "Algorithm BubbleSort(A, n):\n";
            cout << "Step 1: For i <- 0 to n-1 do\n";
            cout << "Step 2:   For j <- 0 to n-i-2 do\n";
            cout << "Step 3:       If A[j] > A[j+1] then Swap.\n";
            break;
        case 2:
            cout << "\nSELECTION SORT\n";
            cout << "Algorithm SelectionSort(A, n):\n";
            cout << "Step 1: For i <- 0 to n-1 do\n";
            cout << "Step 2:   minIndex <- i.\n";
            cout << "Step 3:   For j <- i+1 to n-1 do If A[j] < A[minIndex], update minIndex.\n";
            cout << "Step 4:   Swap A[i] and A[minIndex].\n";
            break;
        case 3:
            cout << "\nINSERTION SORT\n";
            cout << "Algorithm InsertionSort(A, n):\n";
            cout << "Step 1: For i <- 1 to n-1 do\n";
            cout << "Step 2:   key <- A[i], j <- i-1.\n";
            cout << "Step 3:   While j >= 0 and A[j] > key shift A[j].\n";
            cout << "Step 4:   Place key at correct position.\n";
            break;
        case 4:
            cout << "\nMERGE SORT\n";
            cout << "Algorithm MergeSort(A, left, right):\n";
            cout << "Step 1: If left < right then\n";
            cout << "        mid <- (left+right)/2.\n";
            cout << "Step 2: MergeSort(A, left, mid) and MergeSort(A, mid+1, right).\n";
            cout << "Step 3: Merge(A, left, mid, right).\n";
            break;
        case 5:
            cout << "\nQUICK SORT\n";
            cout << "Algorithm QuickSort(A, low, high):\n";
            cout << "Step 1: If low < high then Partition array.\n";
            cout << "Step 2: QuickSort left and right subarrays.\n";
            break;
        case 6:
            cout << "\nCOUNTING SORT\n";
            cout << "Algorithm CountingSort(A, n, k):\n";
            cout << "Step 1: Create Count[0..k] initialized to 0.\n";
            cout << "Step 2: Count frequencies of A.\n";
            cout << "Step 3: Place elements back in sorted order.\n";
            break;
        default:
            cout << "Returning to Main Menu...\n";
    }
}
// ------------------- LINKED LIST ALGORITHMS -------------------

struct Node {
    int data;
    Node* next;
};

// Linked List Insertion Menu
void linkedListInsertionMenu() {
    clearScreen(); setBeautifulColor();
    int choice;

    cout << "\n------ LINKED LIST INSERTION MENU ------\n";
    cout << "1. Insert at Beginning\n";
    cout << "2. Insert at Specific Position\n";
    cout << "3. Insert at End\n";
    cout << "4. Back to Linked List Menu\n";
    cout << "Enter choice: ";
    cin >> choice;

    clearScreen(); setBeautifulColor();

    switch(choice) {
        case 1:
            cout << "\nINSERT AT BEGINNING (Linked List)\n";
            cout << "Algorithm InsertAtBeginning(head, value):\n";
            cout << "Step 1: Create newNode.\n";
            cout << "Step 2: newNode->data <- value.\n";
            cout << "Step 3: newNode->next <- head.\n";
            cout << "Step 4: head <- newNode.\n";
            cout << "Step 5: Print 'Inserted at beginning'.\n";
            break;

        case 2:
            cout << "\nINSERT AT SPECIFIC POSITION (Linked List)\n";
            cout << "Algorithm InsertAtPosition(head, pos, value):\n";
            cout << "Step 1: If pos = 0 call InsertAtBeginning.\n";
            cout << "Step 2: Traverse list to (pos-1).\n";
            cout << "Step 3: If NULL found early, print 'Invalid position'.\n";
            cout << "Step 4: Create newNode.\n";
            cout << "Step 5: newNode->next <- current->next.\n";
            cout << "Step 6: current->next <- newNode.\n";
            cout << "Step 7: Print 'Inserted at position'.\n";
            break;

        case 3:
            cout << "\nINSERT AT END (Linked List)\n";
            cout << "Algorithm InsertAtEnd(head, value):\n";
            cout << "Step 1: Create newNode.\n";
            cout << "Step 2: If head = NULL then head <- newNode.\n";
            cout << "Step 3: Else traverse to last node.\n";
            cout << "Step 4: last->next <- newNode.\n";
            cout << "Step 5: Print 'Inserted at end'.\n";
            break;

        default:
            cout << "Returning to Linked List Menu...\n";
    }
}



// Linked List Deletion Menu
void linkedListDeletionMenu() {
    clearScreen(); setBeautifulColor();
    int choice;

    cout << "\n------ LINKED LIST DELETION MENU ------\n";
    cout << "1. Delete at Beginning\n";
    cout << "2. Delete at Specific Position\n";
    cout << "3. Delete at End\n";
    cout << "4. Back to Linked List Menu\n";
    cout << "Enter choice: ";
    cin >> choice;

    clearScreen(); setBeautifulColor();

    switch(choice) {
        case 1:
            cout << "\nDELETE AT BEGINNING (Linked List)\n";
            cout << "Algorithm DeleteAtBeginning(head):\n";
            cout << "Step 1: If head = NULL print 'List empty'.\n";
            cout << "Step 2: temp <- head.\n";
            cout << "Step 3: head <- head->next.\n";
            cout << "Step 4: delete temp.\n";
            cout << "Step 5: Print 'Deleted first node'.\n";
            break;

        case 2:
            cout << "\nDELETE AT SPECIFIC POSITION (Linked List)\n";
            cout << "Algorithm DeleteAtPosition(head, pos):\n";
            cout << "Step 1: If pos = 0 call DeleteAtBeginning.\n";
            cout << "Step 2: Traverse to (pos-1).\n";
            cout << "Step 3: If node invalid, print 'Invalid position'.\n";
            cout << "Step 4: temp <- current->next.\n";
            cout << "Step 5: current->next <- temp->next.\n";
            cout << "Step 6: delete temp.\n";
            cout << "Step 7: Print 'Deleted node at position'.\n";
            break;

        case 3:
            cout << "\nDELETE AT END (Linked List)\n";
            cout << "Algorithm DeleteAtEnd(head):\n";
            cout << "Step 1: If head = NULL print 'List empty'.\n";
            cout << "Step 2: If head->next = NULL delete head.\n";
            cout << "Step 3: Else traverse to second-last node.\n";
            cout << "Step 4: delete last node.\n";
            cout << "Step 5: Print 'Deleted last node'.\n";
            break;

        default:
            cout << "Returning to Linked List Menu...\n";
    }
}

// ------------------- DOUBLY LINKED LIST MENU -------------------
void dllMenu() {
    clearScreen(); setBeautifulColor();
    int choice;

    cout << "\n================ DOUBLY LINKED LIST MENU ================\n";
    cout << "1. Insert Node\n";
    cout << "2. Delete Node\n";
    cout << "3. Display List\n";
    cout << "4. Back to Main Menu\n";
    cout << "Enter your choice: ";
    cin >> choice;

    switch(choice) {
        case 1: dllInsertNode(); break;   // Call the actual insert function
        case 2: dllDeleteNode(); break;   // Call the actual delete function
        case 3: dllDisplayList(); break;  // Call the actual display function
        default: cout << "Returning to Main Menu...\n";
    }
}


// ------------------- CIRCULAR LINKED LIST MENU -------------------
void cllMenu() {
    clearScreen(); setBeautifulColor();
    int choice;

    cout << "\n================ CIRCULAR LINKED LIST MENU ================\n";
    cout << "1. Insert Node\n";
    cout << "2. Delete Node\n";
    cout << "3. Display List\n";
    cout << "4. Back to Main Menu\n";
    cout << "Enter your choice: ";
    cin >> choice;

    switch(choice) {
        case 1: cllInsertNode(); break;   // Call actual insert
        case 2: cllDeleteNode(); break;   // Call actual delete
        case 3: cllDisplayList(); break;  // Call actual display
        default: cout << "Returning to Main Menu...\n";
    }
}


// Linked List Searching Menu
void linkedListSearchMenu() {
    clearScreen(); setBeautifulColor();
    int choice;

    cout << "\n------ LINKED LIST SEARCHING MENU ------\n";
    cout << "1. Search by Value\n";
    cout << "2. Back to Linked List Menu\n";
    cout << "Enter choice: ";
    cin >> choice;

    clearScreen(); setBeautifulColor();

    switch(choice) {
        case 1:
            cout << "\nSEARCH BY VALUE (Linked List)\n";
            cout << "Algorithm Search(head, key):\n";
            cout << "Step 1: Set current <- head.\n";
            cout << "Step 2: index <- 0.\n";
            cout << "Step 3: While current != NULL do\n";
            cout << "Step 4:   If current->data = key return index.\n";
            cout << "Step 5:   current <- current->next; index++.\n";
            cout << "Step 6: If not found return -1.\n";
            break;

        default:
            cout << "Returning to Linked List Menu...\n";
    }
}



// Linked List Updating Menu
void linkedListUpdateMenu() {
    clearScreen(); setBeautifulColor();
    int choice;

    cout << "\n------ LINKED LIST UPDATING MENU ------\n";
    cout << "1. Update by Index\n";
    cout << "2. Update by Value (first match)\n";
    cout << "3. Back to Linked List Menu\n";
    cout << "Enter choice: ";
    cin >> choice;

    clearScreen(); setBeautifulColor();

    switch(choice) {
        case 1:
            cout << "\nUPDATE BY INDEX (Linked List)\n";
            cout << "Algorithm UpdateByIndex(head, index, newValue):\n";
            cout << "Step 1: Traverse list until index.\n";
            cout << "Step 2: If reached NULL early, print 'Invalid index'.\n";
            cout << "Step 3: Replace node->data with newValue.\n";
            cout << "Step 4: Print 'Update Successful'.\n";
            break;

        case 2:
            cout << "\nUPDATE BY VALUE (Linked List)\n";
            cout << "Algorithm UpdateByValue(head, oldValue, newValue):\n";
            cout << "Step 1: Traverse list.\n";
            cout << "Step 2: If node->data = oldValue\n";
            cout << "        replace with newValue.\n";
            cout << "Step 3: Stop after first occurrence.\n";
            break;

        default:
            cout << "Returning to Linked List Menu...\n";
    }
}



// Main Linked List Menu
void linkedListMenu() {
    clearScreen(); setBeautifulColor();
    int choice;

    cout << "\n================ LINKED LIST MENU ================\n";
    cout << "1. Insertion\n";
    cout << "2. Deletion\n";
    cout << "3. Searching\n";
    cout << "4. Updating\n";
    cout << "5. Back to Main Menu\n";
    cout << "Enter your choice: ";
    cin >> choice;

    switch(choice) {
        case 1: linkedListInsertionMenu(); break;
        case 2: linkedListDeletionMenu(); break;
        case 3: linkedListSearchMenu(); break;
        case 4: linkedListUpdateMenu(); break;
        default: cout << "Returning to Main Menu...\n";
    }
}

// ------------------- STACK ALGORITHMS (Array Based) -------------------

void stackPushMenu() {
    clearScreen(); setBeautifulColor();

    cout << "\n------ STACK PUSH (INSERTION) ------\n";
    cout << "Algorithm Push(Stack, top, value, capacity):\n";
    cout << "Step 1: If top = capacity - 1 then Print 'Stack Overflow'.\n";
    cout << "Step 2: Else Increase top by 1.\n";
    cout << "Step 3: Stack[top] <- value.\n";
    cout << "Step 4: Print 'Value pushed successfully'.\n";
}

void stackPopMenu() {
    clearScreen(); setBeautifulColor();

    cout << "\n------ STACK POP (DELETION) ------\n";
    cout << "Algorithm Pop(Stack, top):\n";
    cout << "Step 1: If top = -1 then Print 'Stack Underflow'.\n";
    cout << "Step 2: Else temp <- Stack[top].\n";
    cout << "Step 3: Decrease top by 1.\n";
    cout << "Step 4: Print 'Value popped successfully'.\n";
}

void stackPeekMenu() {
    clearScreen(); setBeautifulColor();

    cout << "\n------ STACK PEEK (TOP ELEMENT) ------\n";
    cout << "Algorithm Peek(Stack, top):\n";
    cout << "Step 1: If top = -1 then Print 'Stack is empty'.\n";
    cout << "Step 2: Else Print Stack[top].\n";
}

void stackIsEmptyMenu() {
    clearScreen(); setBeautifulColor();

    cout << "\n------ STACK EMPTY CHECK ------\n";
    cout << "Algorithm IsEmpty(top):\n";
    cout << "Step 1: If top = -1 return TRUE.\n";
    cout << "Step 2: Else return FALSE.\n";
}

void stackIsFullMenu() {
    clearScreen(); setBeautifulColor();

    cout << "\n------ STACK FULL CHECK ------\n";
    cout << "Algorithm IsFull(top, capacity):\n";
    cout << "Step 1: If top = capacity - 1 return TRUE.\n";
    cout << "Step 2: Else return FALSE.\n";
}

void stackDisplayMenu() {
    clearScreen(); setBeautifulColor();

    cout << "\n------ DISPLAY STACK ------\n";
    cout << "Algorithm Display(Stack, top):\n";
    cout << "Step 1: If top = -1 Print 'Stack Empty'.\n";
    cout << "Step 2: Else For i <- top down to 0 print Stack[i].\n";
}


void stackMenu() {
    clearScreen(); setBeautifulColor();
    int choice;

    cout << "\n================ STACK MENU ================\n";
    cout << "1. Push (Insert)\n";
    cout << "2. Pop (Delete)\n";
    cout << "3. Peek (Top)\n";
    cout << "4. Is Empty?\n";
    cout << "5. Is Full?\n";
    cout << "6. Display Stack\n";
    cout << "7. Back to Main Menu\n";
    cout << "Enter your choice: ";
    cin >> choice;

    switch(choice) {
        case 1: stackPushMenu(); break;
        case 2: stackPopMenu(); break;
        case 3: stackPeekMenu(); break;
        case 4: stackIsEmptyMenu(); break;
        case 5: stackIsFullMenu(); break;
        case 6: stackDisplayMenu(); break;
        default: cout << "Returning to Main Menu...\n";
    }
}

// ------------------- QUEUE ALGORITHMS (Array Based) -------------------

void queueEnqueueMenu() {
    clearScreen(); setBeautifulColor();

    cout << "\n------ QUEUE ENQUEUE (INSERTION) ------\n";
    cout << "Algorithm Enqueue(Q, front, rear, value, capacity):\n";
    cout << "Step 1: If rear = capacity - 1 then Print 'Queue Overflow'.\n";
    cout << "Step 2: If front = -1 then front <- 0.\n";
    cout << "Step 3: Increase rear by 1.\n";
    cout << "Step 4: Q[rear] <- value.\n";
    cout << "Step 5: Print 'Value enqueued successfully'.\n";
}

void queueDequeueMenu() {
    clearScreen(); setBeautifulColor();

    cout << "\n------ QUEUE DEQUEUE (DELETION) ------\n";
    cout << "Algorithm Dequeue(Q, front, rear):\n";
    cout << "Step 1: If front = -1 OR front > rear then Print 'Queue Underflow'.\n";
    cout << "Step 2: temp <- Q[front].\n";
    cout << "Step 3: Increase front by 1.\n";
    cout << "Step 4: If front > rear then both front and rear <- -1.\n";
    cout << "Step 5: Print 'Value dequeued successfully'.\n";
}

void queuePeekMenu() {
    clearScreen(); setBeautifulColor();

    cout << "\n------ QUEUE FRONT ELEMENT (PEEK) ------\n";
    cout << "Algorithm Peek(Q, front, rear):\n";
    cout << "Step 1: If front = -1 OR front > rear then Print 'Queue Empty'.\n";
    cout << "Step 2: Else Print Q[front].\n";
}

void queueIsEmptyMenu() {
    clearScreen(); setBeautifulColor();

    cout << "\n------ CHECK IF QUEUE EMPTY ------\n";
    cout << "Algorithm IsEmpty(front, rear):\n";
    cout << "Step 1: If front = -1 OR front > rear return TRUE.\n";
    cout << "Step 2: Else return FALSE.\n";
}

void queueIsFullMenu() {
    clearScreen(); setBeautifulColor();

    cout << "\n------ CHECK IF QUEUE FULL ------\n";
    cout << "Algorithm IsFull(rear, capacity):\n";
    cout << "Step 1: If rear = capacity - 1 return TRUE.\n";
    cout << "Step 2: Else return FALSE.\n";
}

void queueDisplayMenu() {
    clearScreen(); setBeautifulColor();

    cout << "\n------ DISPLAY QUEUE ELEMENTS ------\n";
    cout << "Algorithm Display(Q, front, rear):\n";
    cout << "Step 1: If front = -1 OR front > rear Print 'Queue Empty'.\n";
    cout << "Step 2: Else For i <- front to rear print Q[i].\n";
}


void queueMenu() {
    clearScreen(); setBeautifulColor();
    int choice;

    cout << "\n================ QUEUE MENU ================\n";
    cout << "1. Enqueue (Insert)\n";
    cout << "2. Dequeue (Delete)\n";
    cout << "3. Peek (Front)\n";
    cout << "4. Is Empty?\n";
    cout << "5. Is Full?\n";
    cout << "6. Display Queue\n";
    cout << "7. Back to Main Menu\n";
    cout << "Enter your choice: ";
    cin >> choice;

    switch(choice) {
        case 1: queueEnqueueMenu(); break;
        case 2: queueDequeueMenu(); break;
        case 3: queuePeekMenu(); break;
        case 4: queueIsEmptyMenu(); break;
        case 5: queueIsFullMenu(); break;
        case 6: queueDisplayMenu(); break;
        default: cout << "Returning to Main Menu...\n";
    }
    
}
// ------------------- CIRCULAR QUEUE ALGORITHMS -------------------

void circularEnqueueMenu() {
    clearScreen(); setBeautifulColor();

    cout << "\n------ CIRCULAR QUEUE ENQUEUE ------\n";
    cout << "Algorithm Enqueue(CQ, front, rear, value, capacity):\n";
    cout << "Step 1: If (rear + 1) % capacity = front then Print 'Queue Full'.\n";
    cout << "Step 2: If front = -1 then front <- 0.\n";
    cout << "Step 3: rear <- (rear + 1) % capacity.\n";
    cout << "Step 4: CQ[rear] <- value.\n";
    cout << "Step 5: Print 'Value enqueued'.\n";
}

void circularDequeueMenu() {
    clearScreen(); setBeautifulColor();

    cout << "\n------ CIRCULAR QUEUE DEQUEUE ------\n";
    cout << "Algorithm Dequeue(CQ, front, rear):\n";
    cout << "Step 1: If front = -1 Print 'Queue Empty'.\n";
    cout << "Step 2: temp <- CQ[front].\n";
    cout << "Step 3: If front = rear then both front & rear <- -1.\n";
    cout << "Step 4: Else front <- (front + 1) % capacity.\n";
    cout << "Step 5: Print 'Value dequeued'.\n";
}

void circularDisplayMenu() {
    clearScreen(); setBeautifulColor();

    cout << "\n------ DISPLAY CIRCULAR QUEUE ------\n";
    cout << "Algorithm Display(CQ, front, rear):\n";
    cout << "Step 1: If front = -1 Print 'Queue Empty'.\n";
    cout << "Step 2: Set i <- front.\n";
    cout << "Step 3: While i != rear print CQ[i]. i <- (i+1)%capacity.\n";
    cout << "Step 4: Print CQ[rear].\n";
}

void circularQueueMenu() {
    clearScreen(); setBeautifulColor();
    int choice;

    cout << "\n================ CIRCULAR QUEUE MENU ================\n";
    cout << "1. Enqueue\n";
    cout << "2. Dequeue\n";
    cout << "3. Display\n";
    cout << "4. Back to Main Menu\n";
    cout << "Enter your choice: ";
    cin >> choice;

    switch(choice) {
        case 1: circularEnqueueMenu(); break;
        case 2: circularDequeueMenu(); break;
        case 3: circularDisplayMenu(); break;
        default: cout << "Returning to Main Menu...\n";
    }
}
// ------------------- STACK USING LINKED LIST -------------------

void llStackPushMenu() {
    clearScreen(); setBeautifulColor();

    cout << "\n------ STACK USING LINKED LIST PUSH ------\n";
    cout << "Algorithm Push(head, value):\n";
    cout << "Step 1: Create newNode.\n";
    cout << "Step 2: newNode->next <- head.\n";
    cout << "Step 3: head <- newNode.\n";
}

void llStackPopMenu() {
    clearScreen(); setBeautifulColor();

    cout << "\n------ STACK USING LINKED LIST POP ------\n";
    cout << "Algorithm Pop(head):\n";
    cout << "Step 1: If head = NULL print 'Underflow'.\n";
    cout << "Step 2: temp <- head.\n";
    cout << "Step 3: head <- head->next.\n";
    cout << "Step 4: delete temp.\n";
}
void llStackMenu() {
    clearScreen(); setBeautifulColor();
    int choice;

    cout << "\n================ STACK USING LINKED LIST MENU ================\n";
    cout << "1. Push\n";
    cout << "2. Pop\n";
    cout << "3. Back to Main Menu\n";
    cout << "Enter choice: ";
    cin >> choice;

    switch(choice) {
        case 1: llStackPushMenu(); break;
        case 2: llStackPopMenu(); break;
        default: cout << "Returning to Main Menu...\n";
    }
}
// ------------------- QUEUE USING LINKED LIST -------------------

void llQueueEnqueueMenu() {
    clearScreen(); setBeautifulColor();

    cout << "\n------ QUEUE USING LINKED LIST ENQUEUE ------\n";
    cout << "Algorithm Enqueue(front, rear, value):\n";
    cout << "Step 1: Create newNode.\n";
    cout << "Step 2: If rear = NULL then front & rear <- newNode.\n";
    cout << "Step 3: Else rear->next <- newNode; rear <- newNode.\n";
}

void llQueueDequeueMenu() {
    clearScreen(); setBeautifulColor();

    cout << "\n------ QUEUE USING LINKED LIST DEQUEUE ------\n";
    cout << "Algorithm Dequeue(front, rear):\n";
    cout << "Step 1: If front = NULL print 'Underflow'.\n";
    cout << "Step 2: temp <- front.\n";
    cout << "Step 3: front <- front->next.\n";
    cout << "Step 4: If front = NULL then rear <- NULL.\n";
    cout << "Step 5: delete temp.\n";
}

void llQueueMenu() {
    clearScreen(); setBeautifulColor();
    int choice;

    cout << "\n================ QUEUE USING LINKED LIST MENU ================\n";
    cout << "1. Enqueue\n";
    cout << "2. Dequeue\n";
    cout << "3. Back to Main Menu\n";
    cout << "Enter your choice: ";
    cin >> choice;

    switch(choice) {
        case 1: llQueueEnqueueMenu(); break;
        case 2: llQueueDequeueMenu(); break;
        default: cout << "Returning to Main Menu...\n";
    }
}
// ------------------- TREE ALGORITHMS -------------------

void treeTraversalMenu() {
    clearScreen(); setBeautifulColor();

    cout << "\n------ TREE TRAVERSALS ------\n";
    cout << "Algorithm Inorder(node): Left -> Root -> Right.\n";
    cout << "Algorithm Preorder(node): Root -> Left -> Right.\n";
    cout << "Algorithm Postorder(node): Left -> Right -> Root.\n";
}

void bstInsertMenu() {
    clearScreen(); setBeautifulColor();

    cout << "\n------ BST INSERTION ------\n";
    cout << "Algorithm BST_Insert(root, value):\n";
    cout << "Step 1: If root = NULL create newNode.\n";
    cout << "Step 2: If value < root->data go to left.\n";
    cout << "Step 3: Else go to right.\n";
}

void bstSearchMenu() {
    clearScreen(); setBeautifulColor();

    cout << "\n------ BST SEARCH ------\n";
    cout << "Algorithm BST_Search(root, key):\n";
    cout << "Step 1: If root = NULL return 'Not Found'.\n";
    cout << "Step 2: If key = root->data return 'Found'.\n";
    cout << "Step 3: If key < root->data search left.\n";
    cout << "Step 4: Else search right.\n";
}

void treeMenu() {
    clearScreen(); setBeautifulColor();
    int choice;

    cout << "\n================ TREE ALGORITHMS MENU ================\n";
    cout << "1. Traversal Algorithms\n";
    cout << "2. BST Insert\n";
    cout << "3. BST Search\n";
    cout << "4. Back to Main Menu\n";
    cout << "Enter choice: ";
    cin >> choice;

    switch(choice) {
        case 1: treeTraversalMenu(); break;
        case 2: bstInsertMenu(); break;
        case 3: bstSearchMenu(); break;
        default: cout << "Returning to Main Menu...\n";
    }
}
// ------------------- GRAPH ALGORITHMS -------------------

void graphBFSMenu() {
    clearScreen(); setBeautifulColor();

    cout << "\n------ BREADTH FIRST SEARCH (BFS) ------\n";
    cout << "Algorithm BFS(Graph, start):\n";
    cout << "Step 1: Create visited[] initialized false.\n";
    cout << "Step 2: Create Queue.\n";
    cout << "Step 3: Mark start visited and enqueue.\n";
    cout << "Step 4: While queue not empty:\n";
    cout << "        a. u <- dequeue.\n";
    cout << "        b. For each neighbor v of u:\n";
    cout << "            If not visited mark visited and enqueue.\n";
}

void graphDFSMenu() {
    clearScreen(); setBeautifulColor();

    cout << "\n------ DEPTH FIRST SEARCH (DFS) ------\n";
    cout << "Algorithm DFS(node):\n";
    cout << "Step 1: Mark node visited.\n";
    cout << "Step 2: For each neighbor not visited call DFS.\n";
}
struct DLLNode {
    int data;
    DLLNode* prev;
    DLLNode* next;
};

// Head pointer for DLL
DLLNode* dllHead = nullptr;

// Insert at end
void dllInsertNode() {
    clearScreen(); setBeautifulColor();
    int value;
    cout << "Enter value to insert: ";
    cin >> value;

    DLLNode* newNode = new DLLNode{value, nullptr, nullptr};
    if(!dllHead) {
        dllHead = newNode;
    } else {
        DLLNode* temp = dllHead;
        while(temp->next) temp = temp->next;
        temp->next = newNode;
        newNode->prev = temp;
    }

    cout << "Node inserted successfully!\n";
}

// Delete by value
void dllDeleteNode() {
    clearScreen(); setBeautifulColor();
    int value;
    cout << "Enter value to delete: ";
    cin >> value;

    if(!dllHead) {
        cout << "List is empty!\n";
        return;
    }

    DLLNode* temp = dllHead;
    while(temp && temp->data != value) temp = temp->next;

    if(!temp) {
        cout << "Value not found!\n";
        return;
    }

    if(temp->prev) temp->prev->next = temp->next;
    else dllHead = temp->next; // deleting head

    if(temp->next) temp->next->prev = temp->prev;

    delete temp;
    cout << "Node deleted successfully!\n";
}

// Display list
void dllDisplayList() {
    clearScreen(); setBeautifulColor();
    if(!dllHead) {
        cout << "List is empty!\n";
        return;
    }
    DLLNode* temp = dllHead;
    cout << "DLL: ";
    while(temp) {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << "\n";
}
struct CLLNode {
    int data;
    CLLNode* next;
};

// Head pointer for CLL
CLLNode* cllHead = nullptr;

// Insert at end
void cllInsertNode() {
    clearScreen(); setBeautifulColor();
    int value;
    cout << "Enter value to insert: ";
    cin >> value;

    CLLNode* newNode = new CLLNode{value, nullptr};
    if(!cllHead) {
        cllHead = newNode;
        newNode->next = cllHead;
    } else {
        CLLNode* temp = cllHead;
        while(temp->next != cllHead) temp = temp->next;
        temp->next = newNode;
        newNode->next = cllHead;
    }

    cout << "Node inserted successfully!\n";
}

// Delete by value
void cllDeleteNode() {
    clearScreen(); setBeautifulColor();
    int value;
    cout << "Enter value to delete: ";
    cin >> value;

    if(!cllHead) {
        cout << "List is empty!\n";
        return;
    }

    CLLNode *current = cllHead, *prev = nullptr;
    do {
        if(current->data == value) {
            if(prev) prev->next = current->next;
            else { // deleting head
                CLLNode* temp = cllHead;
                while(temp->next != cllHead) temp = temp->next;
                temp->next = cllHead->next;
                cllHead = cllHead->next;
            }
            delete current;
            cout << "Node deleted successfully!\n";
            return;
        }
        prev = current;
        current = current->next;
    } while(current != cllHead);

    cout << "Value not found!\n";
}

// Display CLL
void cllDisplayList() {
    clearScreen(); setBeautifulColor();
    if(!cllHead) {
        cout << "List is empty!\n";
        return;
    }

    CLLNode* temp = cllHead;
    cout << "CLL: ";
    do {
        cout << temp->data << " ";
        temp = temp->next;
    } while(temp != cllHead);
    cout << "\n";
}


void graphMenu() {
    clearScreen(); setBeautifulColor();
    int choice;

    cout << "\n================ GRAPH ALGORITHMS MENU ================\n";
    cout << "1. BFS\n";
    cout << "2. DFS\n";
    cout << "3. Back to Main Menu\n";
    cout << "Enter choice: ";
    cin >> choice;

    switch(choice) {
        case 1: graphBFSMenu(); break;
        case 2: graphDFSMenu(); break;
        default: cout << "Returning to Main Menu...\n";
    }
}


int main() {
    srand(time(0));
    int choice;
    do {
        clearScreen(); setBeautifulColor();
        cout << "\n================ LOST & FOUND MANAGEMENT SYSTEM ================\n";
        cout << "1. Insertion Algorithms\n";
        cout << "2. Deletion Algorithms\n";
        cout << "3. Searching Algorithms\n";
        cout << "4. Updating Algorithms\n";
        cout << "5. Sorting Algorithms\n";
        cout << "6. Linked List Algorithms\n";
        cout << "7. Stack Algorithms\n";
        cout << "8. Queue Algorithms\n";
        cout << "9. Circular Queue Algorithms\n";
        cout << "10. Doubly Linked List\n";
        cout << "11. Circular Linked List\n";
        cout << "12. Stack Using Linked List\n";
        cout << "13. Queue Using Linked List\n";
        cout << "14. Tree Algorithms\n";
        cout << "15. Graph Algorithms\n";
        cout << "16. Exit\n";

        cout << "Enter your choice: ";
        cin >> choice;

        switch(choice) {
            case 1: insertionMenu(); break;
            case 2: deletionMenu(); break;
            case 3: searchingMenu(); break;
            case 4: updatingMenu(); break;
            case 5: sortingMenu(); break;
            case 6: linkedListMenu(); break;
            case 7: stackMenu(); break;
            case 8: queueMenu(); break;
            case 9: circularQueueMenu(); break;
            case 10: dllMenu(); break;
            case 11: cllMenu(); break;
            case 12: llStackMenu(); break;
            case 13: llQueueMenu(); break;
            case 14: treeMenu(); break;
            case 15: graphMenu(); break;
            case 16: cout << "Exiting System... Goodbye!\n"; break;
            default: cout << "Invalid choice! Try again.\n";
        }

        if(choice != 16) {
            cout << "\nPress Enter to continue...";
            cin.ignore(); cin.get(); 
        }

    } while(choice != 16);

    return 0;
}
