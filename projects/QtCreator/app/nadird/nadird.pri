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
#   File: nadird.pri
#
# Author: $author$
#   Date: 5/12/2023
#
# generic QtCreator project file for nuulucidity framework nadir executable nadird
########################################################################

########################################################################
# nadird

# nadird TARGET
#
nadird_TARGET = nadird

# nadird INCLUDEPATH
#
nadird_INCLUDEPATH += \
$${nadir_INCLUDEPATH} \

# nadird DEFINES
#
nadird_DEFINES += \
$${nadir_DEFINES} \
DEFAULT_LOGGING_LEVELS_ERROR \
XOS_CONSOLE_MAIN_MAIN \

########################################################################
# nadird OBJECTIVE_HEADERS
#
#nadird_OBJECTIVE_HEADERS += \
#$${NADIR_SRC}/xos/app/console/nadird/main.hh \

# nadird OBJECTIVE_SOURCES
#
#nadird_OBJECTIVE_SOURCES += \
#$${NADIR_SRC}/xos/app/console/nadird/main.mm \

########################################################################
# nadird HEADERS
#
nadird_HEADERS += \
$${NADIR_SRC}/xos/app/console/nadir/version/main_opt.hpp \
$${NADIR_SRC}/xos/app/console/nadir/version/main.hpp \
\
$${NADIR_SRC}/xos/app/console/framework/version/main_opt.hpp \
$${NADIR_SRC}/xos/app/console/framework/version/main.hpp \
\
$${NADIR_SRC}/xos/app/console/base/main_opt.hpp \
$${NADIR_SRC}/xos/app/console/base/main.hpp \
$${NADIR_SRC}/xos/app/console/client/main_opt.hpp \
$${NADIR_SRC}/xos/app/console/client/main.hpp \
$${NADIR_SRC}/xos/app/console/server/main_opt.hpp \
$${NADIR_SRC}/xos/app/console/server/main.hpp \
\
$${NADIR_SRC}/xos/app/console/protocol/base/main_opt.hpp \
$${NADIR_SRC}/xos/app/console/protocol/base/main.hpp \
$${NADIR_SRC}/xos/app/console/protocol/client/main_opt.hpp \
$${NADIR_SRC}/xos/app/console/protocol/client/main.hpp \
$${NADIR_SRC}/xos/app/console/protocol/server/main_opt.hpp \
$${NADIR_SRC}/xos/app/console/protocol/server/main.hpp \
\
$${NADIR_SRC}/xos/app/console/nadir/main_opt.hpp \
$${NADIR_SRC}/xos/app/console/nadir/main.hpp \

# nadird SOURCES
#
nadird_SOURCES += \
$${NADIR_SRC}/xos/app/console/protocol/server/main_opt.cpp \
$${NADIR_SRC}/xos/app/console/protocol/server/main.cpp \

########################################################################
# nadird FRAMEWORKS
#
nadird_FRAMEWORKS += \
$${nadir_FRAMEWORKS} \

# nadird LIBS
#
nadird_LIBS += \
$${nadir_LIBS} \

########################################################################
# NO Qt
QT -= gui core
