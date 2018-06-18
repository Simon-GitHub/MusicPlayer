#pragma once

#include <QWidget>
#include <QMouseEvent>
namespace Ui { class FramelessWidget; };

class FramelessWidget : public QWidget
{
    Q_OBJECT

public:
    explicit FramelessWidget(QWidget *parent = Q_NULLPTR);
    ~FramelessWidget();

private:
    Ui::FramelessWidget *ui;
    void initUI();
protected:
    //ʵ�������ޱ߿򴰿��϶�
    QPoint m_pointMove;
    void mousePressEvent(QMouseEvent *event);
    void mouseMoveEvent(QMouseEvent *event);
};
