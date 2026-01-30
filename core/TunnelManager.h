#ifndef TUNNELMANAGER_H
#define TUNNELMANAGER_H

#pragma once

#include <QString>

class TunnelManager {
public:
    bool canStartTunnel(const QString &engineName) const;
    void registerTunnel(const QString &engineName);
    void unregisterTunnel();

    QString activeTunnel() const;

private:
    QString currentTunnel;
};

#endif // TUNNELMANAGER_H
