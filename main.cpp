#include <iostream>
#include <vector>

using namespace std;

class Liczby
{
    private:
    vector <unsigned long long> liczby;
    unsigned long long najwieksza=1;

    public:
    Liczby (unsigned long long iloscLiczb)
    {
        for (unsigned long long i=0; i<iloscLiczb; i++)
        {
            unsigned long long wczytanaDana;
            cin >> wczytanaDana;
            liczby.push_back(wczytanaDana);
            if (liczby[i]>>najwieksza)
            {
                najwieksza=liczby[i];
            }
        }
    //cout << najwieksza;
    }

    unsigned long long wyznaczNWW()
    {
        unsigned long long nww=najwieksza;
        bool flaga=false;

        while (flaga != true)
        {
            flaga=true;
            for (unsigned long long i=0; i<liczby.size(); i++)
            {
                if(nww%liczby[i] != 0)
                {
                    flaga=false;
                }
            }
            if (flaga == false)
            {
                nww+=najwieksza;
            }
        }

        return nww;
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
            cout << zestaw.wyznaczNWW() << endl;


        }
    return 0;
}
