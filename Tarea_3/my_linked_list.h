//
// Created by rudri on 9/12/2020.
//

#ifndef POO2_UNIT2_WEEK_3_2020_2_MY_LINKED_LIST_H
#define POO2_UNIT2_WEEK_3_2020_2_MY_LINKED_LIST_H

#include<iostream>
using namespace std;

namespace utec{
    template<typename T>
    struct node{
        T val;
        node* next_node=nullptr;
        node(T value): val{value}{};
        T value() const{
            return val;
        }
        node* next() const{
            return next_node;
        }
    };

    template<typename P>
    class linked_list{
        node<P>* head = nullptr;
        node<P>* tail = nullptr;
        size_t tam = 0;
    public:
        linked_list() = default;
        int i=0;

        template<typename ... Args>
        linked_list(Args ... args){
            (push_back(args), ...);
        }

        // void push_front(int value);
        void push_back(P value){
            if(head == nullptr){
                head = new node<P>(value);
                tail = head;
            }else{
                tail->next_node = new node<P>(value);
                tail = tail->next_node;
            }
            tam++;
        }

        node<P>* begin(){
            return head;
        }
        node<P>* first(){
            return head;
        }
        node<P>* last(){
            return tail;
        }
        void insert(size_t index, P value){
            if(index > tam)
                return;
            
            if(tam == 0 || index == tam){//si esta vacio o si insertaremos despues del ultimo
                push_back(value);
                return;
            }else if(index == 0){//si insertaremos al inicio
                node<P>* new_node = new node<P>(value);
                new_node->next_node = head;
                head = new_node;
            }else{
                node<P>* current = head;
                for (size_t i = 0; i < index-1; ++i)
                    current = current->next_node;
                
                node<P>* new_node = new node<P>(value);
                new_node->next_node = current->next_node;
                
                current->next_node = new_node;
            }
            tam++;
        }
        // void pop_front();
        void pop_back(){
            if(head == nullptr){
                return;
            }else if(head == tail){
                delete head;
                head = nullptr;
                tail = nullptr;
            }else{
                node<P>* current = head;
                while(current->next_node != tail){
                    current = current->next_node;
                }
                delete tail;
                tail = current;
                tail->next_node = nullptr;
            }
            tam--;
        }
        // void erase(size_t index);
        // int& item(size_t index);
        // const int& item(size_t index) const;
        size_t size() const{
            return tam;
        }
        // friend ostream& operator <<(ostream& os, const linked_list& obj);
    };
}




#endif //POO2_UNIT2_WEEK_3_2020_2_MY_LINKED_LIST_H
