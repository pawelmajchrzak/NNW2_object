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
        liczby.push_back(iloscLiczb);
        for (int i=0; i<iloscLiczb; i++)
        {
            cin >> liczby[i];
        }
    }
    void wyznaczNNW()
    {
        cout <<liczby[0] << endl;
        cout <<liczby[1] << endl;
        cout <<liczby[2] << endl;
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
