#ifndef VPNENGINE_H
#define VPNENGINE_H

#pragma once

#include <QString>

enum class EngineMode {
    Tunnel,
    Proxy
};

class VpnEngine {
public:
    virtual ~VpnEngine() = default;

    virtual bool start() = 0;
    virtual void stop() = 0;

    virtual EngineMode mode() const = 0;
    virtual QString name() const = 0;
};

#endif // VPNENGINE_H
