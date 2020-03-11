# include <iostream>
# include <cstdlib>

using namespace std;

int  main()
{
    int arr[] = {10,9,8,7,6,5,4,3,2,1};

    for(int i=0; i < 10 ;i++)
    {
        cout << arr[i] << ',';
    }
    cout << endl << endl;

    for(int i =0; i< 10; i++)
    {
        int minimum = arr[i];
        int minimumIndex = i;

        for (int a = i; a < 10;a++)
        {
            if(arr[a] < minimum)
            {
                minimum = arr[a];
                minimumIndex = a;
            }
        }
       swap(arr[i], arr[minimumIndex]);
    }
    for(int i= 0; i<10;i++)
    {
        cout <<arr[i] << ',';
    }
    cout<< endl << endl;


    return 0;

}
