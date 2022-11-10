#include <iostream>
using namespace std;
//ARDIŞIK ARAMA
int main()
{
    int dizi[] = { 1,2,3,4,5 };
    int arananacakSayi;
    int i = 0;

    cout << "Arama yapilacak dizi: ";
    for (int k = 0; k < 5; k++) 
    {
        cout << " " << dizi[k];
    }
    cout << endl;
    cout << "Aranacak sayi: ";
    cin >> arananacakSayi;
    int kontrol = 0;

    while (i < 5) 
    {
        if (dizi[i] == arananacakSayi) 
        {
            kontrol = 1;
            cout << arananacakSayi << " sayisi dizide vardir." << endl;
            break;
        }
        i = i + 1;
    }
    if (kontrol == 0) 
    {
        cout << arananacakSayi << " sayısı dizide yoktur." << endl;
    }
    return 0;
}

