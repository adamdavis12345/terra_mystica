#ifndef PLAYER_H
#define PLAYER_H

#include <QObject>
#include <QHash>

class player : public QObject
{
    Q_OBJECT
public:
    explicit player(QObject *parent = 0);

    int getMaxPowerInPool1() const;
    void setMaxPowerInPool1(int value);

    int getMaxPowerInPool2() const;
    void setMaxPowerInPool2(int value);

    int getMaxPowerInPool3() const;
    void setMaxPowerInPool3(int value);

    int getMaxNumberOfDwellings() const;
    void setMaxNumberOfDwellings(int value);

    int getMaxNumberOfTradingPosts() const;
    void setMaxNumberOfTradingPosts(int value);

    int getMaxNumberOfTemples() const;
    void setMaxNumberOfTemples(int value);

    int getMaxNumberOfStrongholds() const;
    void setMaxNumberOfStrongholds(int value);

    int getMaxNumberOfSancturaries() const;
    void setMaxNumberOfSancturaries(int value);

    int getTownValueOfDwellings() const;
    void setTownValueOfDwellings(int value);

    int getTownValueOfTradingPosts() const;
    void setTownValueOfTradingPosts(int value);

    int getTownValueOfTemples() const;
    void setTownValueOfTemples(int value);

    int getTownValueOfStrongholds() const;
    void setTownValueOfStrongholds(int value);

    int getTownValueOfSancuararies() const;
    void setTownValueOfSancuararies(int value);

    QHash<Qstring, int> getResources() const;
    void setResources(const QHash<Qstring, int> &value);

    QHash<Qstring, int> getIncome() const;
    void setIncome(const QHash<Qstring, int> &value);

    QString getPlayerID() const;
    void setPlayerID(const QString &value);

signals:

public slots:
    QHash<Qstring, int> resources;
    QHash<Qstring, int> income;
    int maxPowerInPool1 = 12;
    int maxPowerInPool2 = 12;
    int maxPowerInPool3 = 12;
    int maxNumberOfDwellings = 8;
    int maxNumberOfTradingPosts = 4;
    int maxNumberOfTemples = 3;
    int maxNumberOfStrongholds = 1;
    int maxNumberOfSancturaries = 1;
    int townValueOfDwellings = 1;
    int townValueOfTradingPosts = 2;
    int townValueOfTemples = 2;
    int townValueOfStrongholds = 3;
    int townValueOfSancuararies = 3;
    QString playerID = "";
};

#endif // PLAYER_H
