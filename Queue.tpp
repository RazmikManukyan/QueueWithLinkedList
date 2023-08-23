#include "Queue.h"

template<typename T>
Queue<T>::Queue()
        :frontNode(nullptr)
        ,rearNode(nullptr)
{
}

template<typename T>
Queue<T>::Queue(Queue<T>&& oth) noexcept
        :frontNode(oth.frontNode)
        ,rearNode(oth.rearNode)
{
    oth.frontNode = nullptr;
    oth.rearNode = nullptr;
}

template<typename T>
Queue<T>& Queue<T>::operator=(Queue<T>&& oth) noexcept{
    if(this != &oth) {
        clear();
        this->frontNode = oth.frontNode;
        this->rearNode = oth.rearNode;
        oth.frontNode = nullptr;
        oth.rearNode = nullptr;
    }
    return *this;
}

template<typename T>
Queue<T>::~Queue() {
    clear();
}

template<typename T>
void Queue<T>::enqueue(const T &val) {
    auto* newNode = new QueueNode<T>(val);
    if(empty()) {
        frontNode = newNode;
        rearNode = newNode;
    } else {
        rearNode->next = newNode;
        rearNode = newNode;
    }
}

template<typename T>
void Queue<T>::dequeue() {
    if(empty()) {
        return;
    }
    QueueNode<T>* tmp = frontNode;
    frontNode = frontNode->next;
    delete tmp;
}

template<typename T>
bool Queue<T>::empty() const {
    return frontNode == nullptr;
}

template<typename T>
T Queue<T>::front() const {
    if(empty()) {
        throw std::runtime_error("Queue i empty!");
    }
    return frontNode->data;
}

template<typename T>
T Queue<T>::back() const {
    if(empty()) {
        throw std::runtime_error("Queue i empty!");
    }
    return rearNode->data;
}

template<typename T>
void Queue<T>::clear() noexcept {
    while(frontNode != rearNode) {
        QueueNode<T>* tmp = frontNode;
        frontNode = frontNode->next;
        delete tmp;
    }
    frontNode = nullptr;
    rearNode = nullptr;
}

template<typename U>
std::ostream &operator<<(std::ostream &os, const Queue<U> &queue) {
    QueueNode<U>* curr = queue.frontNode;
    while(curr != nullptr) {
        os << curr->data << " ";
        curr = curr->next;
    }
    return os;
}