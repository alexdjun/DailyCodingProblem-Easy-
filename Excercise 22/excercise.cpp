#include <iostream>
#include <vector>

using namespace std;

// Function to calculate the perimeter of the island.
int islandPerimeter(vector<vector<int>>& grid) {
    // Result variable.
    int perimeter = 0;
    // Row and col variable.
    int row = grid.size();
    int col = grid[0].size();
    
    // Run through loops to check all of the land.
    for (int i = 0; i < row; i++) {
        for (int j = 0; j < col; j++) {
            
            // If land is found :
            if (grid[i][j] == 1) {
                // Add 4 to the perimeter variable.
                perimeter += 4;     
                
                // Whever you find another land connected to it, reduce 1 from the perimeter variable.
                // Check if there is a land underneath it. 
                if (i + 1 < row && grid[i+1][j] == 1) perimeter--;
                
                // Check if there is a land above it.
                if (i - 1 >= 0 && grid[i-1][j] == 1) perimeter--;
                
                // CHeck if there is a land right to it.
                if (j + 1 < col && grid[i][j+1] == 1) perimeter--;
                
                // Check if there is a land left to it.
                if (j -1 >= 0 && grid[i][j-1] == 1) perimeter--;
            }
        }
    }
    
    // Return the counted perimeter.
    return perimeter;
}

int main() {
    vector<vector<int> > perimeter1 {
        {0,1,0,0},
        {1,1,1,0},
        {0,1,0,0},
        {1,1,0,0}
};
    cout << "Case 1 : ";
    cout << islandPerimeter(perimeter1) << endl;
    // Expected : 16
    // Result   : 16

    vector<vector<int> > perimeter2 {
        {1}
    };

    cout << "Case 2 : ";
    cout << islandPerimeter(perimeter2) << endl;
    // Expected : 4
    // Result   : 4

    vector<vector<int> > perimeter3 {
        {1,0}
    };

    cout << "Case 3 : ";
    cout << islandPerimeter(perimeter3) << endl;
    // Expected : 4
    // Result   : 4    
    
    return 0;
} 