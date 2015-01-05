#ifndef FILEENGINE_H
#define FILEENGINE_H

#include <QObject>

#include "engine.h"

namespace CMS {

class FileEnginePrivate;
class FileEngine : public Engine
{
    Q_OBJECT
    Q_DECLARE_PRIVATE(FileEngine)
public:
    explicit FileEngine(QObject *parent = 0);
    ~FileEngine();

    bool init(const QHash<QString, QString> &settings);

    virtual Page *getPage(const QString &path);

    virtual Page *getPageToEdit(const QString &path) const;

    virtual Page *loadPage(const QString &path) const;

    virtual bool savePage(Page *page);

    virtual QList<Page *> listPages(int depth = -1);

protected:
    FileEnginePrivate *d_ptr;
};

}

#endif // FILEENGINE_H
