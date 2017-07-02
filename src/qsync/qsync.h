#ifndef QSYNC_H
#define QSYNC_H

#include <QQuickItem>
#include <QUrl>

class QSync : public QQuickItem
{
    Q_OBJECT
    Q_DISABLE_COPY(QSync)


public slots:
    // casyn list
    void casync_list_dt(QUrl source, QUrl destination, QMap<QString> options = QMap<QString>());
    void casync_list_ar(QUrl source, QUrl destination, QMap<QString> options = QMap<QString>());

    // casync extract
    void casync_extract_dt(QUrl source, QUrl destination, QMap<QString> options = QMap<QString>());
    void casync_extract_ar(QUrl source, QUrl destination, QMap<QString> options = QMap<QString>());

    // casync digest //TODO: investigate needs of digest
    //void casync_digest_dt(QUrl source, QUrl destination, QMap<QString> options = QMap<QString>());
    //void casync_digest_ar(QUrl source, QUrl destination, QMap<QString> options = QMap<QString>());

public:
    QSync(QQuickItem *parent = nullptr);
    ~QSync();
};

#endif // QSYNC_H
