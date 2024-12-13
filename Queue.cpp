#ifndef QUEUE_CPP
#define QUEUE_CPP
#include "Queue.h"

template <class T>
Queue<T>::Queue(int capacity)
{
    this->capacity = capacity;
    arr = new int[capacity];
    front = -1;
    rear = -1;
    size = 0;
}

template <class T>
Queue<T>::~Queue()
{
    delete[] arr;
}

template <class T>
void Queue<T>::enqueue(T value)
{
    if (isFull())
        throw "Queue is full. Cannot enqueue.";

    if (front == -1)
        front = 0;

    rear = (rear + 1) % capacity;
    arr[rear] = value;
    size++;
}

template <class T>
int Queue<T>::dequeue()
{
    if (isEmpty())
        throw "Queue is empty. Cannot dequeue.";

    int value = arr[front];
    if (front == rear)
    {
        front = -1;
        rear = -1;
    }
    else
        front = (front + 1) % capacity;
    size--;
    return value;
}

template <class T>
int Queue<T>::peekFront() const
{
    if (isEmpty())
    {
        throw "Queue is empty.";
    }
    return arr[front];
}

template <class T>
bool Queue<T>::isEmpty() const
{
    return size == 0;
}

template <class T>
bool Queue<T>::isFull() const
{
    return size == capacity;
}

template <class T>
int Queue<T>::getSize() const
{
    return size;
}

template <class T>
void Queue<T>::display() const
{
    if (isEmpty())
    {
        throw "Queue is empty.";
        return;
    }

    int i = front;
    while (i != rear)
    {
        cout << arr[i] << " ";
        i = (i + 1) % capacity;
    }
    cout << arr[rear] << endl;
}

template class Queue<int>;
#endif