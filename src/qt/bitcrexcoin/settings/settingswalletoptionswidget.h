// Copyright (c) 2019 The BITCREXCOIN developers
// Distributed under the MIT software license, see the accompanying
// file COPYING or http://www.opensource.org/licenses/mit-license.php.

#ifndef SETTINGSWALLETOPTIONSWIDGET_H
#define SETTINGSWALLETOPTIONSWIDGET_H

#include <QWidget>
#include <QDataWidgetMapper>
#include "qt/bitcrexcoin/pwidget.h"
namespace Ui {
class SettingsWalletOptionsWidget;
}

class SettingsWalletOptionsWidget : public PWidget
{
    Q_OBJECT

public:
    explicit SettingsWalletOptionsWidget(BITCREXCOINGUI* _window, QWidget *parent = nullptr);
    ~SettingsWalletOptionsWidget();

    void setMapper(QDataWidgetMapper *mapper);

public slots:
    void onResetClicked();

private:
    Ui::SettingsWalletOptionsWidget *ui;
};

#endif // SETTINGSWALLETOPTIONSWIDGET_H
