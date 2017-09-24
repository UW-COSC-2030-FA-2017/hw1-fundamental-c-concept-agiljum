// Ana Giljum
// 24.9.17
// COSC2030
// HW 1 Part 2

#pragma once

template<typename T>
class Collection {

private:
	int size;
	T *object;

public:
	Collection()
	{
		size = 10;
		object = new T[size];
	}

	bool isEmpty()
	{
		if (size == 0)
		{
			return true;
		}
		else
		{
			return false;
		}
	}

	void makeEmpty()
	{
		for (int i = 0; i < size; i++)
		{
			object[i] = '\0';
		}
		size = 0;
	}

	void insert(T thing)
	{
		size++;
		object[size - 1] = thing;
	}

	void remove(T thing)
	{
		if (!notContained(thing))
		{
			int pos;
			for (int i = 0; i < size; i++)
			{
				if (object[i] == thing)
				{
					pos = i;
					object[pos] = object[pos + 1];
					size--;
				}
			}
		}
	}

	void removeRandom()
	{
		if (size == 1)
		{
			makeEmpty();
		}
		else
		{
			int randIndex = rand() % size;
			for (int i = randIndex; i < size; i++)
			{
				object[i] = object[i + 1];
			}
			object[size - 1] = '\0';
		}
	}

	bool notContained(T thing)
	{
		int pos = -1;
		for (int i = 0; i < size; i++)
		{
			if (object[i] == thing)
			{
				pos = i;
			}
		}
		if (pos == -1) 
		{
			return true;
		}
		else
		{
			return false;
		}
	}
};
