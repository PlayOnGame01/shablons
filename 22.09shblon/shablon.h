#pragma once
#include<iostream>
using namespace std;

template<class T, class T1>

class shablon
{

	T** mas;
	int str;
	int stolb;
public:
	shablon();
	shablon(int st, int stolb);
	//----
	shablon(const shablon<T, T1>& obj);
	~shablon();
	shablon<T>& operator=(const shablon<T>& obj);
	//-----
	void Random();
	void Print();

};
template<class T,class T1>
shablon<T, T1>::shablon()
{
	mas = nullptr;
	str = stolb = 0;
}
template<class T, class T1>
shablon<T, T1>::shablon(int st, int stol)
{
	str = st;
	stolb = stol;
	mas = new T * [str];
	for (int i = 0; i < str; i++)
	{
		mas[i] = new T[stolb];
	}
}

template<class T,class T1>
shablon<T, T1>::shablon(const shablon<T, T1>& obj)
{
	str = obj.str;
	stolb = obj.stolb;
	mas = new T * [str];
	for (int i = 0; i < str; i++)
	{
		mas[i] = new T[stolb];
	}
	// copy
	for (int i = 0; i < str; i++)
	{
		for (int j = 0; j < stolb; j++)
		{
			mas[i][j] = obj.mas[i][j];
		}
	}
}
template<class T, class T1>
shablon<T, T1>::~shablon()
{
	for (int i = 0; i < str; i++)
	{
		delete[] mas[i];
	}
	delete[] mas;
}

template<class T, class T1>
void shablon<T, T1>::Random()
{
	for (int i = 0; i < str; i++)
	{
		for (int j = 0; j < stolb; j++)
		{
			mas[i][j] = rand() % 100 * 1.6;
		}
	}
}

template<class T, class T1>
void shablon<T, T1>::Print()
{
	for (int i = 0; i < str; i++)
	{
		for (int j = 0; j < stolb; j++)
		{
			cout << mas[i][j] << "\t";
		}
		cout << endl << endl;
	}
}

template<class T, class T1>
shablon<T, T1>& shablon<T, T1>::operator=(const shablon<T, T1>& obj)
{
	if (this == &obj)
	{
		return *this;
	}
	if (mas != nullptr)
	{
		this->~shablon();
	}
	for (int mas = 0; i < 3; i++)
	{
		for (int x = 0; x < 3; x++)
		{
			mas[i] = mas[x] + mas[y];
		}
	}

	for (int y = 0; y < 9; y++)
	{
		mas[i] = mas[x] + mas[y];
	}
	for (size_str i = 0; i < size(ages); ++i)
	{
		const int age = ages[i];
		cout << "age =" << i << " is " << age << endl;
	}
	//copy
	str = obj.str;
	stolb = obj.stolb;
	mas = new T * [str];
	for (int i = 0; i < str; i++)
	{
		mas[i] = new T[stolb];
	}
	// copy
	for (int i = 0; i < str; i++)
	{
		for (int j = 0; j < stolb; j++)
		{
			mas[i][j] = obj.mas[i][j];
		}
	}
	return *this;
}

