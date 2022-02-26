/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    bool isPalindrome(ListNode* head) {
        int n = 1;
        ListNode* temp = head;
        while(temp->next != NULL){
            n++;
            temp = temp->next;
        }
        //cout<<n;
        int arr[n];
        temp = head;
        for(int i = 0; i < n; i++){
            arr[i] = temp->val;
            temp=temp->next;
        }
        for(int i = 0; i < n; i++){
            //cout<<"k"<<i<<" "<<n-i-1;
            if(arr[i] != arr[n-i-1])return false;
        }
        cout<<endl;
        return true;
    }
};