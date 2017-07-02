#include "qsync.h"

QSync::QSync(QQuickItem *parent):
    QQuickItem(parent)
{
    // By default, QQuickItem does not draw anything. If you subclass
    // QQuickItem to create a visual item, you will need to uncomment the
    // following line and re-implement updatePaintNode()

    // setFlag(ItemHasContents, true);
}


void QSync::casync_list_dt(QUrl source, QUrl destination)
{

}

void QSync::casync_list_ar(QUrl source, QUrl destination)
{

}

// casync extract
void QSync::casync_extract_dt(QUrl source, QUrl destination)
{

}

void QSync::casync_extract_ar(QUrl source, QUrl destination)
{

}

QSync::~QSync()
{

}
