#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

void getScores(int & score1,int &  score2,int &  score3,int & score4);
int findLowest(int score1,int score2,int score3,int score4, int low);
double calcAvg (int score1,int score2,int score3, int score4, int low);
void display(int & score1,int &  score2,int &  score3,int & score4, int & low, int & avg);
int main()
{
    int score1, score2, score3, score4, low;
    double avg;

   getScores(score1, score2, score3, score4);
   low = findLowest( score1, score2, score3, score4, low);
   avg = calcAvg (iscore1, score2, score3, score4, low);
   display( score1, score2, score3, score4, low, avg);
}

void getScores(int & score1,int &  score2,int &  score3,int & score4)
{
    do{
        cout << "Enter Score 1";
        cin << score1;
    } while (score1 < 0 || score1 > 100);

    do{
        cout << "Enter Score 2";
        cin << score2;
    } while (score2 < 0 || score2 > 100);

    do{
        cout << "Enter Score 3";
        cin << score3;
    } while (score3 < 0 || score3 > 100);

    do{
        cout << "Enter Score 4";
        cin << score4;
    } while (score4 < 0 || score4 > 100);
}

int findLowest(int score1,int score2,int score3, int score4);
{
    int holder = score1;

    if score2 < holder
    holder = score2;
    if score3 < holder
    holder = score3;
    if score4 < holder
    holder = score4;

    return holder;
}

double calcAvg (int score1,int score2,int score3, int score4, int low);
{
    avg = (score1 + score2 + score3 + score4 - low)/3.0;

    return avg;
}

void display(int & score1,int &  score2,int &  score3,int & score4, int & low, int & avg)
{
    cout << score1 << endl:
    cout << score2 << endl:
    cout << score3 << endl;
    cout << score4 << endl:
}


