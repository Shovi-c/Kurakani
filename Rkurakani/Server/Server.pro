QT       += core gui
greaterThan(QT_MAJOR_VERSION, 4): QT += widgets
CONFIG += c++17

# Uncomment the following line to disable deprecated APIs before Qt 6.0.0
# DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000

# Boost include path (corrected)
INCLUDEPATH += D:/boost_1_86_0/stage/include/boost-1_86
INCLUDEPATH += D:/Rkurakani/Server

# Link Boost system library
LIBS += -L"D:/boost_1_86_0/stage/lib" -libboost_system-vc143-mt-x64-1_86


# Source files
SOURCES += \
    D:/Rkurakani/Server/chat_server.cpp \
    D:/Rkurakani/Server/main.cpp \
    D:/Rkurakani/Server/server.cpp

# Header files
HEADERS += \
    D:/Rkurakani/Server/chat_message.h \
    D:/Rkurakani/Server/server.h

# UI files
FORMS += \
    D:/Rkurakani/Server/server.ui

# Resource files
RESOURCES += \
    D:/Rkurakani/Server/server_resource.qrc

# Deployment paths (optional, can be adjusted as needed)
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target
