class Solution {
public:
    ListNode* removeElements(ListNode* head, int val) {

        ListNode* prev = NULL;
        ListNode* curr = head;

        while (curr != NULL) {

            if (curr->val == val) {

                // If deleting the head node
                if (prev == NULL) {
                    head = curr->next;
                }
                else {
                    // Skip the current node
                    prev->next = curr->next;
                }

                curr = curr->next;
            }
            else {
                // Move both pointers
                prev = curr;
                curr = curr->next;
            }
        }

        return head;
    }
};


// class Solution {
// public:
//     ListNode* removeElements(ListNode* head, int val) {
//         // Remove matching nodes from the beginning
//         while (head != NULL && head->val == val) {
//             head = head->next;
//         }

//         ListNode* prev = NULL;
//         ListNode* curr = head;
//         while(curr!=NULL && curr->next!=NULL){
//             if(curr->next->val == val){
//                 curr->next = curr->next->next;
//             } else{
//                 curr = curr->next;
//             }
//         }

//         return head;
//     }
// };