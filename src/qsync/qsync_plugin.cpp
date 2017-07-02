#include "qsync_plugin.h"
#include "qsync.h"

#include <qqml.h>

void QsyncPlugin::registerTypes(const char *uri)
{
    // @uri com.protoze.qsync
    qmlRegisterType<QSync>(uri, 1, 0, "QSync");
}

