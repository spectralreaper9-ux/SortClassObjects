//
// Created by spect on 11/9/2026.
//

#ifndef SORTCLASSOBJECTS_SORTOBJECTS_H
#define SORTCLASSOBJECTS_SORTOBJECTS_H
#include <string>


class SortObject
{
    std::string name;
    double price = 0.0;
    int reviews = 0;
    int rating = 0;

public:
    SortObject() = default;
    SortObject(std::string name, double price, int reviews, int rating);

    friend std::ostream& operator << (std::ostream& os, const SortObject& obj);
    bool operator < (const SortObject& other) const;

    struct byPriceAsc
    {
        bool operator()(const SortObject& objOne, const SortObject& objTwo) const;
    };

    struct byPriceDes
    {
        bool operator()(const SortObject& objOne, const SortObject& objTwo) const;
    };

    //Could continue sorting by reviews, ratings, etc.
};


#endif //SORTCLASSOBJECTS_SORTOBJECTS_H
