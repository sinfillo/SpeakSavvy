#ifndef NOTIFICATIONWINDOW_H
#define NOTIFICATIONWINDOW_H

#include <QWidget>
#include <QPropertyAnimation>
#include <QLabel>
#include <QVBoxLayout>
#include <QTimer>

class NotificationWindow : public QWidget
{
    Q_OBJECT

public:
    explicit NotificationWindow(QWidget *parent = nullptr);
    void setMessageText(const QString &text);
    void show();
protected:
    void paintEvent(QPaintEvent *event) override;

private:
    void setupUI();
    void setupAnimation();
    void setupTimer();

private slots:
    void hideAnimation();
    void hide();

    void setWindowOpacity(float opacity);
    float getWindowOpacity() const;

private:
    QLabel messageLabel;
    QVBoxLayout layout;
    QPropertyAnimation animation;
    QTimer *timer;
    float windowOpacity;
};

#endif // NOTIFICATIONWINDOW_H
