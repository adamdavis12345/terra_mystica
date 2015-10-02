#include "player.h"

player::player(QObject *parent) : QObject(parent)
{

}
int player::getMaxPowerInPool1() const
{
    return maxPowerInPool1;
}

void player::setMaxPowerInPool1(int value)
{
    maxPowerInPool1 = value;
}
int player::getMaxPowerInPool2() const
{
    return maxPowerInPool2;
}

void player::setMaxPowerInPool2(int value)
{
    maxPowerInPool2 = value;
}
int player::getMaxPowerInPool3() const
{
    return maxPowerInPool3;
}

void player::setMaxPowerInPool3(int value)
{
    maxPowerInPool3 = value;
}
int player::getMaxNumberOfDwellings() const
{
    return maxNumberOfDwellings;
}

void player::setMaxNumberOfDwellings(int value)
{
    maxNumberOfDwellings = value;
}
int player::getMaxNumberOfTradingPosts() const
{
    return maxNumberOfTradingPosts;
}

void player::setMaxNumberOfTradingPosts(int value)
{
    maxNumberOfTradingPosts = value;
}
int player::getMaxNumberOfTemples() const
{
    return maxNumberOfTemples;
}

void player::setMaxNumberOfTemples(int value)
{
    maxNumberOfTemples = value;
}
int player::getMaxNumberOfStrongholds() const
{
    return maxNumberOfStrongholds;
}

void player::setMaxNumberOfStrongholds(int value)
{
    maxNumberOfStrongholds = value;
}
int player::getMaxNumberOfSancturaries() const
{
    return maxNumberOfSancturaries;
}

void player::setMaxNumberOfSancturaries(int value)
{
    maxNumberOfSancturaries = value;
}
int player::getTownValueOfDwellings() const
{
    return townValueOfDwellings;
}

void player::setTownValueOfDwellings(int value)
{
    townValueOfDwellings = value;
}
int player::getTownValueOfTradingPosts() const
{
    return townValueOfTradingPosts;
}

void player::setTownValueOfTradingPosts(int value)
{
    townValueOfTradingPosts = value;
}
int player::getTownValueOfTemples() const
{
    return townValueOfTemples;
}

void player::setTownValueOfTemples(int value)
{
    townValueOfTemples = value;
}
int player::getTownValueOfStrongholds() const
{
    return townValueOfStrongholds;
}

void player::setTownValueOfStrongholds(int value)
{
    townValueOfStrongholds = value;
}
int player::getTownValueOfSancuararies() const
{
    return townValueOfSancuararies;
}

void player::setTownValueOfSancuararies(int value)
{
    townValueOfSancuararies = value;
}
QHash<Qstring, int> player::getResources() const
{
    return resources;
}

void player::setResources(const QHash<Qstring, int> &value)
{
    resources = value;
}
QHash<Qstring, int> player::getIncome() const
{
    return income;
}

void player::setIncome(const QHash<Qstring, int> &value)
{
    income = value;
}















