///////////////////////////////////////////////////////////////////////
/// Copyright (c) 1988-2023 $organization$
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
///   File: main_opt.hpp
///
/// Author: $author$
///   Date: 1/4/2023, 1/21/2023
///////////////////////////////////////////////////////////////////////
#ifndef XOS_APP_CONSOLE_PROTOCOL_BASE_MAIN_OPT_HPP
#define XOS_APP_CONSOLE_PROTOCOL_BASE_MAIN_OPT_HPP

#include "xos/app/console/base/main.hpp"

///////////////////////////////////////////////////////////////////////
#define XOS_APP_CONSOLE_PROTOCOL_BASE_MAIN_OPTIONS_CHARS_EXTEND \

#define XOS_APP_CONSOLE_PROTOCOL_BASE_MAIN_OPTIONS_OPTIONS_EXTEND \

///////////////////////////////////////////////////////////////////////
#define XOS_APP_CONSOLE_PROTOCOL_BASE_MAIN_OPTIONS_CHARS \
   XOS_APP_CONSOLE_PROTOCOL_BASE_MAIN_OPTIONS_CHARS_EXTEND \
   XOS_APP_CONSOLE_BASE_MAIN_OPTIONS_CHARS \

#define XOS_APP_CONSOLE_PROTOCOL_BASE_MAIN_OPTIONS_OPTIONS \
   XOS_APP_CONSOLE_PROTOCOL_BASE_MAIN_OPTIONS_OPTIONS_EXTEND \
   XOS_APP_CONSOLE_BASE_MAIN_OPTIONS_OPTIONS \

///////////////////////////////////////////////////////////////////////
#define XOS_APP_CONSOLE_PROTOCOL_BASE_MAIN_ARGS 0
#define XOS_APP_CONSOLE_PROTOCOL_BASE_MAIN_ARGV 0,

namespace xos {
namespace app {
namespace console {
namespace protocol {
namespace base {

/// class main_optt
template 
<class TExtends = xos::app::console::base::main, 
 class TImplements = typename TExtends::implements>

class exported main_optt: virtual public TImplements, public TExtends {
public:
    typedef TImplements implements;
    typedef TExtends extends;
    typedef main_optt derives;

    typedef typename extends::char_t char_t;
    typedef typename extends::end_char_t end_char_t;
    enum { end_char = extends::end_char };
    typedef typename extends::string_t string_t;
    typedef typename extends::reader_t reader_t;
    typedef typename extends::writer_t writer_t;
    typedef typename extends::file_t file_t;

    /// constructor / destructor
    main_optt()
    : run_(0), 

      restart_(false), stop_(false),
      
      hello_request_("hello"),
      hello_response_(hello_request_),

      restart_request_("restart"),
      restart_response_(restart_request_),

      stop_request_("stop"),
      stop_response_(stop_request_),

      request_(hello_request_),
      response_(hello_response_) {
    }
    virtual ~main_optt() {
    }
private:
    main_optt(const main_optt& copy) {
        throw exception(exception_unexpected);
    }

protected:
    typedef typename extends::in_reader_t in_reader_t;
    typedef typename extends::out_writer_t out_writer_t;
    typedef typename extends::err_writer_t err_writer_t;

    typedef typename extends::string_reader_t string_reader_t;
    typedef typename string_reader_t::string_t reader_string_t;
    typedef typename reader_string_t::char_t reader_char_t;
    typedef typename extends::hex_read_to_string_t hex_read_to_string_t;
    typedef typename extends::hex_reader_t hex_reader_t;

    /// ...run
    int (derives::*run_)(int argc, char_t** argv, char_t** env);
    virtual int run(int argc, char_t** argv, char_t** env) {
        int err = 0;
        if ((run_)) {
            err = (this->*run_)(argc, argv, env);
        } else {
            err = extends::run(argc, argv, env);
        }
        return err;
    }

    ///////////////////////////////////////////////////////////////////////

    /// ...process_request_run
    int (derives::*process_request_run_)(int argc, char_t** argv, char_t** env);
    virtual int process_request_run(int argc, char_t** argv, char_t** env) {
        int err = 0;
        if (process_request_run_) {
            err = (this->*process_request_run_)(argc, argv, env);
        } else {
            err = default_process_request_run(argc, argv, env);
        }
        return err;
    }
    virtual int default_process_request_run(int argc, char_t** argv, char_t** env) {
        int err = 0;
        LOGGER_IS_LOGGED_INFO("!(err = all_prepare_response_run(argc, argv, env))...");
        if (!(err = all_prepare_response_run(argc, argv, env))) {
            LOGGER_IS_LOGGED_INFO("...!(err = all_prepare_response_run(argc, argv, env))");
            LOGGER_IS_LOGGED_INFO("!(err = all_output_response_run(argc, argv, env))...");
            if (!(err = all_output_response_run(argc, argv, env))) {
                LOGGER_IS_LOGGED_INFO("...!(err = all_output_response_run(argc, argv, env))");
            } else {
            }
        } else {
        }
        return err;
    }
    virtual int before_process_request_run(int argc, char_t** argv, char_t** env) {
        int err = 0;
        return err;
    }
    virtual int after_process_request_run(int argc, char_t** argv, char_t** env) {
        int err = 0;
        return err;
    }
    virtual int all_process_request_run(int argc, char_t** argv, char_t** env) {
        int err = 0;
        if (!(err = before_process_request_run(argc, argv, env))) {
            int err2 = 0;
            err = process_request_run(argc, argv, env);
            if ((err2 = after_process_request_run(argc, argv, env))) {
                if (!(err)) err = err2;
            }
        }
        return err;
    }
    virtual int set_process_request_run(int argc, char_t** argv, char_t** env) {
        int err = 0;
        run_ = &derives::all_process_request_run;
        return err;
    }
    virtual int process_request_run_set(int argc, char_t** argv, char_t** env) {
        int err = 0;
        return err;
    }

