#include <iostream>
#include <fstream>
#include <cctype>
using namespace std;

int main()
{
    ofstream outfile("countCharacters.txt");
    if (!outfile)
        return 1;

    string input;
    cout << "Enter elements in file as string: ";
    getline(cin, input);
    outfile << input;
    outfile.close();

    ifstream infile("countCharacters.txt");
    if (!infile)
        return 1;

    int vowels = 0, consonants = 0, special = 0;
    char ch;

    while (infile.get(ch))
    {
        ch = tolower(ch);
        if (isalpha(ch))
        {
            if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u')
                vowels++;
            else
                consonants++;
        }
        else
        {
            special++;
        }
    }

    infile.close();

    cout << "Vowels: " << vowels << endl;
    cout << "Consonants: " << consonants << endl;
    cout << "Special Characters: " << special << endl;

    return 0;
}
