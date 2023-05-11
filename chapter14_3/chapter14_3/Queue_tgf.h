#pragma once

template <typename T>
class Queue_tgf
{
public:
	Queue_tgf();
	bool Dequeue(T& con);
	bool Enqueue(const T& elem);
	bool IsEmpty() const;
	bool IsFull() const;
	int size() const { return qSize; }
private:
	enum { QUEUE_SIZE = 10 };
	int qSize;
	int rear, tail;
	T data[QUEUE_SIZE]; 
};

template<typename T>
inline Queue_tgf<T>::Queue_tgf()
{
	qSize = QUEUE_SIZE;
	rear = tail = 0;
}


template<typename T>
inline bool Queue_tgf<T>::Dequeue(T& con)
{
	if (IsEmpty())
	{
		return false;
	}
	con = data[rear];
	rear = (rear + 1) % qSize;
	return true;
}

template<typename T>
inline bool Queue_tgf<T>::Enqueue(const T& elem)
{
	if (IsFull())
	{
		return false;
	}
	tail = (tail + £±) % qSize;
	data[tail] = elem;
	return true;
}

template<typename T>
inline bool Queue_tgf<T>::IsEmpty() const
{
	if (rear == tail)
	{
		return true;
	}
	return false;
}

template<typename T>
inline bool Queue_tgf<T>::IsFull() const
{
	if ((tail + 1) % qSize == rear)
		return true;
	return false;
}

