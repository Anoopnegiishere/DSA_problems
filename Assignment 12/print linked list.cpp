#include <bits/stdc++.h>

using namespace std;

// Complete the printLinkedList function below.

/*
 * For your reference:
 *
 * SinglyLinkedListNode {
 *     int data;
 *     SinglyLinkedListNode* next;
 * };
 *
 */
void printLinkedList(SinglyLinkedListNode* head) {
if (head == NULL) {
        return;
    }
    
    cout << head->data << endl;
    printLinkedList(head->next);
}
