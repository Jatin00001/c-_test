#include <bits\stdc++.h>
#include <conio.h>
using namespace std;

int main()
{
    cout << "Enter Your 5 subject marks" << endl;
    int a, b, c, d, e;
    cin >> a >> b >> c >> d >> e;

    float per = ((a + b + c + d + e) * 100) / 500;
    cout << "YOur Percent is " << per << endl;

    switch (per >= 90 && per < 100)
    {
    case 1:
        cout << "Your Grade is A" << endl;
        break;
    case 0:
        switch (per>= 80&&per < 90)
        {
        case 1:
            cout << "Your grade is B" << endl;
            break;
        case 0:
            switch (per >= 70 && per < 80)
            {
            case 1:
                cout << "Your grade is c" << endl;
                break;
            case 0:
                switch (per >= 60 && per < 70)
                {
                case 1:
                    cout << "Your Grade is D" << endl;
                    break;
                case 0:
                    switch (per <= 50 && per > 60)
                    {
                    case 1:
                        cout << "Your Grade is E fail" << endl;
                        break;
                    }
                    
                }
                break;
            }
            break;

        }
        break;
    }

    return 0;
}