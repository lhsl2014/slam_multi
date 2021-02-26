/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
    int len_l1 = 1;
    int len_l2 = 1;
    ListNode* p1 = l1;
    ListNode* p2 = l2;
    while (p1 -> next != NULL)
    {
        len_l1++;
        p1=p1->next;
    }
while (p2 -> next != NULL)
{
    len_l2++;
    p2=p2->next;
}
if (len_l1>len_l2)
{
    for (int i=1;i<=len_l1-len_l2;i++)
    {
        p1 -> next=new ListNode(0);
        p1=p1 -> next;
    }
}
    else 
    {
        for (int i=1;i<=len_l2-len_l1;i++)
        {
            p2 -> next = new ListNode(0);
            p2=p2 -> next;
        }
    }
p1=l1;
p2=l2;
bool flag = false;
ListNode* l3 =new  ListNode(-1);
ListNode* w = l3;
int temp = 0;
while (p1 != NULL && p2 != NULL)
{
   if (flag = true)
    {
        temp = 1 + p1->val + p2 -> val;
    }
    else
    {
        temp = p1->val + p2 -> val;
    }
    w -> next = new ListNode (temp % 10);
    flag = temp >=10?true:false;
    w = w -> next;
    p1 = p1 ->next;
    p2 = p2 ->next;
}
if (flag)
{
    w -> next = new ListNode (1);
    w = w->next;
}
        return l3-> next;
    }
};