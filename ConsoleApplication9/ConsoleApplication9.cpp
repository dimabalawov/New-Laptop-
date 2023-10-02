

#include <iostream>
using namespace std;

class Mouse
{
    string name;
public:
	Mouse()
	{
		name = "Default Mouse";
	}
	Mouse(const char* N)
	{
		name = N;
	}
	Mouse(Mouse& obj)
	{
		name = obj.name;
	}
	void Show()
	{
		cout << name << endl;
	}
};
class Charger
{
	int power;
public:
	Charger()
	{
		power = 500;
	}
	Charger(int n)
	{
		power = n;
	}
	Charger(Charger& obj)
	{
		power = obj.power;
	}
	void Show()
	{
		cout <<"Charger: " << power << "V" << endl;
	}
};
class CPU
{
	string name;
public:
	CPU()
	{
		name = "Default CPU";
	}
	CPU(string n)
	{
		name = n;
	}
	CPU(CPU& a)
	{
		name = a.name;
	}
	void Show()
	{
		cout << name << endl;
	}
};
class RAM
{
	int gig;
public:
	RAM()
	{
		gig = 8;
	}
	RAM(int n)
	{
		gig = n;
	}
	RAM(RAM& obj)
	{
		gig = obj.gig;
	}
	void Show()
	{
		cout <<"RAM: " << gig << "gb" << endl;
	}
};
class SSD
{
	int gig;
public:
	SSD()
	{
		gig = 512;
	}
	SSD(int n)
	{
		gig = n;
	}
	SSD(SSD& obj)
	{
		gig = obj.gig;
	}
	void Show()
	{
		cout <<"SSD: " <<  gig << "gb" << endl;
	}
};
class Display
{
	double inch;
public:
	Display()
	{
		inch = 15.6;
	}
	Display(double n)
	{
		inch = n;

	}
	Display(Display& obj)
	{
		inch = obj.inch;
	}
	void Show()
	{
		cout <<"Display: " << inch << "\"" << endl;
	}
};
class Laptop
{
	Mouse* mouse;
	Charger* charger;
	CPU cpu;
	SSD ssd;
	RAM ram;
	Display display;
	class Keyboard
	{
		bool isLed;
	public:
		Keyboard()
		{
			isLed = 0;
		}
		Keyboard(bool s)
		{
			isLed = s;
		}
		Keyboard(Keyboard& k)
		{
			isLed = k.isLed;
		}
		void Show()
		{
			cout << "Ledlight: " << (isLed ? "Yes" : "No");
		}
	};
	Keyboard keyboard;
public:
	Laptop(Mouse* m, Charger* c) :mouse(m), charger(c)
	{
	}
	Laptop(Mouse* m, Charger* c, string cp, int ss, int r, int d, bool k) :mouse(m), charger(c)
	{
		cpu = cp;
		ssd = ss;
		ram = r;
		display = d;
		keyboard = k;
	}
	void Show()
	{
		mouse->Show();
		charger->Show();
		cpu.Show();
		ssd.Show();
		ram.Show();
		display.Show();
		keyboard.Show();
	}

};
int main()
{
	Mouse b;
	Charger c;
	Laptop a(&b,&c);
	a.Show();
}
//Класс ноутбук.Связь сильная либо слабая.
//Сильная связь :
//Процессор
//Оперативная память
//ССД
//Экран
//Слабая связь :
//Мышка
//Зарядка
//Вложенные классы :
//Клавиатура
