#pragma once
#include "Print.h"
#include "RandomMap.h"

Grid::Grid()
{
	m_grid = nullptr;
	m_height = 10;
	m_width = 10;
	m_size = m_height * m_width;
}

Grid::Grid(int height, int width) 
{
	m_grid = nullptr;
	m_height = height;
	m_width = width;
	m_size = m_height * m_width;
}

Grid::~Grid()
{

}
void Grid::CreateGrid()
{
	m_grid = new char[m_size];
	memset(m_grid, 0, m_size);
}

void Grid::PrintGrid()
{
	RandomMap rdnMap;
	int rndNum;
	bool isPlayerPrinted = false;

	for (int line = 0; line < m_height; line++)
	{
		for (int col = 0; col < m_width; col++)
		{
			rndNum = rdnMap.GetRandom(2);
			if (col == floor((m_width - 1) / 2) and line == m_height - 1)
			{
				isPlayerPrinted = true;
				cout << "A";
			}
			else
			{
				isPlayerPrinted = false;
			}
			if (rndNum == 1 and !isPlayerPrinted)
			{
				cout << ".";
			}
			else if (!isPlayerPrinted)
			{
				cout << "#";
			}
		}
		cout << "" << endl;
	}
}

void Grid::StartPrintGrid() 
{
	bool isPlayerPrinted = false;
	double spawnOnCol = floor((m_width - 1) / 2);

	for (int line = 0; line < m_height; line++) 
	{
		for (int col = 0; col < m_width; col++) 
		{
			if (col == spawnOnCol and line == m_height - 1)
			{
				isPlayerPrinted = true;
				cout << "A";
			}
			else
			{
				isPlayerPrinted = false;
			}

			/*switch (col) {

				case spawnOnCol - 2:
					cout << "#";
					break;

				case spawnOnCol + 2:
					cout << "#";
					break;

				case default:
					continue;
			}*/

			if (!isPlayerPrinted and col == spawnOnCol - 2)
			{
				cout << "#";
			}
			else if(!isPlayerPrinted and col == spawnOnCol + 2)
			{
				cout << "#";
			}
			else if (!isPlayerPrinted)
			{
				cout << ".";
			}
		}
		cout << "" << endl;
	}
}

void Grid::PrintLength() {
	cout << " longueur : " << m_height << endl;
	cout << " largeur : " << m_width << endl;
}

