#ifndef CTABLEVIEW_DEMO01_H
#define CTABLEVIEW_DEMO01_H

#include <QWidget>
#include <QTableView>

namespace Demo01 {
class CTableView;
}

class Demo01::CTableView : public QTableView
{
    Q_OBJECT
public:
    explicit CTableView(QWidget *parent = nullptr);

signals:

};

#endif // CTABLEVIEW_DEMO01_H
