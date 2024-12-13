#include "Queue.h"

int main()
{
     // Create a queue of capacity 5
     Queue<int> q(5);

     // Enqueue elements
     q.enqueue(10);
     q.enqueue(20);
     q.enqueue(30);
     q.enqueue(40);
     q.enqueue(50);

     // Try to enqueue when full
     q.enqueue(60);

     // Display queue
     cout << "Queue: ";
     q.display();

     // Dequeue an element
     cout << "Dequeued: " << q.dequeue() << endl;

     // Display queue after dequeue
     cout << "Queue after dequeue: ";
     q.display();

     // Enqueue another element
     q.enqueue(60);

     // Display queue after enqueue
     cout << "Queue after enqueue: ";
     q.display();

     return 0;
}
