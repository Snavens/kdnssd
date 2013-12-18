/*
 * This file was generated by dbusxml2cpp version 0.6
 * Command line was: dbusxml2cpp -m -p avahi_server_interface /home/qba/src/kdelibs/dnssd/org.freedesktop.Avahi.Server.xml
 *
 * dbusxml2cpp is Copyright (C) 2006 Trolltech ASA. All rights reserved.
 *
 * This is an auto-generated file.
 * This file may have been hand-edited. Look for HAND-EDIT comments
 * before re-generating it.
 */

#include "avahi_server_interface.h"
#include "servicebase.h"
#include <QtCore/QUrl>
#include <QDBusMetaType>
/*
 * Implementation of interface class OrgFreedesktopAvahiServerInterface
 */

OrgFreedesktopAvahiServerInterface::OrgFreedesktopAvahiServerInterface(const QString &service, const QString &path, const QDBusConnection &connection, QObject *parent)
    : QDBusAbstractInterface(service, path, staticInterfaceName(), connection, parent)
{
}

OrgFreedesktopAvahiServerInterface::~OrgFreedesktopAvahiServerInterface()
{
}

namespace KDNSSD {


void registerTypes()
{
    static bool registered=false;
    if (!registered) {
	qDBusRegisterMetaType<QList<QByteArray> >();
	registered=true;
    }
}

QString domainToDNS(const QString &domain)
{
	if (domainIsLocal(domain)) return domain;
	else return QUrl::toAce(domain);
}

QString DNSToDomain(const QString& domain)
{
	if (domainIsLocal(domain)) return domain;
	else return QUrl::fromAce(domain.toLatin1());
}
}

#include "moc_avahi_server_interface.cpp"
