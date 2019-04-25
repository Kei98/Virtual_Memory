#ifndef QUEUE_H
#define QUEUE_H

#include "node.h"

template<class T>

class Queue
{
private:
    Node<T>* first;
    Node<T>* last;
    int count;
public:
    Queue(void)
    {
        first = NULL;
        last = NULL;
        count = 0;
    }

    ~Queue(void)
    {
        while(!isEmpty())
            Dequeue();
    }

    void Enqueue(T element)
    {
        Node<T>* tmp = new Node<T>();
        tmp->setData(element);
        tmp->setNext(NULL);

        if (isEmpty()) {
            first = last = tmp;
        }
        else {
            last->setNext(tmp);
            last = tmp;
        }
        count++;
    }

    T Dequeue(void)
    {
        if ( isEmpty() )
            cout << "Queue is empty" << endl;
        T ret = first->getData();
        Node<T>* tmp = first;
        first = first->getNext();
        count--;
        delete tmp;
        return ret;
    }

    T First(void)
    {
        if (isEmpty())
            cout << "Queue is empty" << endl;
        return first->getData();
    }

    int Size(void)
    {
        return count;
    }

    bool isEmpty(void)
    {
        return count == 0 ? true : false;
    }

};

#endif // QUEUE_H
