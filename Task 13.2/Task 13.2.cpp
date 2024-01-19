#include <iostream>
#include <vector>

using namespace std;

class Squares
{
private:
    vector<int> squares;
public:
    Squares()
    {
        for (int i = 1; i < 11; i++)
        {
            squares.push_back(i * i);
        }
    }
    friend ostream& operator<<(ostream& out, Squares squares)
    {
        for (vector<int>::iterator it = squares.squares.begin(); it != squares.squares.end(); it++)
        {
            out << *it << "\t";
        }
        return out;
    }
};

int main()
{
    setlocale(LC_ALL, "Russian");

    Squares squares;
    cout << squares;

    return 0;
}
