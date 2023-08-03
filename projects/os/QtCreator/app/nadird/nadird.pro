########################################################################
# Copyright (c) 1988-2023 $organization$
#
# This software is provided by the author and contributors ``as is''
# and any express or implied warranties, including, but not limited to,
# the implied warranties of merchantability and fitness for a particular
# purpose are disclaimed. In no event shall the author or contributors
# be liable for any direct, indirect, incidental, special, exemplary,
# or consequential damages (including, but not limited to, procurement
# of substitute goods or services; loss of use, data, or profits; or
# business interruption) however caused and on any theory of liability,
# whether in contract, strict liability, or tort (including negligence
# or otherwise) arising in any way out of the use of this software,
# even if advised of the possibility of such damage.
#
#   File: nadird.pro
#
# Author: $author$
#   Date: 5/12/2023
#
# os specific QtCreator project .pro file for nuulucidity framework nadir executable nadird
########################################################################
# Depends: rostra;fila;crono
#
# Debug: nadir/build/os/QtCreator/Debug/bin/nadird
# Release: nadir/build/os/QtCreator/Release/bin/nadird
# Profile: nadir/build/os/QtCreator/Profile/bin/nadird
#
include(../../../../../build/QtCreator/nadir.pri)
include(../../../../QtCreator/nadir.pri)
include(../../nadir.pri)
include(../../../../QtCreator/app/nadird/nadird.pri)

TARGET = $${nadird_TARGET}

########################################################################
# INCLUDEPATH
#
INCLUDEPATH += \
$${nadird_INCLUDEPATH} \

# DEFINES
#
DEFINES += \
$${nadird_DEFINES} \

########################################################################
# OBJECTIVE_HEADERS
#
OBJECTIVE_HEADERS += \
$${nadird_OBJECTIVE_HEADERS} \

# OBJECTIVE_SOURCES
#
OBJECTIVE_SOURCES += \
$${nadird_OBJECTIVE_SOURCES} \

########################################################################
# HEADERS
#
HEADERS += \
$${nadird_HEADERS} \
$${nadird_OBJECTIVE_HEADERS} \

# SOURCES
#
SOURCES += \
$${nadird_SOURCES} \

########################################################################
# FRAMEWORKS
#
FRAMEWORKS += \
$${nadird_FRAMEWORKS} \

# LIBS
#
LIBS += \
$${nadird_LIBS} \
$${FRAMEWORKS} \

########################################################################
