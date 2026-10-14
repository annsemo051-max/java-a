#include <iostream>
using namespace std;

#define MAX 5

int queue[MAX];
int front = -1;
int rear = -1;

// Function to delete an element
int dequeue()
{
    if (front == -1 || front > rear)
    {
        cout << "Queue is empty!" << endl;
        front = rear = -1;
        return -1;
    }
    else
    {
        int x = queue[front];

        front++;

        if (front > rear)
        {
            front = rear = -1;
        }

        cout << x << " has been deleted from the queue." << endl;

        return x;
    }
}

// Function to add an element
void enqueue(int x)
{
    if (rear == MAX - 1)
    {
        cout << "Queue is full!" << endl;
    }
    else
    {
        if (front == -1)
            front = 0;

        rear++;
        queue[rear] = x;

        cout << x << " has been added to the queue." << endl;
    }
}

int main()
{
    // Adding elements
    enqueue(10);
    enqueue(20);
    enqueue(30);
    enqueue(40);
    enqueue(50);

    cout << "\nDeleting elements:\n";

    // Deleting elements
    dequeue();
    dequeue();
    dequeue();
    dequeue();
    dequeue();

    return 0;
}
