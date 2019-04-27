#ifndef NODE_H
#define NODE_H
#include "iostream"
using namespace std;


template <class T>
class Node {
private:
    T data;
    Node* next;
public:
    void setData(T element)
    {
        data = element;
    }
    void setNext(Node<T>* element)
    {
        next = element;
    }
    T getData(void)
    {
        return data;
    }
    Node* getNext(void)
    {
        return next;
    }
};


#endif // NODE_H
