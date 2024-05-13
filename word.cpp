#include "word.h"

Word::Word(QObject *parent)
    : QObject{parent}
{}

Word::Word(QString word, QString translation, QObject *parent)
    : word(word), translation(translation), QObject{parent}
{

}

QString Word::getWord() const
{
    return word;
}

QString Word::getTranslation() const
{
    return translation;
}

Word::Word(const Word &other)
{
    word = other.word;
    translation = other.translation;
}

Word &Word::operator=(const Word &other)
{
    if (this != &other) {
        word = other.word;
        translation = other.translation;
    }
    return *this;
}
