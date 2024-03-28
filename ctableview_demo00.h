#ifndef CTABLEVIEW_DEMO00_H
#define CTABLEVIEW_DEMO00_H

#include <QTableView>
#include <QStandardItemModel>
#include <QStandardItem>
#include <QMenu>
#include <QAction>
#include <QEvent>

namespace Demo00 {
class CTableView;
}

class Demo00::CTableView : public QTableView
{
    Q_OBJECT

    QStandardItemModel* model;
    QMenu* menu;

public:
    CTableView(QWidget * = nullptr);

public slots:

};

#endif // CTABLEVIEW_DEMO00_H
