#pragma once
#include <string>
#include <iostream>
class Image {
public:
	void GetImageInfo() 
	{
		for (int i = 0; i < LENGTH; i++)
		{
			std::cout << "#" << i << " " << pixels[i].GetInfo() << "\n";
		}
	}
	class Pixel {
	public:
		Pixel() 
		{
			this->r = this->g = this->b = 0;
		}
		Pixel(int r, int g, int b) 
		{
			this->r = r;
			this->g = g;
			this->b = b;
		}
		std::string GetInfo() 
		{
			return "Pixel: r=" + std::to_string(r) + "\tg=" + std::to_string(g) + "\tb=" + std::to_string(b);
		}
	private:
		int r;
		int g;
		int b;
	};
private:
	static int const LENGTH = 5;
	Pixel pixels[LENGTH]{
		Pixel(0,4,5),
		Pixel(1,2,235),
		Pixel(230,43,5),
		Pixel(20,43,35),
		Pixel(33,44,55)
	};
};


