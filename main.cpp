#include <iostream>
#include <string>
#include <stdio.h>

using namespace std;

int main()
{
    string p , k , vig , ver , One_Time_Pad ;
    cin >> k >> p;

    if (k.size() == p.size())
        One_Time_Pad = "YES" ;
        else
        One_Time_Pad = "NO" ;

    while (k.size() < p.size())
    {
     k += k ;
    }
    vig = p ;
    for(int i=0; i<p.size(); i++)
        {
      if ((p.at(i) + k.at(i) > 155))
      {
       vig.at(i) = p.at(i) + k.at(i) - 91 ;
      }
      else
      {
          vig.at(i) = p.at(i) + k.at(i) - 65 ;
      }
        }
        cout << "Vigenere: " << vig << endl ;
        cout << "Vernam: " ;

    for(int i=0; i<p.size(); i++)
        {
      printf("%.2X",p.at(i) ^ k.at(i)) ;
        }
         cout << endl << "One-Time Pad: " << One_Time_Pad ;
    return 0;
}
