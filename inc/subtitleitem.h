#ifndef SUBTITLEITEM_H
#define SUBTITLEITEM_H

#include <QString>

class SubtitleItem {
public:
    SubtitleItem();
    SubtitleItem(const QString& subtitle_, qint64 start_time_, qint64 end_time_);
    QString getSubtitle() const;
    qint64 getStartTime() const;
    qint64 getEndTime() const;
private:
    QString subtitle;
    qint64 start_time;
    qint64 end_time;
};

#endif  // SUBTITLEITEM_H