    /// ...process_response_run
    int (derives::*process_response_run_)(int argc, char_t** argv, char_t** env);
    virtual int process_response_run(int argc, char_t** argv, char_t** env) {
        int err = 0;
        if (process_response_run_) {
            err = (this->*process_response_run_)(argc, argv, env);
        } else {
            err = default_process_response_run(argc, argv, env);
        }
        return err;
    }
    virtual int default_process_response_run(int argc, char_t** argv, char_t** env) {
        int err = 0;
        LOGGER_IS_LOGGED_INFO("!(err = all_output_response_run(argc, argv, env))...");
        if (!(err = all_output_response_run(argc, argv, env))) {
            LOGGER_IS_LOGGED_INFO("...!(err = all_output_response_run(argc, argv, env)");
        } else {
        }
        return err;
    }
    virtual int before_process_response_run(int argc, char_t** argv, char_t** env) {
        int err = 0;
        return err;
    }
    virtual int after_process_response_run(int argc, char_t** argv, char_t** env) {
        int err = 0;
        return err;
    }
    virtual int all_process_response_run(int argc, char_t** argv, char_t** env) {
        int err = 0;
        if (!(err = before_process_response_run(argc, argv, env))) {
            int err2 = 0;
            err = process_response_run(argc, argv, env);
            if ((err2 = after_process_response_run(argc, argv, env))) {
                if (!(err)) err = err2;
            }
        }
        return err;
    }
    virtual int set_process_response_run(int argc, char_t** argv, char_t** env) {
        int err = 0;
        run_ = &derives::all_process_response_run;
        return err;
    }
    virtual int process_response_run_set(int argc, char_t** argv, char_t** env) {
        int err = 0;
        return err;
    }

    ///////////////////////////////////////////////////////////////////////

    /// ...prepare_response_run
    int (derives::*prepare_response_run_)(int argc, char_t** argv, char_t** env);
    virtual int prepare_response_run(int argc, char_t** argv, char_t** env) {
        int err = 0;
        if (prepare_response_run_) {
            err = (this->*prepare_response_run_)(argc, argv, env);
        } else {
            err = default_prepare_response_run(argc, argv, env);
        }
        return err;
    }
    virtual int default_prepare_response_run(int argc, char_t** argv, char_t** env) {
        int err = 0;
        const string_t& request = this->request();
        const char_t* chars = 0; size_t length = 0;

        LOGGER_IS_LOGGED_INFO("(chars = request.has_chars(length))...");
        if ((chars = request.has_chars(length))) {
            string_t& response = this->response();
            
            LOGGER_IS_LOGGED_INFO("...(chars = request.has_chars(length))");
            LOGGER_IS_LOGGED_INFO("all_prepare_response_to_request_run(response, request, argc, argv, env)...");
            if (!(err = all_prepare_response_to_request_run(response, request, argc, argv, env))) {
                LOGGER_IS_LOGGED_INFO("...all_prepare_response_to_request_run(response, request, argc, argv, env)");
            } else {
            }
        }
        return err;
    }
    virtual int before_prepare_response_run(int argc, char_t** argv, char_t** env) {
        int err = 0;
        return err;
    }
    virtual int after_prepare_response_run(int argc, char_t** argv, char_t** env) {
        int err = 0;
        return err;
    }
    virtual int all_prepare_response_run(int argc, char_t** argv, char_t** env) {
        int err = 0;
        if (!(err = before_prepare_response_run(argc, argv, env))) {
            int err2 = 0;
            err = prepare_response_run(argc, argv, env);
            if ((err2 = after_prepare_response_run(argc, argv, env))) {
                if (!(err)) err = err2;
            }
        }
        return err;
    }

    ///////////////////////////////////////////////////////////////////////

    /// ...process_request_run
    virtual int process_request_run(string_t& request, int argc, char_t** argv, char_t** env) {
        int err = 0;
        string_t& response = this->response();

        LOGGER_IS_LOGGED_INFO("all_prepare_response_to_request_run...");
        if (!(err = all_prepare_response_to_request_run(response, request, argc, argv, env))) {
            LOGGER_IS_LOGGED_INFO("...all_prepare_response_to_request_run");
            
            LOGGER_IS_LOGGED_INFO("all_output_response_run(response, argc, argv, env)...");
            if (!(err = all_output_response_run(response, argc, argv, env))) {
                LOGGER_IS_LOGGED_INFO("...all_output_response_run(response, argc, argv, env)");
            } else {
            }
        } else {
        }
        return err;
    }
    virtual int before_process_request_run(string_t& request, int argc, char_t** argv, char_t** env) {
        int err = 0;
        return err;
    }
    virtual int after_process_request_run(string_t& request, int argc, char_t** argv, char_t** env) {
        int err = 0;
        return err;
    }
    virtual int all_process_request_run(string_t& request, int argc, char_t** argv, char_t** env) {
        int err = 0;
        if (!(err = before_process_request_run(request, argc, argv, env))) {
            int err2 = 0;
            err = process_request_run(request, argc, argv, env);
            if ((err2 = after_process_request_run(request, argc, argv, env))) {
                if (!(err)) err = err2;
            }
        }
        return err;
    }
    /// ...process_response_run
    virtual int process_response_run(string_t& response, int argc, char_t** argv, char_t** env) {
        int err = 0;
        LOGGER_IS_LOGGED_INFO("!(err = all_output_response_run(response, argc, argv, env))...");
        if (!(err = all_output_response_run(response, argc, argv, env))) {
            LOGGER_IS_LOGGED_INFO("...!(err = all_output_response_run(response, argc, argv, env))");
        } else {
        }
        return err;
    }
    virtual int before_process_response_run(string_t& response, int argc, char_t** argv, char_t** env) {
        int err = 0;
        return err;
    }
    virtual int after_process_response_run(string_t& response, int argc, char_t** argv, char_t** env) {
        int err = 0;
        return err;
    }
    virtual int all_process_response_run(string_t& response, int argc, char_t** argv, char_t** env) {
        int err = 0;
        if (!(err = before_process_response_run(response, argc, argv, env))) {
            int err2 = 0;
            err = process_response_run(response, argc, argv, env);
            if ((err2 = after_process_response_run(response, argc, argv, env))) {
                if (!(err)) err = err2;
            }
        }
        return err;
    }

