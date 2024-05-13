#include "../inc/notificationwindow.h"
#include <QPainter>
#include <QApplication>
#include <QScreen>
#include <QTimer>

NotificationWindow::NotificationWindow(QWidget *parent) : QWidget(parent)
{
    setWindowFlags(Qt::FramelessWindowHint | Qt::Tool | Qt::WindowStaysOnTopHint);
    setAttribute(Qt::WA_TranslucentBackground);
    setAttribute(Qt::WA_ShowWithoutActivating);

    setupUI();
    setupAnimation();
    setupTimer();
}

void NotificationWindow::setupUI()
{
    messageLabel.setAlignment(Qt::AlignHCenter | Qt::AlignVCenter);
    messageLabel.setStyleSheet("QLabel { color: white; font-size: 14px; margin: 6px 10px; }");
    layout.addWidget(&messageLabel);
    setLayout(&layout);
}

void NotificationWindow::setupAnimation()
{
    animation.setTargetObject(this);
    animation.setPropertyName("windowOpacity");
    connect(&animation, &QAbstractAnimation::finished, this, &NotificationWindow::hide);
}

void NotificationWindow::setupTimer()
{
    timer = new QTimer();
    connect(timer, &QTimer::timeout, this, &NotificationWindow::hideAnimation);
}

void NotificationWindow::paintEvent(QPaintEvent *event)
{
    Q_UNUSED(event)
    QPainter painter(this);
    painter.setRenderHint(QPainter::Antialiasing);

    QRect roundedRect = rect().adjusted(5, 5, -5, -5);
    painter.setBrush(QBrush(QColor(0, 0, 0, 180)));
    painter.setPen(Qt::NoPen);
    painter.drawRoundedRect(roundedRect, 10, 10);
}

void NotificationWindow::setMessageText(const QString &text)
{
    messageLabel.setText(text);
    adjustSize();
}

void NotificationWindow::show()
{
    setWindowOpacity(0.0);

    animation.setDuration(1000);
    animation.setStartValue(0.0);
    animation.setEndValue(1.0);

    const int padding = 280;
    const QPoint center = QApplication::activeWindow()->geometry().center();
    const int x = center.x() - qCeil(width() / 2);
    const int y = center.y() - qCeil(height() / 2) - padding;

    setGeometry(x, y, width(), height());
    QWidget::show();
    animation.start();
    timer->start(10000);
}

void NotificationWindow::hideAnimation()
{
    timer->stop();
    animation.setDuration(1000);
    animation.setStartValue(1.0);
    animation.setEndValue(0.0);
    animation.start();
}

void NotificationWindow::hide()
{
    if (windowOpacity == 0.0)
        QWidget::hide();
}

void NotificationWindow::setWindowOpacity(float opacity)
{
    windowOpacity = opacity;
    QWidget::setWindowOpacity(opacity);
}

float NotificationWindow::getWindowOpacity() const
{
    return windowOpacity;
}
