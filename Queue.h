#ifndef QUEUEWITHLINKEDLIST_QUEUE_H
#define QUEUEWITHLINKEDLIST_QUEUE_H

#include <iostream>
#include <stdexcept>
#include "Node.h"

template<typename T>
class Queue {
private:
    QueueNode<T>* frontNode;
    QueueNode<T>* rearNode;
public:
    explicit Queue();
    Queue(const Queue<T>&) = delete;
    Queue& operator=(const Queue<T>&) = delete;
    Queue(Queue<T>&&) noexcept;
    Queue<T>& operator=(Queue<T>&&) noexcept;
    ~Queue();

    void enqueue(const T&);
    void dequeue();
    [[nodiscard]] bool empty() const;
    T front() const;
    T back() const;

    template<typename U>
    friend std::ostream & operator<<(std::ostream &, const Queue<U>&);

private:
    void clear() noexcept;
};


#include "Queue.tpp"

#endif //QUEUEWITHLINKEDLIST_QUEUE_H
