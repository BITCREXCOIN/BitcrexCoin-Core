// Copyright (c) 2017-2019 The BITCREXCOIN developers
// Distributed under the MIT/X11 software license, see the accompanying
// file COPYING or http://www.opensource.org/licenses/mit-license.php.

#ifndef ZBICCONTROLDIALOG_H
#define ZBICCONTROLDIALOG_H

#include <QDialog>
#include <QTreeWidgetItem>
#include "zbic/zerocoin.h"

class CZerocoinMint;
class WalletModel;

namespace Ui {
class ZBicControlDialog;
}

class CZBicControlWidgetItem : public QTreeWidgetItem
{
public:
    explicit CZBicControlWidgetItem(QTreeWidget *parent, int type = Type) : QTreeWidgetItem(parent, type) {}
    explicit CZBicControlWidgetItem(int type = Type) : QTreeWidgetItem(type) {}
    explicit CZBicControlWidgetItem(QTreeWidgetItem *parent, int type = Type) : QTreeWidgetItem(parent, type) {}

    bool operator<(const QTreeWidgetItem &other) const;
};

class ZBicControlDialog : public QDialog
{
    Q_OBJECT

public:
    explicit ZBicControlDialog(QWidget *parent);
    ~ZBicControlDialog();

    void setModel(WalletModel* model);

    static std::set<std::string> setSelectedMints;
    static std::set<CMintMeta> setMints;
    static std::vector<CMintMeta> GetSelectedMints();

private:
    Ui::ZBicControlDialog *ui;
    WalletModel* model;

    void updateList();
    void updateLabels();

    enum {
        COLUMN_CHECKBOX,
        COLUMN_DENOMINATION,
        COLUMN_PUBCOIN,
        COLUMN_VERSION,
        COLUMN_PRECOMPUTE,
        COLUMN_CONFIRMATIONS,
        COLUMN_ISSPENDABLE
    };
    friend class CZBicControlWidgetItem;

private slots:
    void updateSelection(QTreeWidgetItem* item, int column);
    void ButtonAllClicked();
};

#endif // ZBICCONTROLDIALOG_H
