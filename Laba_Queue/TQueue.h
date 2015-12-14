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

	//����������� �����������
	TQueue(const TQueue& C)
    {
	    MaxSize = C.MaxSize;
		end = C.end;
		len = C.len;
	    mas = new T[MaxSize];
	    for(int i = 0; i<len; i++)
		    mas[i] = C.mas[i];
    }

	//���������� �������� "="
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

	//������� ������������ �������
    bool TQueue::Empty() {return end = -1;}

	//������� ����������� ������� ������
    bool TQueue::IsEmpty()
	{
		if (end == -1) return(true)
		else return(false);
	}

	//������� ����������� ������� ������������� �������
    bool TQueue::IsFull()
	{
		if (end == MaxSize-1) return(true)
		else return(false);
	}

	//������� ������������ �������� �������� � ����� �������
    T TQueue::TEnd()
    {
	    if (end=-1) throw end;
	    return mas[end];
    }

	//������� ������������ �������� �������� � ������ �������
    T TQueue::TBegin()
    {
	    if (end=-1) throw end;
	    return mas[begin];
    }

	//������� ������� ������� � ����� �������
    T TQueue::TGetEnd()
    {
	    if end = -1 throw end;
	    T tmp = mas[end];
	    end--;
		len--;
	    return tmp;
    }

	//������� �������� ������� � ������ �������
    void TQueue::TPushBegin(const T& n)
    {
	    if (end == MaxSize-1) throw end;
	    end++;
		for(int i=end; i>begin; i--)
			mas[i] = mas[i-1];
	    mas[begin]=n;
    }
};