    ///////////////////////////////////////////////////////////////////////

    /// ...prepare_response_to_hello_request_run
    int (derives::*prepare_response_to_hello_request_run_)(string_t& response, const string_t& request, int argc, char_t** argv, char_t** env);
    virtual int prepare_response_to_hello_request_run(string_t& response, const string_t& request, int argc, char_t** argv, char_t** env) {
        int err = 0;
        if (prepare_response_to_hello_request_run_) {
            err = (this->*prepare_response_to_hello_request_run_)(response, request, argc, argv, env);
        } else {
            err = default_prepare_response_to_hello_request_run(response, request, argc, argv, env);
        }
        return err;
    }
    virtual int default_prepare_response_to_hello_request_run(string_t& response, const string_t& request, int argc, char_t** argv, char_t** env) {
        int err = 0;
        const string_t& hello_response = this->hello_response();
        response.assign(hello_response);
        return err;
    }
    virtual int before_prepare_response_to_hello_request_run(string_t& response, const string_t& request, int argc, char_t** argv, char_t** env) {
        int err = 0;
        return err;
    }
    virtual int after_prepare_response_to_hello_request_run(string_t& response, const string_t& request, int argc, char_t** argv, char_t** env) {
        int err = 0;
        return err;
    }
    virtual int all_prepare_response_to_hello_request_run(string_t& response, const string_t& request, int argc, char_t** argv, char_t** env) {
        int err = 0;
        if (!(err = before_prepare_response_to_hello_request_run(response, request, argc, argv, env))) {
            int err2 = 0;
            err = prepare_response_to_hello_request_run(response, request, argc, argv, env);
            if ((err2 = after_prepare_response_to_hello_request_run(response, request, argc, argv, env))) {
                if (!(err)) err = err2;
            }
        }
        return err;
    }
    /// ...prepare_response_to_restart_request_run
    int (derives::*prepare_response_to_restart_request_run_)(string_t& response, const string_t& request, int argc, char_t** argv, char_t** env);
    virtual int prepare_response_to_restart_request_run(string_t& response, const string_t& request, int argc, char_t** argv, char_t** env) {
        int err = 0;
        if (prepare_response_to_restart_request_run_) {
            err = (this->*prepare_response_to_restart_request_run_)(response, request, argc, argv, env);
        } else {
            err = default_prepare_response_to_restart_request_run(response, request, argc, argv, env);
        }
        return err;
    }
    virtual int default_prepare_response_to_restart_request_run(string_t& response, const string_t& request, int argc, char_t** argv, char_t** env) {
        int err = 0;
        const string_t& restart_response = this->restart_response();
        bool restart = this->set_restart(true);
        this->restart_set(restart);
        response.assign(restart_response);
        return err;
    }
    virtual int before_prepare_response_to_restart_request_run(string_t& response, const string_t& request, int argc, char_t** argv, char_t** env) {
        int err = 0;
        return err;
    }
    virtual int after_prepare_response_to_restart_request_run(string_t& response, const string_t& request, int argc, char_t** argv, char_t** env) {
        int err = 0;
        return err;
    }
    virtual int all_prepare_response_to_restart_request_run(string_t& response, const string_t& request, int argc, char_t** argv, char_t** env) {
        int err = 0;
        if (!(err = before_prepare_response_to_restart_request_run(response, request, argc, argv, env))) {
            int err2 = 0;
            err = prepare_response_to_restart_request_run(response, request, argc, argv, env);
            if ((err2 = after_prepare_response_to_restart_request_run(response, request, argc, argv, env))) {
                if (!(err)) err = err2;
            }
        }
        return err;
    }
    /// ...prepare_response_to_stop_request_run
    int (derives::*prepare_response_to_stop_request_run_)(string_t& response, const string_t& request, int argc, char_t** argv, char_t** env);
    virtual int prepare_response_to_stop_request_run(string_t& response, const string_t& request, int argc, char_t** argv, char_t** env) {
        int err = 0;
        if (prepare_response_to_stop_request_run_) {
            err = (this->*prepare_response_to_stop_request_run_)(response, request, argc, argv, env);
        } else {
            err = default_prepare_response_to_stop_request_run(response, request, argc, argv, env);
        }
        return err;
    }
    virtual int default_prepare_response_to_stop_request_run(string_t& response, const string_t& request, int argc, char_t** argv, char_t** env) {
        int err = 0;
        const string_t& stop_response = this->stop_response();
        bool stop = this->set_stop(true);
        this->stop_set(stop);
        response.assign(stop_response);
        return err;
    }
    virtual int before_prepare_response_to_stop_request_run(string_t& response, const string_t& request, int argc, char_t** argv, char_t** env) {
        int err = 0;
        return err;
    }
    virtual int after_prepare_response_to_stop_request_run(string_t& response, const string_t& request, int argc, char_t** argv, char_t** env) {
        int err = 0;
        return err;
    }
    virtual int all_prepare_response_to_stop_request_run(string_t& response, const string_t& request, int argc, char_t** argv, char_t** env) {
        int err = 0;
        if (!(err = before_prepare_response_to_stop_request_run(response, request, argc, argv, env))) {
            int err2 = 0;
            err = prepare_response_to_stop_request_run(response, request, argc, argv, env);
            if ((err2 = after_prepare_response_to_stop_request_run(response, request, argc, argv, env))) {
                if (!(err)) err = err2;
            }
        }
        return err;
    }

