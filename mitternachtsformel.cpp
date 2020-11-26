#include <iostream>
#include <cmath>
int main() {
    std::cout << "wir lösen die gleichung ax^2 + bx + c." << std::endl;
	double a;
	double b;
	double c;
	std::cout << "a=" << std::endl;
	std::cin >> a;
	std::cout << "b=" << std::endl;
	std::cin >> b;
	std::cout << "c=" << std::endl;
	std::cin >> c;
	
	double x; 
	double y;
	double z;
	
	x = (-b + sqrt(b*b - 4*a*c))/(2*a) ;
	y = (-b - sqrt(b*b - 4*a*c))/(2*a);
	z = -c/b;
	
	if( a== 0, b==0)
	{ 
		std::cout << "die Gleichung ist konstant und aht keine Nullstelle" << std::endl;
	}
	else if( a==0)
	{
		std::cout << z << "ist Nullstelle" << std::endl;
	}
	else if(b*b - 4*a*c < 0)
	{ 
		std::cout << a << "x^2 + " << b << "x + " << c << " hat keine Nullstelle!" << std::endl;
	}
	
	else
	{
		std::cout << x << " und " << y << " sind nullstellen!" << std::endl;
	}
    return 0;
}
