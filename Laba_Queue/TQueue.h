#pragma once

template <class T>
class TQueue
{
	int begin, end, len, MaxSize;
	T* mas;
public:
	TQueue(int _maxsize = 100)
	{
		MaxSize = _maxsize;
		mas = new T[MaxSize];
		begin = 0;
		end = -1;
		len = 0;
	}

	~TQueue()
	{
		delete[] mas;
	}

	//Конструктор Копирования
	TQueue(const TQueue& C)
    {
	    MaxSize = C.MaxSize;
		end = C.end;
		len = C.len;
	    mas = new T[MaxSize];
	    for(int i = 0; i<len; i++)
		    mas[i] = C.mas[i];
    }

	//Перегрузка операции "="
    TQueue& TQueue::operator=(const TQueue& S)
    {
	    if (MaxSize != S.MaxSize)
	    {
		    delete[] mas;
		    MaxSize = S.MaxSize;
		    mas = new T[MaxSize];
	    }
	    end = S.end;
		begin = S.begin;
		len = S.len
	    for (int i=0; i<len; i++)
		    mas[i] = S.mas[i];
	    return (*this);
    }

	//Функция опустошающая Очередь
    bool TQueue::Empty() {return end = -1;}

	//Функция проверяющая Очередь пустой
    bool TQueue::IsEmpty()
	{
		if (end == -1) return(true)
		else return(false);
	}

	//Функция проверяющая Очередь максимального размера
    bool TQueue::IsFull()
	{
		if (end == MaxSize-1) return(true)
		else return(false);
	}

	//Функция возвращающая значение элемента в конце Очереди
    T TQueue::TEnd()
    {
	    if (end=-1) throw end;
	    return mas[end];
    }

	//Функция возвращающая значение элемента в начале Очереди
    T TQueue::TBegin()
    {
	    if (end=-1) throw end;
	    return mas[begin];
    }

	//Функция берущая элемент с конца очереди
    T TQueue::TGetEnd()
    {
	    if end = -1 throw end;
	    T tmp = mas[end];
	    end--;
		len--;
	    return tmp;
    }

	//Функция кладущая элемент в начало очереди
    void TQueue::TPushBegin(const T& n)
    {
	    if (end == MaxSize-1) throw end;
	    end++;
		for(int i=end; i>begin; i--)
			mas[i] = mas[i-1];
	    mas[begin]=n;
    }
};

