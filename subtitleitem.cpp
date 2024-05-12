#include "subtitleitem.h"

SubtitleItem::SubtitleItem() {}

SubtitleItem::SubtitleItem(const QString &subtitle_, qint64 start_time_, qint64 end_time_)
{
    subtitle = subtitle_;
    start_time = start_time_;
    end_time = end_time_;
}

QString SubtitleItem::getSubtitle() const
{
    return subtitle;
}

qint64 SubtitleItem::getStartTime() const
{
    return start_time;
}

qint64 SubtitleItem::getEndTime() const
{
    return end_time;
}

