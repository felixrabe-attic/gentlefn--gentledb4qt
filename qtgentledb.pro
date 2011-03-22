QT      = core

TEMPLATE = lib

DEFINES += QTGENTLEDB_LIBRARY

SOURCES += qtgentledb.cpp

HEADERS += qtgentledb.h
HEADERS += qtgentledb_global.h

# QtCreator-generated:
symbian {
    #Symbian specific definitions
    MMP_RULES += EXPORTUNFROZEN
    TARGET.UID3 = 0xE438B9EF
    TARGET.CAPABILITY = 
    TARGET.EPOCALLOWDLLDATA = 1
    addFiles.sources = qtgentledb.dll
    addFiles.path = !:/sys/bin
    DEPLOYMENT += addFiles
}

unix:!symbian {
    maemo5 {
        target.path = /opt/usr/lib
    } else {
        target.path = /usr/local/lib
    }
    INSTALLS += target
}
