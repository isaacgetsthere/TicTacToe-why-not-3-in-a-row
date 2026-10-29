#include <iostream>
#include <vector>
#include <string>
#include <iomanip>

void printSalesData(std::vector<std::vector<int>> puppies)
{
    const int widestCol = 3;
    for (int row = 0; row < puppies.size(); row++)
    {
        
        for (int col = 0; col < puppies[0].size(); col++)
        {
            std::cout << std::setw(widestCol);
            std::cout << std::left;
            std::cout << puppies[row][col] << " ";

        }
        std::cout << std::endl;
    }
}

int main()
{
    std::vector<std::vector<int>> puppies =
    {
        {1,2,3},
        {4,5,8},
        {6,7,9}
    };
    //std::vector<std::vector<char>> ticTacToeGrid(3, std::vector<char>(3));
    printSalesData(puppies);

}