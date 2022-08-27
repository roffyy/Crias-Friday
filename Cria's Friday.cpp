#include <iostream>
#include <windows.h>
#include <shellapi.h>
#include <string>
using namespace std;

int count(int year, int bi, int newCount, int day){
    bi = year/4;
    return (year-1) * 365 + day + bi + newCount;
}

int main()
{
    int day, mon, year, i, bi, finalCount, newCount=0;
    int months[] = {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30};
    string end;

    cout << "Put a day: ";
    cin >> day;
    cout << "Put a month: ";
    cin >> mon;
    cout << "Put a year: ";
    cin >> year;
    
    for (i=mon-1; i>0; i--){
        newCount += months[i];
    }

    if (year%4==0){
        if (mon>=3){
            finalCount = count(year, bi, newCount, day);
        }

        else{
            finalCount = count(year, bi, newCount, day - 1);
        }
    }

    else{
        finalCount = count(year, bi, newCount, day);
    }

    if ((finalCount-6)%7==0){
        cout << "\nIts Crias's Friday, Segura Maneh!\n\n";
        ShellExecute(0, 0, "https://www.youtube.com/shorts/pCTSdupScwA", 0, 0 , SW_SHOW );
    }

    else{
        cout << "\nIt isnt Crias's Friday :<\n";
    }

    cout << "Press any key to close the program\n";
    cin >> end;

    return 0;

}