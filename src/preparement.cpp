#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

struct Question
{
    long long int number;
    long long int time;

    Question(long long int _number, long long int _time) : number(_number), time(_time) {}

    bool operator<(Question q)
    {
        if (this->time < q.time)
            return true;
        else
            return false;
    }
};

int main()
{

    long long int questions_count;

    cin >> questions_count;

    vector<Question> arr;

    long long int curr_q_time;
    for (long long int i = 0; i < questions_count; i++)
    {
        cin >> curr_q_time;
        arr.push_back(Question(i + 1, curr_q_time));
    }

    sort(arr.begin(), arr.end());
    cout << endl;
    /*
    for (long long int i = 0; i < questions_count; i++)
    {
        cout << arr[i].time << " ";
    }
    */

    long long int left = 0;
    long long int right = questions_count - 1;

    // cout << endl;

    while (left < questions_count / 2)
    {
        cout << arr[right].number << " ";
        cout << arr[left].number << " ";
        right--;
        left++;
    }
    if (questions_count % 2 != 0)
        cout << arr[left].number;
    return 0;
}