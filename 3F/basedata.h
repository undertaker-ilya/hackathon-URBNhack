#ifndef BASEDATA_H
#define BASEDATA_H

#include <QDialog>

namespace Ui {
class Basedata;
}

class Basedata : public QDialog
{
    Q_OBJECT

public:
    explicit Basedata(QWidget *parent = 0);
    ~Basedata();
    int exec(void);
private slots:
    void setPlaceHolderText(const QString &);

private:
    Ui::Basedata *ui;
};

#endif // BASEDATA_H
