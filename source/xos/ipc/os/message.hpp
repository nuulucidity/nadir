///////////////////////////////////////////////////////////////////////
/// Copyright (c) 1988-2019 $organization$
///
/// This software is provided by the author and contributors ``as is'' 
/// and any express or implied warranties, including, but not limited to, 
/// the implied warranties of merchantability and fitness for a particular 
/// purpose are disclaimed. In no event shall the author or contributors 
/// be liable for any direct, indirect, incidental, special, exemplary, 
/// or consequential damages (including, but not limited to, procurement 
/// of substitute goods or services; loss of use, data, or profits; or 
/// business interruption) however caused and on any theory of liability, 
/// whether in contract, strict liability, or tort (including negligence 
/// or otherwise) arising in any way out of the use of this software, 
/// even if advised of the possibility of such damage.
///
///   File: message.hpp
///
/// Author: $author$
///   Date: 1/14/2020
///////////////////////////////////////////////////////////////////////
#ifndef XOS_IPC_OS_MESSAGE_HPP
#define XOS_IPC_OS_MESSAGE_HPP

#include "xos/ipc/os/os.hpp"

#if defined(WINDOWS)  
#include "xos/ipc/microsoft/windows/message.hpp"
#elif defined(APPLEOSX)  
#include "xos/ipc/apple/osx/message.hpp"
#elif defined(APPLEIOS)  
#include "xos/ipc/apple/ios/message.hpp"
#elif defined(SOLARIS)  
#include "xos/ipc/oracle/solaris/message.hpp"
#elif defined(MACH)  
#include "xos/ipc/mach/message.hpp"
#elif defined(LINUX)  
#include "xos/ipc/linux/message.hpp"
#else /// defined(LINUX)  
#include "xos/ipc/posix/message.hpp"
#endif /// defined(LINUX) 

namespace xos {
namespace ipc {
namespace os {

typedef os::message message;

} /// namespace os
} /// namespace ipc
} /// namespace xos

#endif /// ndef XOS_IPC_OS_MESSAGE_HPP
