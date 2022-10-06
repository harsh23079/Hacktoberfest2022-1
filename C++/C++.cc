#include <iostream>
using namespace std;

int main()
{
    int rows;

    cout << "Enter number of rows: ";
    cin >> rows;

    for(int i = 1; i <= rows; ++i)
    {
        for(int j = 1; j <= i; ++j)
        {
            cout << "* ";
        }
        cout << "\n";
    }
    
    
        cout<<"\nPattern 10 :- Pyramid Patter with having numbers like an example \n"<<endl;
/*
   1
  212
 32123
4321234
*/

   int n=rows;
    

       for(int i=1;i<=n;i++)
      {
        int j=1;
        int p=i;
        int l=2;
        while(j<=n+i-1)
        {
            if(j<=n-i)
            {
               cout<<" ";

            }
            else if(j>n-i && j<=n)
            {
               cout<<p;
                p--;
            }
            else 
            {
                cout<<l;
                l++;
            }
            j++;
         }
        cout<<endl;
      }
    
    
    return 0;
}
