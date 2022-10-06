#include <iostream>
#include <vector>

using namespace std;

class Liczby
{
    private:
    vector <long long> liczby;

    public:
    Liczby (int iloscLiczb)
    {
        for (int i=0; i<iloscLiczb; i++)
        {
            long long wczytanaDana;
            cin >> wczytanaDana;
            liczby.push_back(wczytanaDana);
        }
    }

    long long wyznaczNWW()
    {
        long long nww=1;
        bool flaga=false;

        while (flaga != true)
        {
            flaga=true;
            for (int i=0; i<liczby.size(); i++)
            {
                if(nww%liczby[i] != 0)
                {
                    flaga=false;
                }
            }
            if (flaga == false)
            {
                nww++;
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
