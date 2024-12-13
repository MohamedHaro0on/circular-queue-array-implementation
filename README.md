# Queue Implementation in C++

This project demonstrates a simple implementation of a circular queue using templates in C++. The queue supports standard operations like enqueue, dequeue, checking if it is full or empty, and retrieving the front element.

## Table of Contents

- [Features](#features)
- [Files](#files)
- [Usage](#usage)
- [How It Works](#how-it-works)
- [Compiling and Running](#compiling-and-running)
- [Example Output](#example-output)

## Features

- Generic queue implementation using C++ templates.
- Circular buffer to optimize space usage.
- Functions to enqueue, dequeue, check size, and display queue elements.
- Handles edge cases such as empty or full queues gracefully.

## Files

1. **Queue.h**: Header file that defines the `Queue` class template.
2. **Queue.cpp**: Implementation file for the `Queue` class template.
3. **main.cpp**: Test file to demonstrate the usage of the queue.

## Usage

The queue is implemented as a template class, making it reusable for any data type. The following operations are supported:

- **enqueue(T value)**: Adds an element to the queue.
- **dequeue()**: Removes an element from the front of the queue.
- **peekFront()**: Retrieves the front element without removing it.
- **isEmpty()**: Checks if the queue is empty.
- **isFull()**: Checks if the queue is full.
- **getSize()**: Returns the current size of the queue.
- **display()**: Prints all elements in the queue.

## How It Works

The `Queue` class uses a circular buffer technique:

- The `front` and `rear` indices keep track of the first and last elements in the queue, respectively.
- The modulo operator (`%`) ensures that the indices wrap around when they reach the end of the underlying array.
- This allows efficient use of the allocated memory for the queue.

## Compiling and Running

1. Compile the project using a C++ compiler:

   ```bash
   g++ -std=c++17 main.cpp -o queue
   ```

2. Run the compiled program:

   ```bash
   ./queue
   ```

## Example Output

Below is a sample output of the program:

```
Queue: 10 20 30 40 50
Dequeued: 10
Queue after dequeue: 20 30 40 50
Queue after enqueue: 20 30 40 50 60
```

## Notes

- **Error Handling**: The program throws exceptions for invalid operations like dequeueing from an empty queue or enqueueing to a full queue.
- **Templates**: The implementation is designed to work with any data type by leveraging C++ templates.

[AUTHOR]
Mohamed Ahmed Ali Haroon .
