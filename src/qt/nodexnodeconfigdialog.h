#ifndef nodexNODECONFIGDIALOG_H
#define nodexNODECONFIGDIALOG_H

#include <QDialog>

namespace Ui {
    class nodexNodeConfigDialog;
}

QT_BEGIN_NAMESPACE
class QModelIndex;
QT_END_NAMESPACE

/** Dialog showing transaction details. */
class nodexNodeConfigDialog : public QDialog
{
    Q_OBJECT

public:
    explicit nodexNodeConfigDialog(QWidget *parent = 0, QString nodeAddress = "123.456.789.123:9999", QString privkey="MASTERNODEPRIVKEY");
    ~nodexNodeConfigDialog();

private:
    Ui::nodexNodeConfigDialog *ui;
};

#endif // nodexNODECONFIGDIALOG_H
