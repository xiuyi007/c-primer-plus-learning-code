#include "queue.h"

Queue::Queue(int size):qsize(size)
{
    items = 0;
    front = rear = nullptr;
}

bool Queue::dequeue(Item& item)
{
    if (isempty())
    {
        return false;
    }
    item = front->item;
    Node* tmp = front;
    front = front->next;
    delete tmp;
    if (items = 0)
    {
        rear = nullptr;
    }
    return true;
}

bool Queue::enqueue(const Item& item)
{
    if (isfull())
    {
        return false;
    }
    Node* tmp = new Node;
    tmp->item = item;
    tmp->next = nullptr;
    items++;
    if (front == nullptr)
    {
        front = tmp;
    }
    else
    {
        rear->next = tmp;
    }
    rear = tmp;
    return true;
}

int Queue::count() const
{
    return items;
}

bool Queue::isempty() const
{
    return items == 0;
}

bool Queue::isfull() const
{
    return items == qsize;
}

Queue::~Queue()
{
}
