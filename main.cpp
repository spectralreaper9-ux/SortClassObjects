#include <algorithm>
#include <iostream>
#include <vector>

#include "SortObject.h"

static void print(const std::vector<SortObject>& inputVector)
{
    for (const auto & i : inputVector)
    {
        std::cout << i << std::endl;
    }

    std::cout << "\n---------------------------------------------------\n" << std::endl;
}

int main()
{
    const SortObject anvil("Anvil", 999.99, 309, 4);
    const SortObject grenade("Grenade", 50.25, 12, 2);
    const SortObject clownfish("Jerry", 16.99, 1, 5);

    std::vector<SortObject> objects;
    objects.push_back(grenade);
    objects.push_back(anvil);
    objects.push_back(clownfish);

    print(objects);

    std::sort(objects.begin(), objects.end());

    print(objects);

    std::sort(objects.begin(), objects.end(), SortObject::byPriceAsc());

    print(objects);

    std::sort(objects.begin(), objects.end(), SortObject::byPriceDes());

    print(objects);

    return 0;
}
