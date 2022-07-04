#include <iostream>
#include <string>

using namespace std;

void permutate(string word, int j, int strlen)
{
    if (j == strlen)
    {
        cout << word << endl;
    }
    else
    {
        for (int i = 1; i < strlen; i++)
        {
            swap(word[j], word[i]);
            permutate(word, (j + 1), strlen);
            swap(word[j], word[i]);
        }
    }
}
int main()
{
    int j = 0;
    string word("ABC");
    int strlen = word.size();
    cout << "String len : " << strlen << endl;
    permutate(word, j, strlen);
    return 0;
}