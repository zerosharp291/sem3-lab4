#include <iostream>
#include <vector>
#include <map>
#include <string>

using namespace std;

class Ice_cream
{
private:
    string name;
    long long rate;
    long long time;

public:
    Ice_cream(string _taste, long long _rating, long long _time_at_home)
    {
        name = _taste;
        rate = _rating;
        time = _time_at_home;
    }
    string get_taste() const { return name; }
    long long get_rating() const { return rate; }
    long long get_home_time() const { return time; }
    void setTimeAtHome(long long time)
    {
        time = time;
    }
};

int main()
{
    ios_base::sync_with_stdio(false);
    int n; // кол-во дней
    cin >> n;
    long long d; // максимальое время нахождения в холодильнике
    cin >> d;

    vector<Ice_cream> ice_creams; // мороженое в холодильнике
    string buff_name0;
    cin >> buff_name0;
    long long buff_rate0;
    cin >> buff_rate0;

    long long count_of_refusales = 0; // кол-во отказов от покупки лучшего мороженого
    Ice_cream ice_cream1(buff_name0, buff_rate0, 0);
    ice_creams.push_back(ice_cream1);
    long long max_time_at_home = 0;
    long long count_of_max_time = 1;
    // long long time = 0;

    map<string, long long> max_time;
    max_time[buff_name0] = 0;

    for (long long i = 0; i < n - 1; i++)
    {
        string buff_name; // вкус
        cin >> buff_name;
        long long buff_rate; // рейтинг
        cin >> buff_rate;
        Ice_cream ice_cream2(buff_name, buff_rate, 0);

        // long long time = 0;
        for (auto &ice : ice_creams)
        {
            ice.setTimeAtHome(ice.get_home_time() + 1);
            if (max_time_at_home < ice.get_home_time())
            {
                max_time_at_home = ice.get_home_time();
                count_of_max_time = 1;
                max_time[ice.get_taste()] = max_time_at_home;
            }
            else if (max_time_at_home == ice.get_home_time())
            {
                count_of_max_time++;
                max_time[ice.get_taste()] = max_time_at_home;
            }
        }
        if (ice_creams.size() == 0)
        {
            ice_creams.push_back(ice_cream2);
        }
        else
        {
            if (ice_creams[0].get_home_time() >= d)
            {
                if (ice_creams[0].get_rating() < ice_cream2.get_rating())
                {
                    count_of_refusales++;
                }
                ice_creams.erase(ice_creams.begin());
            }
            else
            {
                if (ice_cream2.get_rating() >= ice_creams.back().get_rating())
                {
                    ice_creams.push_back(ice_cream2);
                }
                else
                {
                    ice_creams.pop_back();
                    if (ice_creams[0].get_rating() < ice_cream2.get_rating())
                    {
                        count_of_refusales++;
                    }
                }
            }
        }
    }
    cout << count_of_refusales << endl;
    cout << max_time_at_home << " " << count_of_max_time << endl;
    long long count = 0;
    for (const auto &pare : max_time)
    {
        if (pare.second == max_time_at_home)
        {
            count++;
        }
    }
    cout << count << endl;
    for (const auto &pare : max_time)
    {
        if (pare.second == max_time_at_home)
        {
            cout << pare.first << endl;
        }
    }
}