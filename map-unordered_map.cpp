#include <iostream>
#include <map>
#include <unordered_map>
#include <vector>

struct CityRecord
{
    std::string Name;
    uint64_t population;
};
int main()
{
    std::vector<CityRecord> cities;
    cities.emplace_back("nithin", 30000);
    cities.emplace_back("nitin", "3000");
    cities.emplace_back("nitn", "300");
    for (const auto &city : cities)
    {
        if (city.Name == "nithin")
        {
            std::cout << city.population << std::endl;
            break;
        }
    }

    std::unordered_map<std::string, CityRecord> cityUnorderd_map;

    cityUnorderd_map["nithin"] = CityRecord{"nithin", 30000};
    cityUnorderd_map["nithin"] = CityRecord{"nithi", 3000};
    cityUnorderd_map["nithin"] = CityRecord{"nith", 300};

    CityRecord &berlindata = cityUnorderd_map["nithin"]; // this is a reference becuase of &

    std::map<std::string, CityRecord> cityUnorderd_map;

    cityUnorderd_map["nithin"] = CityRecord{"nithin", 30000};
    cityUnorderd_map["nithin"] = CityRecord{"nithi", 3000};
    cityUnorderd_map["nithin"] = CityRecord{"nith", 300};

    CityRecord &berlindata = cityUnorderd_map["nithin"]; // this is a reference becuase of &

    return 0;
}
