#include <iostream>
#include <string>
#include <cmath>


using namespace std;

class Grid
{
public:
	Grid(int height, int width);
	Grid();
	virtual ~Grid();
	void CreateGrid();
	void PrintGrid();
	void PrintLength();
	void StartPrintGrid();

protected:
	char* m_grid;
	int m_height;
	int m_width;
	int m_size;
};

