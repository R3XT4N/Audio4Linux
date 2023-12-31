/*
 * This file was generated by qdbusxml2cpp version 0.8
 * Command line was: qdbusxml2cpp manifest.xml --adaptor ServerAdaptor --proxy ClientProxy
 *
 * qdbusxml2cpp is Copyright (C) 2022 The Qt Company Ltd.
 *
 * This is an auto-generated file.
 * Do not edit! All changes made to it will be lost.
 */

#include "ServerAdaptor.h"
#include <QtCore/QMetaObject>
#include <QtCore/QByteArray>
#include <QtCore/QList>
#include <QtCore/QMap>
#include <QtCore/QString>
#include <QtCore/QStringList>
#include <QtCore/QVariant>

/*
 * Implementation of adaptor class GuiAdaptor
 */

GuiAdaptor::GuiAdaptor(QObject *parent)
    : QDBusAbstractAdaptor(parent)
{
    // constructor
    setAutoRelaySignals(true);
}

GuiAdaptor::~GuiAdaptor()
{
    // destructor
}

void GuiAdaptor::raiseWindow()
{
    // handle method call me.timschneeberger.jdsp4linux.Gui.raiseWindow
    QMetaObject::invokeMethod(parent(), "raiseWindow");
}

/*
 * Implementation of adaptor class ServiceAdaptor
 */

ServiceAdaptor::ServiceAdaptor(QObject *parent)
    : QDBusAbstractAdaptor(parent)
{
    // constructor
    setAutoRelaySignals(true);
}

ServiceAdaptor::~ServiceAdaptor()
{
    // destructor
}

QString ServiceAdaptor::appFlavor() const
{
    // get the value of property AppFlavor
    return qvariant_cast< QString >(parent()->property("AppFlavor"));
}

QString ServiceAdaptor::appVersion() const
{
    // get the value of property AppVersion
    return qvariant_cast< QString >(parent()->property("AppVersion"));
}

QString ServiceAdaptor::audioFormat() const
{
    // get the value of property AudioFormat
    return qvariant_cast< QString >(parent()->property("AudioFormat"));
}

QString ServiceAdaptor::coreVersion() const
{
    // get the value of property CoreVersion
    return qvariant_cast< QString >(parent()->property("CoreVersion"));
}

bool ServiceAdaptor::isProcessing() const
{
    // get the value of property IsProcessing
    return qvariant_cast< bool >(parent()->property("IsProcessing"));
}

QString ServiceAdaptor::samplingRate() const
{
    // get the value of property SamplingRate
    return qvariant_cast< QString >(parent()->property("SamplingRate"));
}

void ServiceAdaptor::commit()
{
    // handle method call me.timschneeberger.jdsp4linux.Service.commit
    QMetaObject::invokeMethod(parent(), "commit");
}

void ServiceAdaptor::deletePreset(const QString &name)
{
    // handle method call me.timschneeberger.jdsp4linux.Service.deletePreset
    QMetaObject::invokeMethod(parent(), "deletePreset", Q_ARG(QString, name));
}

QString ServiceAdaptor::get(const QString &key)
{
    // handle method call me.timschneeberger.jdsp4linux.Service.get
    QString value;
    QMetaObject::invokeMethod(parent(), "get", Q_RETURN_ARG(QString, value), Q_ARG(QString, key));
    return value;
}

QString ServiceAdaptor::getAll()
{
    // handle method call me.timschneeberger.jdsp4linux.Service.getAll
    QString kvpairs;
    QMetaObject::invokeMethod(parent(), "getAll", Q_RETURN_ARG(QString, kvpairs));
    return kvpairs;
}

QStringList ServiceAdaptor::getKeys()
{
    // handle method call me.timschneeberger.jdsp4linux.Service.getKeys
    QStringList keys;
    QMetaObject::invokeMethod(parent(), "getKeys", Q_RETURN_ARG(QStringList, keys));
    return keys;
}

QStringList ServiceAdaptor::getPresets()
{
    // handle method call me.timschneeberger.jdsp4linux.Service.getPresets
    QStringList presets;
    QMetaObject::invokeMethod(parent(), "getPresets", Q_RETURN_ARG(QStringList, presets));
    return presets;
}

void ServiceAdaptor::loadPreset(const QString &name)
{
    // handle method call me.timschneeberger.jdsp4linux.Service.loadPreset
    QMetaObject::invokeMethod(parent(), "loadPreset", Q_ARG(QString, name));
}

void ServiceAdaptor::savePreset(const QString &name)
{
    // handle method call me.timschneeberger.jdsp4linux.Service.savePreset
    QMetaObject::invokeMethod(parent(), "savePreset", Q_ARG(QString, name));
}

void ServiceAdaptor::set(const QString &key, const QDBusVariant &value)
{
    // handle method call me.timschneeberger.jdsp4linux.Service.set
    QMetaObject::invokeMethod(parent(), "set", Q_ARG(QString, key), Q_ARG(QDBusVariant, value));
}

void ServiceAdaptor::setAndCommit(const QString &key, const QDBusVariant &value)
{
    // handle method call me.timschneeberger.jdsp4linux.Service.setAndCommit
    QMetaObject::invokeMethod(parent(), "setAndCommit", Q_ARG(QString, key), Q_ARG(QDBusVariant, value));
}

