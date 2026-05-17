725. Split Linked List in Parts

Given the head of a singly linked list and an integer k, split the linked list into k consecutive linked list parts.
The length of each part should be as equal as possible: no two parts should have a size differing by more than one. This may lead to some parts being null.
The parts should be in the order of occurrence in the input list, and parts occurring earlier should always have a size greater than or equal to parts occurring later.
Return an array of the k parts.

Example 1:


class Solution {
public:
    vector<ListNode*> splitListToParts(ListNode* head, int k) {
        ListNode* temp =head;
        int n=0;
        while(temp){
            temp=temp->next;
            n++;
        }
        vector<ListNode*> ans;
        int size=n/k;
        int rem = n%k;
        temp =head;
        while(temp!=NULL){
            ListNode* c =new ListNode(100);
            ListNode* tempC =c;
            int s= size;
            if(rem>0) s++;
            rem--;
            for(int i=1;i<=s;i++){
                tempC->next=temp;
                temp=temp->next;
                tempC=tempC->next;
            }
            tempC->next=NULL;
            ans.push_back(c->next);
        }
        if(ans.size()<k){
            int extra=k-ans.size();
            for(int i=0;i<extra;i++){
                ans.push_back(NULL);
            }
        }
        return ans;
    }
};









2058. Find the Minimum and Maximum Number of Nodes Between Critical Points

A critical point in a linked list is defined as either a local maxima or a local minima.
A node is a local maxima if the current node has a value strictly greater than the previous node and the next node.
A node is a local minima if the current node has a value strictly smaller than the previous node and the next node.
Note that a node can only be a local maxima/minima if there exists both a previous node and a next node.
Given a linked list head, return an array of length 2 containing [minDistance, maxDistance] where minDistance is the minimum distance between any two distinct critical points and maxDistance is the maximum distance between any two distinct critical points. If there are fewer than two critical points, return [-1, -1].

Example 1:
Input: head = [3,1]
Output: [-1,-1]
Explanation: There are no critical points in [3,1].


class Solution {
public:
    vector<int> nodesBetweenCriticalPoints(ListNode* head) {
        int fidx=-1;
        int sidx=-1;
        int idx = 1;
        ListNode* a =head;
        ListNode* b =head->next;
        ListNode* c =head->next->next;
        while(c){
            if(b->val < a->val && b->val < c->val || b->val > a->val && b->val > c->val){
                if(fidx==-1) fidx=idx;
                else sidx=idx;
            }
            a=a->next;
            b=b->next;
            c=c->next;
            idx++;
        }
        if(sidx == -1) return {-1,-1};
        int maxd= sidx -fidx;
        int mind =INT_MAX;
          fidx=-1;
         sidx=-1;
        idx = 1;
         a =head;
         b =head->next;
        c =head->next->next;
        while(c){
            if(b->val < a->val && b->val < c->val || b->val > a->val && b->val > c->val){
                fidx=sidx;
                sidx=idx;
                if(fidx!=-1){
                int d = sidx-fidx;
                mind=min(mind,d);
                }
            }
            a=a->next;
            b=b->next;
            c=c->next;
            idx++;
        }
        return {mind,maxd};
    }
};

//Alternate method in one loop
class Solution {
public:
    vector<int> nodesBetweenCriticalPoints(ListNode* head) {
        int fidx=-1;//firstidx
        int sidx=-1;//secondidx
        int idx = 1;//idx
        int stidx =-1;//startingidx
        int eidx = -1;//endingidx
        int mind =INT_MAX;
        ListNode* a =head;
        ListNode* b =head->next;
        ListNode* c =head->next->next;
        while(c){
            if(b->val < a->val && b->val < c->val || b->val > a->val && b->val > c->val){
                //maxd
                if(fidx==-1) fidx=idx;
                else sidx=idx;
                //mind
                stidx=eidx;
                eidx=idx;
                if(sidx!=-1){
                    int d=eidx-stidx;
                    mind=min(mind,d);
                }
            }
            a=a->next;
            b=b->next;
            c=c->next;
            idx++;
        }
        if(sidx == -1) return {-1,-1};
        int maxd= sidx -fidx;
        return {mind,maxd};
    }
};








