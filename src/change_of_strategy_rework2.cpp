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
    Ice_cream(string _name, long long _rate, long long _time)
    {
        name = _name;
        rate = _rate;
        time = _time;
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
    int days_count, permitted_time;
    cin >> days_count >> permitted_time;

    vector<Ice_cream> fridge; // мороженое в холодильнике
    string buff_name;
    cin >> buff_name;
    long long buff_rate;
    cin >> buff_rate;

    long long count_of_refusales = 0; // кол-во отказов от покупки лучшего мороженого
    fridge.push_back(Ice_cream(buff_name, buff_rate, 0));
    long long max_time_at_home = 0;
    long long count_of_max_time = 1;

    map<string, long long> long_livers;
    long_livers[buff_name] = 0;

    for (long long i = 0; i < days_count - 1; i++)
    {
        cin >> buff_name;
        cin >> buff_rate;
        Ice_cream(buff_name, buff_rate, 0);

        // long long time = 0;
        for (auto &ice_cream : fridge)
        {
            ice_cream.setTimeAtHome(ice_cream.get_home_time() + 1);
            if (max_time_at_home < ice_cream.get_home_time())
            {
                max_time_at_home = ice_cream.get_home_time();
                count_of_max_time = 1;
                long_livers[ice_cream.get_taste()] = max_time_at_home;
            }
            else if (max_time_at_home == ice_cream.get_home_time())
            {
                count_of_max_time++;
                long_livers[ice_cream.get_taste()] = max_time_at_home;
            }
        }
        if (fridge.size() == 0)
        {
            fridge.push_back(Ice_cream(buff_name, buff_rate, 0));
        }
        else
        {
            if (fridge[0].get_home_time() >= permitted_time)
            {
                if (fridge[0].get_rating() < buff_rate)
                {
                    count_of_refusales++;
                }
                fridge.erase(fridge.begin());
            }
            else
            {
                if (buff_rate >= fridge.back().get_rating())
                {
                    fridge.push_back(Ice_cream(buff_name, buff_rate, 0));
                }
                else
                {
                    fridge.pop_back();
                    if (fridge[0].get_rating() < buff_rate)
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
    for (const auto &elem : long_livers)
    {
        if (elem.second == max_time_at_home)
        {
            count++;
        }
    }
    cout << count << endl;
    for (const auto &elem : long_livers)
    {
        if (elem.second == max_time_at_home)
        {
            cout << elem.first << endl;
        }
    }
}