// Copyright (c) 2016 The X3Coin developers
// Distributed under the MIT/X11 software license, see the accompanying
// file COPYING or http://www.opensource.org/licenses/mit-license.php.
#ifndef UPDATE_H
#define UPDATE_H

#include <QObject>
#include <QNetworkAccessManager>
#include <QNetworkRequest>
#include <QNetworkReply>
#include <QUrl>

const static QString X3CCOIN_UPDATE_URL = "http://x3c.io/download/update.txt";

class Updater : public QObject
{
    Q_OBJECT
public:
    explicit Updater(QObject *parent = 0);

    void checkForUpdate();

signals:
    
public slots:
    void replyFinished (QNetworkReply *reply);

private:
   QNetworkAccessManager *manager;

};

#endif // UPDATE_H