    /// ...prepare_response_to_unknown_request_run
    int (derives::*prepare_response_to_unknown_request_run_)(string_t& response, const string_t& request, int argc, char_t** argv, char_t** env);
    virtual int prepare_response_to_unknown_request_run(string_t& response, const string_t& request, int argc, char_t** argv, char_t** env) {
        int err = 0;
        if (prepare_response_to_unknown_request_run_) {
            if (!(err = (this->*prepare_response_to_unknown_request_run_)(response, request, argc, argv, env))) {
            } else {
            }
        } else {
            if (!(err = default_prepare_response_to_unknown_request_run(response, request, argc, argv, env))) {
            } else {
            }
        }
        return err;
    }
    virtual int default_prepare_response_to_unknown_request_run(string_t& response, const string_t& request, int argc, char_t** argv, char_t** env) {
        int err = 0;
        return err;
    }
    virtual int before_prepare_response_to_unknown_request_run(string_t& response, const string_t& request, int argc, char_t** argv, char_t** env) {
        int err = 0;
        return err;
    }
    virtual int after_prepare_response_to_unknown_request_run(string_t& response, const string_t& request, int argc, char_t** argv, char_t** env) {
        int err = 0;
        return err;
    }
    virtual int all_prepare_response_to_unknown_request_run(string_t& response, const string_t& request, int argc, char_t** argv, char_t** env) {
        int err = 0;
        if (!(err = before_prepare_response_to_unknown_request_run(response, request, argc, argv, env))) {
            int err2 = 0;
            err = prepare_response_to_unknown_request_run(response, request, argc, argv, env);
            if ((err2 = after_prepare_response_to_unknown_request_run(response, request, argc, argv, env))) {
                if (!(err)) err = err2;
            }
        }
        return err;
    }

    /// ...prepare_response_to_request_run
    int (derives::*prepare_response_to_request_run_)(string_t& response, const string_t& request, int argc, char_t** argv, char_t** env);
    virtual int prepare_response_to_request_run(string_t& response, const string_t& request, int argc, char_t** argv, char_t** env) {
        int err = 0;
        if (prepare_response_to_request_run_) {
            err = (this->*prepare_response_to_request_run_)(response, request, argc, argv, env);
        } else {
            err = default_prepare_response_to_request_run(response, request, argc, argv, env);
        }
        return err;
    }
    virtual int default_prepare_response_to_request_run(string_t& response, const string_t& request, int argc, char_t** argv, char_t** env) {
        int err = 0;
        int unequal = 0;
        const string_t& hello_request = this->hello_request();

        LOGGER_IS_LOGGED_INFO("response.assign(request = \"" << request << "\")...");
        response.assign(request);
        LOGGER_IS_LOGGED_INFO("...\"" << response << "\" = response.assign(request = \"" << request << "\")");

        LOGGER_IS_LOGGED_INFO("!(unequal = hello_request.compare(request))...");
        if (!(unequal = hello_request.compare(request))) {
            LOGGER_IS_LOGGED_INFO("...!(unequal = hello_request.compare(request))");

            LOGGER_IS_LOGGED_INFO("all_prepare_response_to_hello_request_run(response, request, argc, argv, env)...");
            if (!(err = all_prepare_response_to_hello_request_run(response, request, argc, argv, env))) {
                LOGGER_IS_LOGGED_INFO("...all_prepare_response_to_hello_request_run(response, request, argc, argv, env)");
            } else {
            }
        } else {
            const string_t& restart_request = this->restart_request();

            LOGGER_IS_LOGGED_INFO("(unequal = hello_request.compare(request))...");
            LOGGER_IS_LOGGED_INFO("!(unequal = restart_request.compare(request))...");
            if (!(unequal = restart_request.compare(request))) {
                LOGGER_IS_LOGGED_INFO("...!(unequal = restart_request.compare(request))");

                LOGGER_IS_LOGGED_INFO("all_prepare_response_to_restart_request_run(response, request, argc, argv, env)...");
                if (!(err = all_prepare_response_to_restart_request_run(response, request, argc, argv, env))) {
                    LOGGER_IS_LOGGED_INFO("...all_prepare_response_to_restart_request_run(response, request, argc, argv, env)");
                } else {
                }
            } else {
                const string_t& stop_request = this->stop_request();

                LOGGER_IS_LOGGED_INFO("(unequal = restart_request.compare(request))...");
                LOGGER_IS_LOGGED_INFO("!(unequal = stop_request.compare(request))...");
                if (!(unequal = stop_request.compare(request))) {
                    LOGGER_IS_LOGGED_INFO("...!(unequal = stop_request.compare(request))");

                    LOGGER_IS_LOGGED_INFO("all_prepare_response_to_stop_request_run(response, request, argc, argv, env)...");
                    if (!(err = all_prepare_response_to_stop_request_run(response, request, argc, argv, env))) {
                        LOGGER_IS_LOGGED_INFO("...all_prepare_response_to_stop_request_run(response, request, argc, argv, env)");
                    } else {
                    }
                } else {
                    LOGGER_IS_LOGGED_INFO("...(unequal = stop_request.compare(request))");
                    LOGGER_IS_LOGGED_INFO("all_prepare_response_to_unknown_request_run(response, request, argc, argv, env)...");
                    if (!(err = all_prepare_response_to_unknown_request_run(response, request, argc, argv, env))) {
                        LOGGER_IS_LOGGED_INFO("...all_prepare_response_to_unknown_request_run(response, request, argc, argv, env)");
                    } else {
                    }
                }
            }
        }
        return err;
    }
    virtual int before_prepare_response_to_request_run(string_t& response, const string_t& request, int argc, char_t** argv, char_t** env) {
        int err = 0;
        return err;
    }
    virtual int after_prepare_response_to_request_run(string_t& response, const string_t& request, int argc, char_t** argv, char_t** env) {
        int err = 0;
        return err;
    }
    virtual int all_prepare_response_to_request_run(string_t& response, const string_t& request, int argc, char_t** argv, char_t** env) {
        int err = 0;
        if (!(err = before_prepare_response_to_request_run(response, request, argc, argv, env))) {
            int err2 = 0;
            err = prepare_response_to_request_run(response, request, argc, argv, env);
            if ((err2 = after_prepare_response_to_request_run(response, request, argc, argv, env))) {
                if (!(err)) err = err2;
            }
        }
        return err;
    }

