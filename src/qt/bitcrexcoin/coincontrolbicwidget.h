// Copyright (c) 2019 The BITCREXCOIN developers
// Distributed under the MIT software license, see the accompanying
// file COPYING or http://www.opensource.org/licenses/mit-license.php.

#ifndef COINCONTROLBICWIDGET_H
#define COINCONTROLBICWIDGET_H

#include <QDialog>

namespace Ui {
class CoinControlBicWidget;
}

class CoinControlBicWidget : public QDialog
{
    Q_OBJECT

public:
    explicit CoinControlBicWidget(QWidget *parent = nullptr);
    ~CoinControlBicWidget();

private:
    Ui::CoinControlBicWidget *ui;
};

#endif // COINCONTROLBICWIDGET_H
