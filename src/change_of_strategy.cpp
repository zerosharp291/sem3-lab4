#include <iostream>
#include <map>
#include <vector>
#include <algorithm>

using namespace std;

struct IceCream
{
    long long int rate;
    string name;
    long long int date;

    IceCream(string _name, long long int _rate, long long int _date) : name(_name), rate(_rate), date(_date) {}

    long long int calculate_time_left(long long int now)
    {
        return now + 1 - date;
    }
};

int main()
{

    long long int days_count, permitted_time;

    cin >> days_count >> permitted_time;

    long long int refuse_from_better_counter = 0;
    vector<IceCream> fridge;

    map<long long int, vector<string>> long_livers;

    long long int buff_rating;
    string buff_name;

    for (long long int i = 0; i < days_count; i++)
    {
        cin >> buff_name;
        cin >> buff_rating;

        if (!fridge.empty())
        {
            long long int old = fridge.front().calculate_time_left(i);
            long long int young = fridge.back().calculate_time_left(i);

            if (old < permitted_time)
            {

                if (buff_rating >= fridge.back().rate)
                {
                    fridge.push_back(IceCream(buff_name, buff_rating, i + 1));
                }
                else
                {
                    if (long_livers.count(young) != 0)
                    {
                        long_livers[young].push_back(fridge.front().name);
                    }
                    else
                        long_livers[young] = vector<string>{fridge.front().name};
                    if (fridge.back().rate > fridge.front().rate)
                        refuse_from_better_counter++;
                    fridge.pop_back();
                }
            }
            else
            {
                if (buff_rating > fridge.back().rate)
                {
                    refuse_from_better_counter++;
                }
                else
                {
                    if (fridge.back().rate > fridge.front().rate)
                        refuse_from_better_counter++;
                }
                if (long_livers.count(old) != 0)
                {
                    long_livers[old].push_back(fridge.front().name);
                }
                else
                    long_livers[old] = vector<string>{fridge.front().name};
                fridge.erase(fridge.begin());
            }
        }
        else
        {
            fridge.push_back(IceCream(buff_name, buff_rating, i + 1));
        }
    }

    auto the_oldest = --long_livers.end();
    sort(the_oldest->second.begin(), the_oldest->second.end());

    cout << refuse_from_better_counter << endl;

    cout << the_oldest->first << " " << the_oldest->second.size() << endl;

    string out_list = the_oldest->second[0] + "\n";
    long long int out_list_counter = 1;

    for (int i = 1; i < the_oldest->second.size(); i++)
    {
        if (the_oldest->second[i] != the_oldest->second[i - 1])
        {
            out_list.append(the_oldest->second[i]);
            out_list_counter++;
        }
    }

    cout << out_list_counter << endl;
    cout << out_list;

    return 0;
}