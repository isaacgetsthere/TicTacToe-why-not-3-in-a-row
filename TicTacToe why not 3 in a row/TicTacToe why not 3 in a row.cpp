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

double calculateAverageSales(std::vector<std::vector<int>> puppies) 
{
    double averageSales = 0.0;

    double sum = 0.0;
    for (int row = 0; row < puppies.size(); row++)
    {

        for (int col = 0; col < puppies[0].size(); col++)
        {
            sum = sum + puppies[row][col];
        }
    }

    std::cout << "The sum of all the sales is " << sum << std::endl;

    int totalDataPoints = puppies.size() * puppies[0].size();

    averageSales = sum / totalDataPoints;

    std::cout << "The average of the sales data is " << averageSales << std::endl;

    return averageSales;
}

int findMaxInRow(std::vector<std::vector<int>> puppies, int rowNumber)
{
    int maxSalesInCertainRow = 0;
    for (int col = 0; col < puppies[0].size(); col++)
    {
        int currentSales = puppies[rowNumber][col];

        if (maxSalesInCertainRow < currentSales)
        {
            maxSalesInCertainRow = currentSales;
            std::cout << "Updated the max sales to: " << maxSalesInCertainRow << std::endl;
        }
    }

    return maxSalesInCertainRow;
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

    int maxSalesInRow1 = findMaxInRow(puppies, 1);

    std::cout << "The max sales in row 1: " << maxSalesInRow1 << std::endl;

    double averageSales = calculateAverageSales(puppies);
}
