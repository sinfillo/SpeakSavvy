#ifndef WORD_H
#define WORD_H

#include <QObject>
#include <QString>

class Word : public QObject
{
    Q_OBJECT
public:
    explicit Word(QObject *parent = nullptr);
    Word(QString word, QString translation, QObject *parent = nullptr);
    QString getWord();
    QString getTranslation();
    Word(const Word &other);
    Word& operator=(const Word &other);

private:
    QString word;
    QString translation;

signals:
};

#endif // WORD_H
