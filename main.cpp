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

    void wyznaczNWW()
    {
        vector<vector<int>> czynnikiPierwsze;


        int nwd=liczby[0];
        int nww=1;
        bool flaga=true;

        for (int i=0; i<liczby.size(); i++)
        {
            if (nwd >> liczby[i])
            {
                nwd = liczby[i];
            }
            //rozlozNaCzynnikiPierwsze(liczby[i]);
        }
        while (flaga != false)
        {
            for (int i=0; i<liczby.size(); i++)
            {
                if(nww%liczby[i] != 0)
                {
                    flaga=false;
                }
            }
            if (flaga == true)
            {
                flaga = false;
            }
            else
            {
                flaga = true;
                nww++;
            }
        }
        //cout << nwd << endl;
        //for (int i=0; i<liczby.size(); i++)
        //{
         //   nww*=liczby[i]/nwd;
        //}
        cout << nww << endl;
    }
/*
    void rozlozNaCzynnikiPierwsze(int liczba)
    {
        int i = 2;
        while (n != 1)
        {
            while (n % i == 0)
            {
                czynnikiPierwsze[0][]
                cout << i << "\n";
                n = n / i;
            }
            ++i;
        }
    }
*/
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
            zestaw.wyznaczNWW();
        }
    return 0;
}
