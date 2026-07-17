//
// Created by satyamchauhan on 17/07/26.
//
// my first 100 line code in c++
#include"iostream"
struct ListNode {
    int val;
    ListNode * next;
    ListNode() : val(0) , next(nullptr){};
    ListNode(int x) : val(x) , next(nullptr){};
    ListNode(int x , ListNode * next ) : val(x) , next(next){};
};
class LinkedList {
public:
    ListNode * list1 = nullptr;
    ListNode * list2 = nullptr;
    ListNode * merge(ListNode * list1 , ListNode * list2) {
        ListNode dummy(0);
        ListNode * tail = &dummy;
        while (list1 && list2) {
            if (list1 ->val  <= list2->val) {
                tail->next = list1;
                list1 = list1->next;
            }else {
                tail->next = list2;
                list2 = list2->next;
            }
            tail = tail->next;
        }
        tail ->next = list1 ? list1 : list2;
        return dummy.next;
    }
    void insert(int x, int y) {
        ListNode * node = new ListNode(x);
        ListNode *nodey = new ListNode(y);
        if (!list1) {
            list1 = node;
            return;
        }
        if (!list2) {
            list2 = nodey;
            return ;
        }
        ListNode * temp1  = list1;
        ListNode * temp2 = list2;
        if (y != 0) {
            while (temp2 && temp2->next) {
                temp2 = temp2->next;
            }
            temp2->next = nodey;
        }
        if (x!=0) {
            while (temp1 && temp1->next) {
                temp1 = temp1->next;
            }
            temp1->next = node;
        }
    }
    void print() {
        ListNode * temp1  = list1;
        ListNode * temp2  = list2;
        while (temp1 ) {
            std::cout<<temp1->val;
            temp1 = temp1->next;
        }
        std::cout<<std::endl;
        while (temp2) {
            std::cout<<temp2->val;
            temp2 = temp2->next;
        }
        std::cout<<std::endl;
    }
    ~LinkedList() {
        ListNode * temp1 = list1;
        ListNode * temp2 = list2;
        while (temp1) {
            ListNode * next  = temp1 ->next;
            delete temp1;
            temp1 = next;
        }
        /*while (temp2) {
            ListNode * next  = temp2 ->next;
            delete temp2;
            temp2 = next;
        }*/
    }
};
int main() {
    LinkedList ll;
    std::cout<<"enter 0 in first for list1 if u don't won't to add value in list1 and same for second but will not add in list2"<<std::endl;
    for (int i = 0; i<5 ; i++) {
        int x =0;
        int y = 0;
        std::cin>>x>>y;
        ll.insert(x,y);

    }
    ll.print();
    ll.list1= ll.merge(ll.list1,ll.list2);
    ll.list2 = nullptr;
    ll.print();

}


