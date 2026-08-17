class Solution {
public:
    ListNode* sortList(ListNode* head) {
        if (head == nullptr) {
            return nullptr;
        }

        vector<int> arr;
        ListNode* temp = head;
        
        // 1. Extract all values into the vector
        while (temp != nullptr) {
            arr.push_back(temp->val);
            temp = temp->next; // Advance the pointer!
        }
        
        // 2. Sort the vector
        sort(arr.begin(), arr.end());
        
        // 3. Put the sorted values back into the original linked list
        temp = head; // Reset temp back to the start
        int i = 0;
        
        while (temp != nullptr) {
            temp->val = arr[i]; // Overwrite the old value with the sorted value
            i++;
            temp = temp->next;  // Advance the pointer!
        }
        
        return head; // Return the original head, which now contains sorted values
    }
};