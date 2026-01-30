#ifndef ENGINEFACTORY_H
#define ENGINEFACTORY_H

#pragma once
#include <memory>
#include "VpnEngine.h"

enum class VpnType {
    OpenVPN,
    VLESSProxy,
    VLESSTun
};

class EngineFactory {
public:
    static std::unique_ptr<VpnEngine> create(VpnType type);
};

#endif // ENGINEFACTORY_H
