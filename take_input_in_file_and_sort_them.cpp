#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> numbers;
    int num;

    cout << "Enter numbers (enter -1 to stop): ";
    while (true)
    {
        cin >> num;
        if (num == -1)
            break;
        numbers.push_back(num);
    }

    ofstream outputFile("SortFileInput.txt");
    if (outputFile.is_open())
    {
        for (size_t i = 0; i < numbers.size(); ++i)
        {
            outputFile << numbers[i];
            if (i != numbers.size() - 1)
                outputFile << " ";
        }
        outputFile << endl;
        outputFile.close();
    }
    else
    {
        cout << "Unable to open file for writing" << endl;
        return 1;
    }

    sort(numbers.begin(), numbers.end());

    ofstream sortedFile("SortFileInput.txt");
    if (sortedFile.is_open())
    {
        for (size_t i = 0; i < numbers.size(); ++i)
        {
            sortedFile << numbers[i];
            if (i != numbers.size() - 1)
                sortedFile << " ";
        }
        sortedFile << endl;
        sortedFile.close();
    }
    else
    {
        cout << "Unable to open file for writing" << endl;
    }

    return 0;
}