    ///////////////////////////////////////////////////////////////////////

    /// ...output_request_run
    int (derives::*output_request_run_)(int argc, char_t** argv, char_t** env);
    virtual int output_request_run(int argc, char_t** argv, char_t** env) {
        int err = 0;
        if (output_request_run_) {
            err = (this->*output_request_run_)(argc, argv, env);
        } else {
            err = default_output_request_run(argc, argv, env);
        }
        return err;
    }
    virtual int default_output_request_run(int argc, char_t** argv, char_t** env) {
        int err = 0;
        string_t& request = this->request();
        LOGGER_IS_LOGGED_INFO("!(err = all_output_request_run(request, argc, argv, env))...");
        if (!(err = all_output_request_run(request, argc, argv, env))) {
            LOGGER_IS_LOGGED_INFO("...!(err = all_output_request_run(request, argc, argv, env))");
        }
        return err;
    }
    virtual int before_output_request_run(int argc, char_t** argv, char_t** env) {
        int err = 0;
        return err;
    }
    virtual int after_output_request_run(int argc, char_t** argv, char_t** env) {
        int err = 0;
        return err;
    }
    virtual int all_output_request_run(int argc, char_t** argv, char_t** env) {
        int err = 0;
        if (!(err = before_output_request_run(argc, argv, env))) {
            int err2 = 0;
            err = output_request_run(argc, argv, env);
            if ((err2 = after_output_request_run(argc, argv, env))) {
                if (!(err)) err = err2;
            }
        }
        return err;
    }
    virtual int set_output_request_run(int argc, char_t** argv, char_t** env) {
        int err = 0;
        run_ = &derives::all_output_request_run;
        return err;
    }
    virtual int output_request_run_set(int argc, char_t** argv, char_t** env) {
        int err = 0;
        return err;
    }
    virtual int unset_output_request_run(int argc, char_t** argv, char_t** env) {
        int err = 0;
        run_ = 0;
        return err;
    }
    virtual int output_request_run_unset(int argc, char_t** argv, char_t** env) {
        int err = 0;
        return err;
    }

    /// ...output_response_run
    int (derives::*output_response_run_)(int argc, char_t** argv, char_t** env);
    virtual int output_response_run(int argc, char_t** argv, char_t** env) {
        int err = 0;
        if (output_response_run_) {
            err = (this->*output_response_run_)(argc, argv, env);
        } else {
            err = default_output_response_run(argc, argv, env);
        }
        return err;
    }
    virtual int default_output_response_run(int argc, char_t** argv, char_t** env) {
        int err = 0;
        string_t& response = this->response();
        LOGGER_IS_LOGGED_INFO("(err = all_output_response_run(response, argc, argv, env))...");
        if (!(err = all_output_response_run(response, argc, argv, env))) {
            LOGGER_IS_LOGGED_INFO("...!(err = all_output_response_run(response, argc, argv, env))");
        }
        return err;
    }
    virtual int before_output_response_run(int argc, char_t** argv, char_t** env) {
        int err = 0;
        return err;
    }
    virtual int after_output_response_run(int argc, char_t** argv, char_t** env) {
        int err = 0;
        return err;
    }
    virtual int all_output_response_run(int argc, char_t** argv, char_t** env) {
        int err = 0;
        if (!(err = before_output_response_run(argc, argv, env))) {
            int err2 = 0;
            err = output_response_run(argc, argv, env);
            if ((err2 = after_output_response_run(argc, argv, env))) {
                if (!(err)) err = err2;
            }
        }
        return err;
    }
    virtual int set_output_response_run(int argc, char_t** argv, char_t** env) {
        int err = 0;
        run_ = &derives::all_output_response_run;
        return err;
    }
    virtual int output_response_run_set(int argc, char_t** argv, char_t** env) {
        int err = 0;
        return err;
    }
    virtual int unset_output_response_run(int argc, char_t** argv, char_t** env) {
        int err = 0;
        run_ = 0;
        return err;
    }
    virtual int output_response_run_unset(int argc, char_t** argv, char_t** env) {
        int err = 0;
        return err;
    }

    ///////////////////////////////////////////////////////////////////////

