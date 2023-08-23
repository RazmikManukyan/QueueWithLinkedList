#ifndef QUEUEWITHLINKEDLIST_NODE_H
#define QUEUEWITHLINKEDLIST_NODE_H

template<typename T>
struct QueueNode {
    explicit QueueNode(const T& val, QueueNode<T>* n = nullptr)
            :data(val)
            ,next(n)
    {
    }

    T data;
    QueueNode<T>* next;
};

#endif //QUEUEWITHLINKEDLIST_NODE_H
