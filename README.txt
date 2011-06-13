GentleDB for Qt.

License: LGPL 2.1+

Requirements:

* Qt (QtCore) 4.7   <qt.nokia.com>
* CMake 2.8         <www.cmake.org>
* OpenSSL 0.9.8     <www.openssl.org>

GentleDB is released under the GNU LGPL with the additional exemption that
compiling, linking, and/or using OpenSSL is allowed.

Instructions:

    # Compile thusly: (example for Linux)
    mkdir build
    cd build
    cmake ..
    make

    # Install thusly:
    sudo make install
    sudo ldconfig  # on Linux

Run the example thusly: (example for Linux)  [NOT VERIFIED]

    # Requires GentleDB4Qt to be installed:
    cd example-gui
    mkdir build
    cd build
    cmake ..
    make
    ./example-gui
