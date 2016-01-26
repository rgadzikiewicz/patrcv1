
#include <iostream>
#include <conio.h>
#include <string>

class Ksztalt1
{
public:
	virtual ~Ksztalt1()
	{ }

	virtual void rysuj1() = 0; // metoda czysto wirtualna
};

class Ksztalt2
{
public:
	virtual ~Ksztalt2()
	{ }

	virtual void rysuj2() // metoda wirtualna
	{
		std::cout << "Zostanie przesloniete przez prostokat i trojkat" << std::endl;
	}
};

class Kolo
	: public Ksztalt1
{
public:
	virtual void rysuj1()
	{
		std::cout << "Rysuje kolo" << std::endl;
	}
};

class Kwadrat
	: public Ksztalt1
{
public:
	virtual void rysuj1()
	{
		std::cout << "Rysuje kwadrat" << std::endl;
	}
};

class Prostokat
	: public Ksztalt2
{
public:
	virtual void rysuj2()
	{
		std::cout << "Rysuje prostokat" << std::endl;
	}
};

class Trojkat
	: public Ksztalt2
{
public:
	virtual void rysuj2()
	{
		std::cout << "Rysuje trojkat" << std::endl;
	}
};

int main()
{
	Ksztalt1 *a = new Kolo, *b = new Kwadrat;
	Ksztalt2 *c = new Prostokat, *d = new Trojkat;

	//----------------- arytmetyka wskaznikow ------------------------------
	int q = 1;
	int *wsk;
	wsk = &q;
	*wsk += 1;
	std::cout << "\nTeraz wsk = " << *wsk << std::endl;
	//----------------------------------------------------------------------

	for (int i = 0; i < 4; i++)
	{
		a->rysuj1();
	}

	int k = 0;
	while (k < 3)
	{
		b->rysuj1();
		k++;
	}

	int j = 0;
	do
	{
		c->rysuj2();
		j++;
	} while (j < 2);

	d->rysuj2();

	//----------------------------- konwersja typow -----------------------------
	std::string str("witaj");
	std::cout << str.c_str() << std::endl;
	//---------------------------------------------------------------------------

	delete a;
	delete b;
	delete c;
	delete d;

	getch();
	return 0;
}