    /// ...output_request_run
    virtual int output_request_run(string_t& request, int argc, char_t** argv, char_t** env) {
        int err = 0;
        if (!(err = all_output_message_run(request, argc, argv, env))) {
        }
        return err;
    }
    virtual int before_output_request_run(string_t& request, int argc, char_t** argv, char_t** env) {
        int err = 0;
        if (!(err = all_prepare_request_to_output_run(request, argc, argv, env))) {
        }
        return err;
    }
    virtual int after_output_request_run(string_t& request, int argc, char_t** argv, char_t** env) {
        int err = 0;
        return err;
    }
    virtual int all_output_request_run(string_t& request, int argc, char_t** argv, char_t** env) {
        int err = 0;
        if (!(err = before_output_request_run(request, argc, argv, env))) {
            int err2 = 0;
            err = output_request_run(request, argc, argv, env);
            if ((err2 = after_output_request_run(request, argc, argv, env))) {
                if (!(err)) err = err2;
            }
        }
        return err;
    }
    /// ...prepare_request_to_output_run
    virtual int prepare_request_to_output_run(string_t& request, int argc, char_t** argv, char_t** env) {
        int err = 0;
        return err;
    }
    virtual int before_prepare_request_to_output_run(string_t& request, int argc, char_t** argv, char_t** env) {
        int err = 0;
        return err;
    }
    virtual int after_prepare_request_to_output_run(string_t& request, int argc, char_t** argv, char_t** env) {
        int err = 0;
        return err;
    }
    virtual int all_prepare_request_to_output_run(string_t& request, int argc, char_t** argv, char_t** env) {
        int err = 0;
        if (!(err = before_prepare_request_to_output_run(request, argc, argv, env))) {
            int err2 = 0;
            err = prepare_request_to_output_run(request, argc, argv, env);
            if ((err2 = after_prepare_request_to_output_run(request, argc, argv, env))) {
                if (!(err)) err = err2;
            }
        }
        return err;
    }
    /// ...output_response_run
    virtual int output_response_run(string_t& response, int argc, char_t** argv, char_t** env) {
        int err = 0;
        LOGGER_IS_LOGGED_INFO("!(err = all_output_message_run(response, argc, argv, env))...");
        if (!(err = all_output_message_run(response, argc, argv, env))) {
            LOGGER_IS_LOGGED_INFO("...!(err = all_output_message_run(response, argc, argv, env))");
        }
        return err;
    }
    virtual int before_output_response_run(string_t& response, int argc, char_t** argv, char_t** env) {
        int err = 0;
        if (!(err = all_prepare_response_to_output_run(response, argc, argv, env))) {
        }
        return err;
    }
    virtual int after_output_response_run(string_t& response, int argc, char_t** argv, char_t** env) {
        int err = 0;
        return err;
    }
    virtual int all_output_response_run(string_t& response, int argc, char_t** argv, char_t** env) {
        int err = 0;
        if (!(err = before_output_response_run(response, argc, argv, env))) {
            int err2 = 0;
            err = output_response_run(response, argc, argv, env);
            if ((err2 = after_output_response_run(response, argc, argv, env))) {
                if (!(err)) err = err2;
            }
        }
        return err;
    }
    /// ...prepare_response_to_output_run
    virtual int prepare_response_to_output_run(string_t& response, int argc, char_t** argv, char_t** env) {
        int err = 0;
        return err;
    }
    virtual int before_prepare_response_to_output_run(string_t& response, int argc, char_t** argv, char_t** env) {
        int err = 0;
        return err;
    }
    virtual int after_prepare_response_to_output_run(string_t& response, int argc, char_t** argv, char_t** env) {
        int err = 0;
        return err;
    }
    virtual int all_prepare_response_to_output_run(string_t& response, int argc, char_t** argv, char_t** env) {
        int err = 0;
        if (!(err = before_prepare_response_to_output_run(response, argc, argv, env))) {
            int err2 = 0;
            err = prepare_response_to_output_run(response, argc, argv, env);
            if ((err2 = after_prepare_response_to_output_run(response, argc, argv, env))) {
                if (!(err)) err = err2;
            }
        }
        return err;
    }

    ///////////////////////////////////////////////////////////////////////

    /// ...output_message_run
    virtual int output_message_run(string_t& message, int argc, char_t** argv, char_t** env) {
        int err = 0;
        this->outln(message);
        return err;
    }
    virtual int before_output_message_run(string_t& message, int argc, char_t** argv, char_t** env) {
        int err = 0;
        return err;
    }
    virtual int after_output_message_run(string_t& message, int argc, char_t** argv, char_t** env) {
        int err = 0;
        return err;
    }
    virtual int all_output_message_run(string_t& message, int argc, char_t** argv, char_t** env) {
        int err = 0;
        if (!(err = before_output_message_run(message, argc, argv, env))) {
            int err2 = 0;
            err = output_message_run(message, argc, argv, env);
            if ((err2 = after_output_message_run(message, argc, argv, env))) {
                if (!(err)) err = err2;
            }
        }
        return err;
    }

    ///////////////////////////////////////////////////////////////////////

    /// ...on_set_string_message_option
    int (derives::*on_set_string_message_option_)(string_t& message, const char_t* optarg, int optind, int argc, char_t** argv, char_t** env);
    virtual int on_set_string_message_option(string_t& message, const char_t* optarg, int optind, int argc, char_t** argv, char_t** env) {
        int err = 0;
        if (on_set_string_message_option_) {
            err = (this->*on_set_string_message_option_)(message, optarg, optind, argc, argv, env);
        } else {
            err = string_on_set_string_message_option(message, optarg, optind, argc, argv, env);
        }
        return err;
    }
    virtual int string_on_set_string_message_option(string_t& message, const char_t* optarg, int optind, int argc, char_t** argv, char_t** env) {
        int err = 0;
        if ((optarg) && (optarg[0])) {
            message.assign(optarg);
        }
        return err;
    }
    virtual int hex_string_on_set_string_message_option(string_t& message, const char_t* optarg, int optind, int argc, char_t** argv, char_t** env) {
        int err = 0;
        if ((optarg) && (optarg[0])) {
            reader_string_t string(optarg);
            const reader_char_t *chars = 0;
            size_t length = 0;
            
            if ((chars = string.has_chars(length))) {
                string_reader_t reader(string);

                if (!(err = this->hex_decode_source_to_string(message, reader))) {
                } else {
                }
            } else {
            }
        }
        return err;
    }
    virtual int file_on_set_string_message_option(string_t& message, const char_t* optarg, int optind, int argc, char_t** argv, char_t** env) {
        int err = 0;
        if ((optarg) && (optarg[0])) {
            if ((optarg) && (optarg[0])) {
                xos::io::crt::file::char_reader file;
    
                LOGGER_IS_LOGGED_INFO("file.open(\""<< optarg <<"\")...");
                if ((file.open(optarg))) {
                    xos::io::crt::file::char_reader::char_t c = 0;
                    ssize_t amount = 0, count = 0;
                    if (0 < (amount = file.read(&c, 1))) {
                        string_t old_message(message);
                        message.clear();
                        do {
                            char_t message_c = ((char_t)c);
                            if ((err = on_string_message_char(message, message_c, argc, argv, env))) {
                                LOGGER_IS_LOGGED_ERROR("...failed on (" << signed_to_string(err) << " = on_string_message_char(message, message_c, argc, argv, env))");
                                message.assign(old_message);
                                break;
                            }
                            count += amount;
                        } while (0 < (amount = file.read(&c, 1)));
                    }
                    LOGGER_IS_LOGGED_INFO("...file.close(\""<< optarg <<"\")...");
                    file.close();
                }
            }
        }
        return err;
    }
    virtual int hex_file_on_set_string_message_option(string_t& message, const char_t* optarg, int optind, int argc, char_t** argv, char_t** env) {
        int err = 0;
        if ((optarg) && (optarg[0])) {
            if ((optarg) && (optarg[0])) {
                xos::io::crt::file::reader file;
    
                LOGGER_IS_LOGGED_INFO("file.open(\""<< optarg <<"\")...");
                if ((file.open(optarg))) {
                    
                    if (!(err = this->hex_decode_source_to_string(message, file))) {
                    } else {
                    }
                    LOGGER_IS_LOGGED_INFO("...file.close(\""<< optarg <<"\")...");
                    file.close();
                }
            }
        }
        return err;
    }
    virtual int set_string_on_set_string_message_option(int argc, char_t** argv, char_t** env) {
        int err = 0;
        on_set_string_message_option_ = &derives::string_on_set_string_message_option;
        return err;
    }
    virtual int string_on_set_string_message_option_set(int argc, char_t** argv, char_t** env) {
        int err = 0;
        return err;
    }
    virtual int set_file_on_set_string_message_option(int argc, char_t** argv, char_t** env) {
        int err = 0;
        on_set_string_message_option_ = &derives::file_on_set_string_message_option;
        return err;
    }
    virtual int file_on_set_string_message_option_set(int argc, char_t** argv, char_t** env) {
        int err = 0;
        return err;
    }

