#ifndef QUEUE_H
#define QUEUE_H

#include <iostream>
using namespace std;

template <class T>
class Queue
{
private:
    T *arr;       // Array to store queue elements
    int front;    // Front points to the front element in the queue
    int rear;     // Rear points to the last element in the queue
    int capacity; // Maximum number of elements the queue can hold
    int size;     // Current size of the queue

public:
    // Constructor and Destructor
    Queue(int capacity);
    ~Queue();

    // Queue operations
    void enqueue(T value); // Add element to the queue
    int dequeue();         // Remove element from the queue
    int peekFront() const; // Get the front element
    bool isEmpty() const;  // Check if the queue is empty
    bool isFull() const;   // Check if the queue is full
    int getSize() const;   // Get the current size of the queue
    void display() const;  // Display the elements in the queue
};

#endif
