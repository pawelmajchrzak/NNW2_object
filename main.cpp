#include <iostream>
#include <vector>

using namespace std;

class Liczby
{
    private:
    vector <int> liczby;

    public:
    Liczby (int iloscLiczb)
    {
        for (int i=0; i<iloscLiczb; i++)
        {
            int wczytanaDana;
            cin >> wczytanaDana;
            liczby.push_back(wczytanaDana);
        }
    }

    void wyznaczNNW()
    {
        vector<vector<int>> czynnikiPierwsze;
        for (int i=0; i<liczby.size(); i++)
        {
            rozlozNaCzynnikiPierwsze(liczby[i]);
        }
    }

    void rozlozNaCzynnikiPierwsze(int liczba)
    {

    }

};


int main()
{
    int iloscTestow;
    cin>>iloscTestow;

    for (int i=1 ; i <= iloscTestow ; i++)
        {
            int iloscLiczb;
            cin >> iloscLiczb;
            Liczby zestaw(iloscLiczb);
            zestaw.wyznaczNNW();
        }
    return 0;
}