    /// ...on_string_message_char
    int (derives::*on_string_message_char_)(string_t& message, const char_t& message_c, int argc, char_t** argv, char_t** env);
    virtual int on_string_message_char(string_t& message, const char_t& message_c, int argc, char_t** argv, char_t** env) {
        int err = 0;
        if (on_string_message_char_) {
            err = (this->*on_string_message_char_)(message, message_c, argc, argv, env);
        } else {
            err = default_on_string_message_char(message, message_c, argc, argv, env);
        }
        return err;
    }
    virtual int default_on_string_message_char(string_t& message, const char_t& message_c, int argc, char_t** argv, char_t** env) {
        int err = 0;
        const char_t lf_c = ((char_t)'\n');
        
        if ((message_c != lf_c)) {
            message.append(&message_c, 1);
        } else {
            err = set_endof_on_string_message_char(argc, argv, env);
        }
        return err;
    }
    virtual int endof_on_string_message_char(string_t& message, const char_t& message_c, int argc, char_t** argv, char_t** env) {
        int err = 0;
        return err;
    }
    virtual int set_endof_on_string_message_char(int argc, char_t** argv, char_t** env) {
        int err = 0;
        on_string_message_char_ = &derives::endof_on_string_message_char;
        return err;
    }
    virtual int unset_endof_on_string_message_char(int argc, char_t** argv, char_t** env) {
        int err = 0;
        on_string_message_char_ = 0;
        return err;
    }

    /// ...input_option...
    virtual int on_set_file_input_option
    (const char_t* optarg, int optind, int argc, char_t**argv, char_t**env) {
        int err = 0;
        if (!(err = set_file_on_set_string_message_option(argc, argv, env))) {
            if (!(err = file_on_set_string_message_option_set(argc, argv, env))) {
            } else {
            }
        } else {
        }
        return err;
    }
    virtual int on_set_string_input_option
    (const char_t* optarg, int optind, int argc, char_t**argv, char_t**env) {
        int err = 0;
        if (!(err = set_string_on_set_string_message_option(argc, argv, env))) {
            if (!(err = string_on_set_string_message_option_set(argc, argv, env))) {
            } else {
            }
        } else {
        }
        return err;
    }

    /// on_option
    virtual int on_option
    (int optval, const char_t* optarg, const char_t* optname,
     int optind, int argc, char_t**argv, char_t**env) {
        int err = 0;
        switch(optval) {
        default:
            err = extends::on_option(optval, optarg, optname, optind, argc, argv, env);
        }
        return err;
    }
    
    /// option_usage
    virtual const char_t* option_usage(const char_t*& optarg, const struct option* longopt) {
        const char_t* chars = "";
        switch(longopt->val) {
        default:
            chars = extends::option_usage(optarg, longopt);
            break;
        }
        return chars;
    }

    /// options
    virtual const char_t* options(const struct option*& longopts) {
        static const char_t* chars = XOS_APP_CONSOLE_PROTOCOL_BASE_MAIN_OPTIONS_CHARS;
        static struct option optstruct[]= {
            XOS_APP_CONSOLE_PROTOCOL_BASE_MAIN_OPTIONS_OPTIONS
            {0, 0, 0, 0}};
        longopts = optstruct;
        return chars;
    }

    /// arguments
    virtual const char_t* arguments(const char_t**& argv) {
        static const char_t* _args = XOS_APP_CONSOLE_PROTOCOL_BASE_MAIN_ARGS;
        static const char_t* _argv[] = {
            XOS_APP_CONSOLE_PROTOCOL_BASE_MAIN_ARGV
            0};
        argv = _argv;
        return _args;
    }

    ///////////////////////////////////////////////////////////////////////

