#include <iostream>
using namespace std;

class Shape
{
	public:
		virtual void get_dimensions()
		{
		
        }
		
		virtual float area()
		{
			return 0.0;
        }
};

class Triangle: public Shape
{
	private:
		float base;
		float height;
		
	public:
		Triangle()
		{
			base = 0.0;
			height = 0.0;
		}
		
		Triangle(float b, float h)
		{
			base = b;
			height = h;
		}

		void get_dimensions()
		{
			cout << "---Dimensions of the Triangle---" << endl;
			cout << "Enter the base of the triangle: ";
			cin >> base;
			cout << "Enter the height of the triangle: ";
			cin >> height;			
		}
		
		float area()
		{
			return (0.5 * base * height);
		}
};

class Rectangle: public Shape
{
	private:
		float length;
		float breadth;
		
	public:
		Rectangle()
		{
			length = 0.0;
			breadth = 0.0;
		}
		
		Rectangle(float l, float b)
		{
			length = l;
			breadth = b;
		}

		void get_dimensions()
		{
			cout << "---Dimensions of the Rectangle--" << endl;
			cout << "Enter the length of the rectangle: ";
			cin >> length;
			cout << "Enter the breadth of the rectangle: ";
			cin >> breadth;			
		}
		
		float area()
		{
			return (length * breadth);
		}
};

class Circle: public Shape
{
	private:
		float radius;
		
	public:
		Circle()
		{
			radius = 0.0;
		}
		
		Circle(float r)
		{
			radius = r;
		}

		void get_dimensions()
		{
			cout << "---Dimensions of the Circle---" << endl;
			cout << "Enter the radius of the Circle: ";
			cin >> radius;		
		}
		
		float area()
		{
			float pi;
			pi = 22.0/7.0;
			return (pi * radius * radius);
		}
};

int main()
{
	float a = 0;
	Triangle t;
	t.get_dimensions();
	cout << "Area covered by the triangle: " << t.area() << endl;
	Rectangle r;
	r.get_dimensions();
	cout << "Area covered by the rectangle: " << r.area() << endl;
	Circle c;
	c.get_dimensions();
	cout << "Area covered by the circle: " << c.area() << endl;
	a = t.area() + r.area() + c.area();
	cout << "Total area covered by these shapes: " << a << endl;
	return 0;
}