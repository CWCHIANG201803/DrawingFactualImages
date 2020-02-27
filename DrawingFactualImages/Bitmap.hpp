
#ifndef BITMAP_HPP
#define BITMAP_HPP
#include <string>
#include <cstdint>
using namespace std;

namespace caveofprogramming {
	class Bitmap{
	private:
		int m_width{ 0 };
		int m_height{ 0 };
	public:
		Bitmap(int width, int height);
		void setPixel(int x, int y, uint8_t red, uint8_t green, uint8_t blue);
		bool write(string filename);
		virtual ~Bitmap();
	};
}



#endif // !BITMAP_HPP