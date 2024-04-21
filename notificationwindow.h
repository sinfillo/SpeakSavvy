// #ifndef POPUP_H
// #define POPUP_H

// #include <QLabel>
// #include <QGridLayout>
// #include <QPropertyAnimation>

// class PopUp : public QWidget
// {
//     Q_OBJECT
//     Q_PROPERTY(float popupOpacity READ getPopupOpacity WRITE setPopupOpacity)

//     void setPopupOpacity(float opacity);
//     float getPopupOpacity() const;

// public:
//     explicit PopUp(QWidget *parent = 0);

// protected:
//     void paintEvent(QPaintEvent *event);

// public slots:
//     void setPopupText(const QString& text);
//     void show();

// private slots:
//     void hideAnimation();
//     void hide();

// private:
//     QLabel label;
//     QGridLayout layout;
//     QPropertyAnimation animation;
//     float popupOpacity;
//     QTimer *timer;
// };

// #endif // POPUP_H
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
