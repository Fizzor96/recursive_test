#include <iostream>
#include <vector>

using namespace std;

// 80-ik oldal, 3-ik feladat geda jegyzetében

void feladat(vector <int> *sor, int n) {
    int last = (*sor)[(*sor).size() - 1];
    int blast = (*sor)[(*sor).size() - 2];
    int muvelet = (last * last) - (blast * blast);

    //cout << "last: " << last << endl;
    //cout << "blast: " << blast << endl;
    //cout << "muvelet: " << muvelet << endl;
    //cout << "-------------------------" << endl;

    sor->push_back(muvelet);

    if (n > 1)
    {
        feladat(sor, n - 1);
    }
}

void kiir(vector <int> &sor) {
    for (size_t i = 0; i < sor.size(); i++)
    {
        cout << sor[i] << ", ";
    }
    cout << endl;
}


int main()
{
    vector <int> sorozat{ 0, 1 };

    feladat(&sorozat, 10);
    kiir(sorozat);

    system("pause");
}