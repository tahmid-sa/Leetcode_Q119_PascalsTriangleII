#include <iostream>
#include <vector>

using namespace std;

vector<int> getRow(int rowIndex) {
    vector<int> rowBefore, rowCurr;

    for (int i = 0; i <= rowIndex; i++) {
        if (i >= 1) {
            rowBefore = rowCurr;
        }

        rowCurr.clear();

        for (int j = 0; j < i + 1; j++) {
            if (j == 0 || j == i) {
                rowCurr.push_back(1);
            }
            else if (j != 0 && j != i) {
                int num = rowBefore[j - 1] + rowBefore[j];
                rowCurr.push_back(num);
            }
        }

        if (i == rowIndex) {
            return rowCurr;
        }
        
    }

    return rowCurr;
}


int main()
{
    vector<int> row = getRow(3);
    
    for (auto& c : row) {
        cout << c << " ";
    }

    return 0;
}