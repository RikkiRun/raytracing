#include<iostream>
#include <fstream>

using namespace std;

int main()
{

	int nx = 200;
	int ny = 100;
	ofstream outfile("chapter1.ppm", ios_base::out);
	// Output to .ppm file
	outfile << "P3\n" << nx << " " << ny << "\n255\n";
	// output to command line
	std::cout << "P3\n" << nx << " " << ny << "\n255\n";


	// Draw image pixels from top to bottom, left to right
	for (int j = ny-1; j >= 0; j--)
	{
		for (int i = 0; i < nx; i++)
		{
			float r = float(i) / float(nx);
			float g = float(j) / float(ny);
			float b = 0.2;
			//Get rgb values within range (0.0, 1.0)
		    //Cast to integers and map to (0, 255)
			int ir = int(255.99*r);
			int ig = int(255.99*g);
			int ib = int(255.99*b);

			outfile << ir << " " << ig << " " << ib << "\n";
			std::cout << ir << " " << ig << " " << ib << "\n";
		}
	}
}