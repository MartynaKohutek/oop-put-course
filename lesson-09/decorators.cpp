#include <iostream>
#include <vector>

using namespace std;

class IntegerSequence
{
    virtual vector <int> Number();
};

vector <int> Sequence = {-5, 2, 1029882, 90, -44334, 5,6,7, -4};

class VectorSequence: public IntegerSequence
{
    public:
    vector <int> Number()
    {
        return Sequence;
    }

};

class PositiveSequence: public IntegerSequence
{
    public:
    vector <int> Number() override
    {

        for (int i=0; i<Sequence.size(); i++)
        {
            if (Sequence[i]<0)
            {
                Sequence.erase(Sequence.begin() + i);
            }
        }
        return Sequence;
    }
};

class EvenSequence: public IntegerSequence
{
    public:
    vector <int> Number() override
    {

        for (int i=0; i<Sequence.size(); i++)
        {
            if (Sequence[i]%2 != 0)
            {
                Sequence.erase(Sequence.begin() + i);
            }
        }
        return Sequence;
    }
};

class SortedSequence: public IntegerSequence
{
    public:
    vector <int> Number() override
    {
        int help, j;
        for (int i=0; i<Sequence.size(); i++)
        {
            help = Sequence[i];
            j = i-1;
            while (j>0 && Sequence[j]>help)
            {
                Sequence[j+1] = Sequence[j];
                --j;
            }
            Sequence[j+1] = help;
        }
        return Sequence;
    }
};




int main()
{
    VectorSequence Vector;
    vector <int> Integers = Vector.Number();
    for (int i=0; i<Integers.size(); i++)
    {
        cout << Integers[i] << " ";

    }
    cout << endl;
    PositiveSequence Pos;
    Integers = Pos.Number();
    EvenSequence Even;
    Integers = Even.Number();
    SortedSequence Sort;
    Integers = Sort.Number();
    for (int i=0; i<Integers.size(); i++)
    {
        cout << Integers[i] << " ";

    }




}
