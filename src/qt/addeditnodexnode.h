#ifndef ADDEDITnodexNODE_H
#define ADDEDITnodexNODE_H

#include <QDialog>

namespace Ui {
class AddEditnodexNode;
}


class AddEditnodexNode : public QDialog
{
    Q_OBJECT

public:
    explicit AddEditnodexNode(QWidget *parent = 0);
    ~AddEditnodexNode();

protected:

private slots:
    void on_okButton_clicked();
    void on_cancelButton_clicked();

signals:

private:
    Ui::AddEditnodexNode *ui;
};

#endif // ADDEDITnodexNODE_H