    /// ...hello_request
    virtual string_t& set_hello_request(const string_t& to) {
        string_t& hello_request = this->hello_request();
        hello_request.assign(to);
        return hello_request;
    }
    virtual string_t& set_hello_request(const char_t* to) {
        string_t& hello_request = this->hello_request();
        hello_request.assign(to);
        return hello_request;
    }
    virtual string_t& set_hello_request(const char_t* to, size_t length) {
        string_t& hello_request = this->hello_request();
        hello_request.assign(to, length);
        return hello_request;
    }
    virtual string_t& hello_request() const {
        return (string_t&)hello_request_;
    }
    /// ...hello_response
    virtual string_t& set_hello_response(const string_t& to) {
        string_t& hello_response = this->hello_response();
        hello_response.assign(to);
        return hello_response;
    }
    virtual string_t& set_hello_response(const char_t* to, size_t length) {
        string_t& hello_response = this->hello_response();
        hello_response.assign(to, length);
        return hello_response;
    }
    virtual string_t& set_hello_response(const char_t* to) {
        string_t& hello_response = this->hello_response();
        hello_response.assign(to);
        return hello_response;
    }
    virtual string_t& hello_response() const {
        return (string_t&)hello_response_;
    }
    
    ///////////////////////////////////////////////////////////////////////

    /// ...restart_request
    virtual string_t& set_restart_request(const string_t& to) {
        string_t& restart_request = this->restart_request();
        restart_request.assign(to);
        return restart_request;
    }
    virtual string_t& set_restart_request(const char_t* to) {
        string_t& restart_request = this->restart_request();
        restart_request.assign(to);
        return restart_request;
    }
    virtual string_t& set_restart_request(const char_t* to, size_t length) {
        string_t& restart_request = this->restart_request();
        restart_request.assign(to, length);
        return restart_request;
    }
    virtual string_t& restart_request() const {
        return (string_t&)restart_request_;
    }
    /// ...restart_response
    virtual string_t& set_restart_response(const string_t& to) {
        string_t& restart_response = this->restart_response();
        restart_response.assign(to);
        return restart_response;
    }
    virtual string_t& set_restart_response(const char_t* to, size_t length) {
        string_t& restart_response = this->restart_response();
        restart_response.assign(to, length);
        return restart_response;
    }
    virtual string_t& set_restart_response(const char_t* to) {
        string_t& restart_response = this->restart_response();
        restart_response.assign(to);
        return restart_response;
    }
    virtual string_t& restart_response() const {
        return (string_t&)restart_response_;
    }
    
    ///////////////////////////////////////////////////////////////////////

    /// ...stop_request
    virtual string_t& set_stop_request(const string_t& to) {
        string_t& stop_request = this->stop_request();
        stop_request.assign(to);
        return stop_request;
    }
    virtual string_t& set_stop_request(const char_t* to) {
        string_t& stop_request = this->stop_request();
        stop_request.assign(to);
        return stop_request;
    }
    virtual string_t& set_stop_request(const char_t* to, size_t length) {
        string_t& stop_request = this->stop_request();
        stop_request.assign(to, length);
        return stop_request;
    }
    virtual string_t& stop_request() const {
        return (string_t&)stop_request_;
    }
    /// ...stop_response
    virtual string_t& set_stop_response(const string_t& to) {
        string_t& stop_response = this->stop_response();
        stop_response.assign(to);
        return stop_response;
    }
    virtual string_t& set_stop_response(const char_t* to, size_t length) {
        string_t& stop_response = this->stop_response();
        stop_response.assign(to, length);
        return stop_response;
    }
    virtual string_t& set_stop_response(const char_t* to) {
        string_t& stop_response = this->stop_response();
        stop_response.assign(to);
        return stop_response;
    }
    virtual string_t& stop_response() const {
        return (string_t&)stop_response_;
    }
    
    ///////////////////////////////////////////////////////////////////////

    /// ...request
    virtual string_t& set_request(const string_t& to) {
        string_t& request = this->request();
        request.assign(to);
        return request;
    }
    virtual string_t& set_request(const char_t* to) {
        string_t& request = this->request();
        request.assign(to);
        return request;
    }
    virtual string_t& set_request(const char_t* to, size_t length) {
        string_t& request = this->request();
        request.assign(to, length);
        return request;
    }
    virtual string_t& request() const {
        return (string_t&)request_;
    }
    /// ...response
    virtual string_t& set_response(const string_t& to) {
        string_t& response = this->response();
        response.assign(to);
        return response;
    }
    virtual string_t& set_response(const char_t* to, size_t length) {
        string_t& response = this->response();
        response.assign(to, length);
        return response;
    }
    virtual string_t& set_response(const char_t* to) {
        string_t& response = this->response();
        response.assign(to);
        return response;
    }
    virtual string_t& response() const {
        return (string_t&)response_;
    }
    
    ///////////////////////////////////////////////////////////////////////

    /// ...restart
    virtual bool& set_restart(const bool& to) {
        bool& restart = this->restart();
        restart = to;
        return restart;
    }
    virtual bool& restart_set(const bool& to) {
        bool& restart = this->restart();
        return restart;
    }
    virtual const bool& get_restart() const {
        return this->restart();
    }
    virtual bool& restart() const {
        bool& restart = (bool&)restart_;
        return restart;
    }

    /// ...stop
    virtual bool& set_stop(const bool& to) {
        bool& stop = this->stop();
        stop = to;
        return stop;
    }
    virtual bool& stop_set(const bool& to) {
        bool& stop = this->stop();
        return stop;
    }
    virtual const bool& get_stop() const {
        return this->stop();
    }
    virtual bool& stop() const {
        bool& stop = (bool&)stop_;
        return stop;
    }

protected:
    bool restart_, stop_;
    string_t hello_request_, hello_response_, 
             restart_request_, restart_response_, 
             stop_request_, stop_response_, request_, response_;
}; /// class main_optt
typedef main_optt<> main_opt;

} /// namespace base
} /// namespace protocol
} /// namespace console
} /// namespace app
} /// namespace xos

#endif /// ndef XOS_APP_CONSOLE_PROTOCOL_BASE_MAIN_OPT_HPP
