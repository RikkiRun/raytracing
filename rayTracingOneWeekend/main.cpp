#include<iostream>
#include <fstream>
#include<math.h>
#include <stdlib.h>
#include "vec3.h"

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
			vec3 col(float(i) / float(nx), float(j) / float(ny), 0.2);
			//Get rgb values within range (0.0, 1.0)
		    //Cast to integers and map to (0, 255)
			int ir = int(255.99*col[0]);
			int ig = int(255.99*col[1]);
			int ib = int(255.99*col[2]);

			outfile << ir << " " << ig << " " << ib << "\n";
			std::cout << ir << " " << ig << " " << ib << "\n";
		}
	}
}