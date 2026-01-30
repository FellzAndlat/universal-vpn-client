#include <QGuiApplication>
#include <QQmlApplicationEngine>
#include <QQmlContext>

#include "app/AppController.h"

int main(int argc, char *argv[])
{
    QGuiApplication app(argc, argv);

    QQmlApplicationEngine engine;
    QObject::connect(
        &engine,
        &QQmlApplicationEngine::objectCreationFailed,
        &app,
        []() { QCoreApplication::exit(-1); },
        Qt::QueuedConnection);

    AppController controller;
    engine.rootContext()->setContextProperty(
        "appController", &controller
        );

    engine.loadFromModule("universalVpnClient", "Main");

    return app.exec();
}
