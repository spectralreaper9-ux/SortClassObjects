//
// Created by spect on 11/9/2026.
//

#include "SortObject.h"

#include <iomanip>
#include <ostream>
#include <utility>

SortObject::SortObject(std::string name, const double price, const int reviews, const int rating)
    :   name(std::move(name)), price(price), reviews(reviews), rating(rating)
{}

bool SortObject::operator<(const SortObject& other) const
{
    return this->name < other.name;
}

bool SortObject::byPriceAsc::operator()(const SortObject& objOne, const SortObject& objTwo) const
{
    return objOne.price < objTwo.price;
}

bool SortObject::byPriceDes::operator()(const SortObject& objOne, const SortObject& objTwo) const
{
    return objOne.price > objTwo.price;
}

std::ostream& operator<<(std::ostream& os, const SortObject& obj)
{
    os << "Name: " << std::setw(10) << obj.name << std::setw(32) << " Price: $" << obj.price
    << "\nReviews: " << std::setw(6) << obj.reviews << std::setw(50) << " Rating (Out of 5 stars): " << obj.rating << std::endl;
    return os;
}
