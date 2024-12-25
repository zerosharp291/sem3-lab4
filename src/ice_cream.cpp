#include <iostream>
#include <map>
#include <vector>
#include <algorithm>

using namespace std;

struct IceCream
{
    long long int rate;
    string name;

    IceCream(string _name, long long int _rate) : name(_name), rate(_rate) {}
};

int main()
{

    long long int days_count;

    cin >> days_count;

    map<string, long long int> number_of_sales;
    map<long long int, vector<string>> rating_of_sales;

    long long int max_fridge_size = 1;
    vector<IceCream> fridge;

    long long int buff_rating;
    string buff_name;

    /*
    cin >> buff_name;
    cin >> buff_rating;

    fridge.push_back(IceCream(buff_name, buff_rating));
    number_of_sales.emplace(fridge.back().name, 1);
    */

    for (long long int i = 0; i < days_count; i++)
    {
        cin >> buff_name;
        cin >> buff_rating;

        if (!fridge.empty())
        {
            if (buff_rating >= fridge.back().rate)
            {
                fridge.push_back(IceCream(buff_name, buff_rating));

                // maximum fridge size checkout
                if (fridge.size() > max_fridge_size)
                    max_fridge_size++;

                // ice cream sales checkout
                if (number_of_sales.count(buff_name) != 0)
                    number_of_sales[buff_name]++;
                else
                    number_of_sales.emplace(buff_name, 1);
            }
            else
                fridge.pop_back();
        }
        else
        {
            fridge.push_back(IceCream(buff_name, buff_rating));
            if (number_of_sales.count(buff_name) != 0)
                number_of_sales[buff_name]++;
            else
                number_of_sales.emplace(buff_name, 1);
        }
    }

    cout << max_fridge_size << endl;

    for (auto elem : number_of_sales)
    {
        if (rating_of_sales.count(elem.second) == 0)
            rating_of_sales.emplace(elem.second, vector<string>{elem.first});
        else
            rating_of_sales[elem.second].push_back(elem.first);
    }

    auto sale_record = --rating_of_sales.end();

    cout << sale_record->first << " " << sale_record->second.size() << endl;

    sort(sale_record->second.begin(), sale_record->second.end());

    for (auto elem : sale_record->second)
    {
        cout << elem << endl;
    }

    return 0;
}