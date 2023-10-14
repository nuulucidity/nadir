//////////////////////////////////////////////////////////////////////////
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
///   Date: 1/5/2023, 10/10/2023
//////////////////////////////////////////////////////////////////////////
#ifndef XOS_APP_CONSOLE_BASE_MAIN_OPT_HPP
#define XOS_APP_CONSOLE_BASE_MAIN_OPT_HPP

#include "xos/app/console/version/main.hpp"

#define XOS_APP_CONSOLE_BASE_MAIN_FILE_INPUT_OPT "file-input"
#define XOS_APP_CONSOLE_BASE_MAIN_FILE_INPUT_OPTARG_REQUIRED MAIN_OPT_ARGUMENT_NONE
#define XOS_APP_CONSOLE_BASE_MAIN_FILE_INPUT_OPTARG_RESULT 0
#define XOS_APP_CONSOLE_BASE_MAIN_FILE_INPUT_OPTARG ""
#define XOS_APP_CONSOLE_BASE_MAIN_FILE_INPUT_OPTUSE "file input"
#define XOS_APP_CONSOLE_BASE_MAIN_FILE_INPUT_OPTVAL_S "i"
#define XOS_APP_CONSOLE_BASE_MAIN_FILE_INPUT_OPTVAL_C 'i'
#define XOS_APP_CONSOLE_BASE_MAIN_FILE_INPUT_OPTION \
   {XOS_APP_CONSOLE_BASE_MAIN_FILE_INPUT_OPT, \
    XOS_APP_CONSOLE_BASE_MAIN_FILE_INPUT_OPTARG_REQUIRED, \
    XOS_APP_CONSOLE_BASE_MAIN_FILE_INPUT_OPTARG_RESULT, \
    XOS_APP_CONSOLE_BASE_MAIN_FILE_INPUT_OPTVAL_C}, \

#define XOS_APP_CONSOLE_BASE_MAIN_STRING_INPUT_OPT "string-input"
#define XOS_APP_CONSOLE_BASE_MAIN_STRING_INPUT_OPTARG_REQUIRED MAIN_OPT_ARGUMENT_NONE
#define XOS_APP_CONSOLE_BASE_MAIN_STRING_INPUT_OPTARG_RESULT 0
#define XOS_APP_CONSOLE_BASE_MAIN_STRING_INPUT_OPTARG ""
#define XOS_APP_CONSOLE_BASE_MAIN_STRING_INPUT_OPTUSE "string input"
#define XOS_APP_CONSOLE_BASE_MAIN_STRING_INPUT_OPTVAL_S "g"
#define XOS_APP_CONSOLE_BASE_MAIN_STRING_INPUT_OPTVAL_C 'g'
#define XOS_APP_CONSOLE_BASE_MAIN_STRING_INPUT_OPTION \
   {XOS_APP_CONSOLE_BASE_MAIN_STRING_INPUT_OPT, \
    XOS_APP_CONSOLE_BASE_MAIN_STRING_INPUT_OPTARG_REQUIRED, \
    XOS_APP_CONSOLE_BASE_MAIN_STRING_INPUT_OPTARG_RESULT, \
    XOS_APP_CONSOLE_BASE_MAIN_STRING_INPUT_OPTVAL_C}, \

#define XOS_APP_CONSOLE_BASE_MAIN_VERBOSE_OUTPUT_OPT "verbose"
#define XOS_APP_CONSOLE_BASE_MAIN_VERBOSE_OUTPUT_OPTARG_REQUIRED MAIN_OPT_ARGUMENT_NONE
#define XOS_APP_CONSOLE_BASE_MAIN_VERBOSE_OUTPUT_OPTARG_RESULT 0
#define XOS_APP_CONSOLE_BASE_MAIN_VERBOSE_OUTPUT_OPTARG ""
#define XOS_APP_CONSOLE_BASE_MAIN_VERBOSE_OUTPUT_OPTUSE "verbose output"
#define XOS_APP_CONSOLE_BASE_MAIN_VERBOSE_OUTPUT_OPTVAL_S "v"
#define XOS_APP_CONSOLE_BASE_MAIN_VERBOSE_OUTPUT_OPTVAL_C 'v'
#define XOS_APP_CONSOLE_BASE_MAIN_VERBOSE_OUTPUT_OPTION \
   {XOS_APP_CONSOLE_BASE_MAIN_VERBOSE_OUTPUT_OPT, \
    XOS_APP_CONSOLE_BASE_MAIN_VERBOSE_OUTPUT_OPTARG_REQUIRED, \
    XOS_APP_CONSOLE_BASE_MAIN_VERBOSE_OUTPUT_OPTARG_RESULT, \
    XOS_APP_CONSOLE_BASE_MAIN_VERBOSE_OUTPUT_OPTVAL_C}, \

#define XOS_APP_CONSOLE_BASE_MAIN_QUIET_OUTPUT_OPT "quiet"
#define XOS_APP_CONSOLE_BASE_MAIN_QUIET_OUTPUT_OPTARG_REQUIRED MAIN_OPT_ARGUMENT_NONE
#define XOS_APP_CONSOLE_BASE_MAIN_QUIET_OUTPUT_OPTARG_RESULT 0
#define XOS_APP_CONSOLE_BASE_MAIN_QUIET_OUTPUT_OPTARG ""
#define XOS_APP_CONSOLE_BASE_MAIN_QUIET_OUTPUT_OPTUSE "quiet output"
#define XOS_APP_CONSOLE_BASE_MAIN_QUIET_OUTPUT_OPTVAL_S "q"
#define XOS_APP_CONSOLE_BASE_MAIN_QUIET_OUTPUT_OPTVAL_C 'q'
#define XOS_APP_CONSOLE_BASE_MAIN_QUIET_OUTPUT_OPTION \
   {XOS_APP_CONSOLE_BASE_MAIN_QUIET_OUTPUT_OPT, \
    XOS_APP_CONSOLE_BASE_MAIN_QUIET_OUTPUT_OPTARG_REQUIRED, \
    XOS_APP_CONSOLE_BASE_MAIN_QUIET_OUTPUT_OPTARG_RESULT, \
    XOS_APP_CONSOLE_BASE_MAIN_QUIET_OUTPUT_OPTVAL_C}, \

///////////////////////////////////////////////////////////////////////
#define XOS_APP_CONSOLE_BASE_MAIN_VERBOSE_OPTIONS_CHARS_EXTEND \
    XOS_APP_CONSOLE_BASE_MAIN_VERBOSE_OUTPUT_OPTVAL_S \
    XOS_APP_CONSOLE_BASE_MAIN_QUIET_OUTPUT_OPTVAL_S \

#define XOS_APP_CONSOLE_BASE_MAIN_VERBOSE_OPTIONS_OPTIONS_EXTEND \
    XOS_APP_CONSOLE_BASE_MAIN_VERBOSE_OUTPUT_OPTION \
    XOS_APP_CONSOLE_BASE_MAIN_QUIET_OUTPUT_OPTION \

///////////////////////////////////////////////////////////////////////
#define XOS_APP_CONSOLE_BASE_MAIN_OPTIONS_CHARS_EXTEND \
    XOS_APP_CONSOLE_BASE_MAIN_FILE_INPUT_OPTVAL_S \
    XOS_APP_CONSOLE_BASE_MAIN_STRING_INPUT_OPTVAL_S \
    XOS_APP_CONSOLE_BASE_MAIN_VERBOSE_OUTPUT_OPTVAL_S \
    XOS_APP_CONSOLE_BASE_MAIN_QUIET_OUTPUT_OPTVAL_S \

#define XOS_APP_CONSOLE_BASE_MAIN_OPTIONS_OPTIONS_EXTEND \
    XOS_APP_CONSOLE_BASE_MAIN_FILE_INPUT_OPTION \
    XOS_APP_CONSOLE_BASE_MAIN_STRING_INPUT_OPTION \
    XOS_APP_CONSOLE_BASE_MAIN_VERBOSE_OUTPUT_OPTION \
    XOS_APP_CONSOLE_BASE_MAIN_QUIET_OUTPUT_OPTION \

///////////////////////////////////////////////////////////////////////
#define XOS_APP_CONSOLE_BASE_MAIN_VERSION_OPTIONS_CHARS \
   XOS_APP_CONSOLE_BASE_MAIN_OPTIONS_CHARS_EXTEND \
   XOS_APP_CONSOLE_VERSION_MAIN_OPTIONS_CHARS

#define XOS_APP_CONSOLE_BASE_MAIN_VERSION_OPTIONS_OPTIONS \
   XOS_APP_CONSOLE_BASE_MAIN_OPTIONS_OPTIONS_EXTEND \
   XOS_APP_CONSOLE_VERSION_MAIN_OPTIONS_OPTIONS

///////////////////////////////////////////////////////////////////////
#define XOS_APP_CONSOLE_BASE_MAIN_VERBOSE_OPTIONS_CHARS \
   XOS_APP_CONSOLE_BASE_MAIN_VERBOSE_OPTIONS_CHARS_EXTEND \
   XOS_APP_CONSOLE_VERSION_MAIN_LOGGING_OPTIONS_CHARS

#define XOS_APP_CONSOLE_BASE_MAIN_VERBOSE_OPTIONS_OPTIONS \
   XOS_APP_CONSOLE_BASE_MAIN_VERBOSE_OPTIONS_OPTIONS_EXTEND \
   XOS_APP_CONSOLE_VERSION_MAIN_LOGGING_OPTIONS_OPTIONS

///////////////////////////////////////////////////////////////////////
#define XOS_APP_CONSOLE_BASE_MAIN_LOGGING_OPTIONS_CHARS \
   XOS_APP_CONSOLE_BASE_MAIN_OPTIONS_CHARS_EXTEND \
   XOS_APP_CONSOLE_VERSION_MAIN_LOGGING_OPTIONS_CHARS

#define XOS_APP_CONSOLE_BASE_MAIN_LOGGING_OPTIONS_OPTIONS \
   XOS_APP_CONSOLE_BASE_MAIN_OPTIONS_OPTIONS_EXTEND \
   XOS_APP_CONSOLE_VERSION_MAIN_LOGGING_OPTIONS_OPTIONS

///////////////////////////////////////////////////////////////////////
#define XOS_APP_CONSOLE_BASE_MAIN_OPTIONS_CHARS \
   XOS_APP_CONSOLE_BASE_MAIN_OPTIONS_CHARS_EXTEND \
   XOS_APP_CONSOLE_VERSION_MAIN_LOGGING_OPTIONS_CHARS

#define XOS_APP_CONSOLE_BASE_MAIN_OPTIONS_OPTIONS \
   XOS_APP_CONSOLE_BASE_MAIN_OPTIONS_OPTIONS_EXTEND \
   XOS_APP_CONSOLE_VERSION_MAIN_LOGGING_OPTIONS_OPTIONS

///////////////////////////////////////////////////////////////////////
#define XOS_APP_CONSOLE_BASE_MAIN_ARGS 0
#define XOS_APP_CONSOLE_BASE_MAIN_ARGV 0,

namespace xos {
namespace app {
namespace console {
namespace base {

/// class main_optt
template 
<class TExtends = xos::app::console::version::maint<>,  class TImplements = typename TExtends::implements>

class main_optt: virtual public TImplements, public TExtends {
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
    main_optt(): run_(0) {
    }
    virtual ~main_optt() {
    }
private:
    main_optt(const main_optt &copy) {
        throw exception(exception_unexpected);
    }

protected:
    typedef typename extends::in_reader_t in_reader_t;
    typedef typename extends::out_writer_t out_writer_t;
    typedef typename extends::err_writer_t err_writer_t;

    /// run
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

    /// ...input_request_run
    virtual int input_request_run(int argc, char_t** argv, char_t** env) {
        int err = 0;
        return err;
    }
    virtual int before_input_request_run(int argc, char_t** argv, char_t** env) {
        int err = 0;
        return err;
    }
    virtual int after_input_request_run(int argc, char_t** argv, char_t** env) {
        int err = 0;
        return err;
    }
    virtual int all_input_request_run(int argc, char_t** argv, char_t** env) {
        int err = 0;
        if (!(err = before_input_request_run(argc, argv, env))) {
            int err2 = 0;
            err = input_request_run(argc, argv, env);
            if ((err2 = after_input_request_run(argc, argv, env))) {
                if (!(err)) err = err2;
            }
        }
        return err;
    }
    virtual int set_input_request_run(int argc, char_t** argv, char_t** env) {
        int err = 0;
        run_ = &derives::all_input_request_run;
        return err;
    }
    virtual int input_request_run_set(int argc, char_t** argv, char_t** env) {
        int err = 0;
        return err;
    }
    virtual int unset_input_request_run(int argc, char_t** argv, char_t** env) {
        int err = 0;
        run_ = 0;
        return err;
    }
    virtual int input_request_run_unset(int argc, char_t** argv, char_t** env) {
        int err = 0;
        return err;
    }

    ///////////////////////////////////////////////////////////////////////
    /// ...input_request
    virtual int input_request(string_t& request, int argc, char_t** argv, char_t** env) {
        int err = 0;
        LOGGER_IS_LOGGED_INFO("!(err = all_input_message(request, argc, argv, env))...");
        if (!(err = all_input_message(request, argc, argv, env))) {
            LOGGER_IS_LOGGED_INFO("...!(" << err << " = all_input_message(request, argc, argv, env))");
        } else {
            LOGGER_IS_LOGGED_INFO("...failed on !(" << err << " = all_input_message(request, argc, argv, env))");
        }
        return err;
    }
    virtual int before_input_request(string_t& request, int argc, char_t** argv, char_t** env) {
        int err = 0;
        return err;
    }
    virtual int after_input_request(string_t& request, int argc, char_t** argv, char_t** env) {
        int err = 0;
        LOGGER_IS_LOGGED_INFO("!(err = all_prepare_request_input(request, argc, argv, env))...");
        if (!(err = all_prepare_request_input(request, argc, argv, env))) {
            LOGGER_IS_LOGGED_INFO("...!(" << err << " = all_prepare_request_input(request, argc, argv, env))");
        } else {
            LOGGER_IS_LOGGED_INFO("...failed on !(" << err << " = all_prepare_request_input(request, argc, argv, env))");
        }
        return err;
    }
    virtual int all_input_request(string_t& request, int argc, char_t** argv, char_t** env) {
        int err = 0;
        if (!(err = before_input_request(request, argc, argv, env))) {
            int err2 = 0;
            err = input_request(request, argc, argv, env);
            if ((err2 = after_input_request(request, argc, argv, env))) {
                if (!(err)) err = err2;
            }
        }
        return err;
    }

    /// ...prepare_request_input
    virtual int prepare_request_input(string_t& request, int argc, char_t** argv, char_t** env) {
        int err = 0;
        return err;
    }
    virtual int before_prepare_request_input(string_t& request, int argc, char_t** argv, char_t** env) {
        int err = 0;
        return err;
    }
    virtual int after_prepare_request_input(string_t& request, int argc, char_t** argv, char_t** env) {
        int err = 0;
        return err;
    }
    virtual int all_prepare_request_input(string_t& request, int argc, char_t** argv, char_t** env) {
        int err = 0;
        if (!(err = before_prepare_request_input(request, argc, argv, env))) {
            int err2 = 0;
            err = prepare_request_input(request, argc, argv, env);
            if ((err2 = after_prepare_request_input(request, argc, argv, env))) {
                if (!(err)) err = err2;
            }
        }
        return err;
    }

    ///////////////////////////////////////////////////////////////////////

    /// ...input_response_run
    virtual int input_response_run(int argc, char_t** argv, char_t** env) {
        int err = 0;
        return err;
    }
    virtual int before_input_response_run(int argc, char_t** argv, char_t** env) {
        int err = 0;
        return err;
    }
    virtual int after_input_response_run(int argc, char_t** argv, char_t** env) {
        int err = 0;
        return err;
    }
    virtual int all_input_response_run(int argc, char_t** argv, char_t** env) {
        int err = 0;
        if (!(err = before_input_response_run(argc, argv, env))) {
            int err2 = 0;
            err = input_response_run(argc, argv, env);
            if ((err2 = after_input_response_run(argc, argv, env))) {
                if (!(err)) err = err2;
            }
        }
        return err;
    }
    virtual int set_input_response_run(int argc, char_t** argv, char_t** env) {
        int err = 0;
        run_ = &derives::all_input_response_run;
        return err;
    }
    virtual int input_response_run_set(int argc, char_t** argv, char_t** env) {
        int err = 0;
        return err;
    }
    virtual int unset_input_response_run(int argc, char_t** argv, char_t** env) {
        int err = 0;
        run_ = 0;
        return err;
    }
    virtual int input_response_run_unset(int argc, char_t** argv, char_t** env) {
        int err = 0;
        return err;
    }

    ///////////////////////////////////////////////////////////////////////
    /// ...input_response
    virtual int input_response(string_t& response, int argc, char_t** argv, char_t** env) {
        int err = 0;
        LOGGER_IS_LOGGED_INFO("!(err = all_input_message(response, argc, argv, env))...");
        if (!(err = all_input_message(response, argc, argv, env))) {
            LOGGER_IS_LOGGED_INFO("...!(" << err << " = all_input_message(response, argc, argv, env))");
        } else {
            LOGGER_IS_LOGGED_INFO("...failed on !(" << err << " = all_input_message(response, argc, argv, env))");
        }
        return err;
    }
    virtual int before_input_response(string_t& response, int argc, char_t** argv, char_t** env) {
        int err = 0;
        return err;
    }
    virtual int after_input_response(string_t& response, int argc, char_t** argv, char_t** env) {
        int err = 0;
        LOGGER_IS_LOGGED_INFO("!(err = all_prepare_response_input(response, argc, argv, env))...");
        if (!(err = all_prepare_response_input(response, argc, argv, env))) {
            LOGGER_IS_LOGGED_INFO("...!(" << err << " = all_prepare_response_input(response, argc, argv, env))");
        } else {
            LOGGER_IS_LOGGED_INFO("...failed on !(" << err << " = all_prepare_response_input(response, argc, argv, env))");
        }
        return err;
    }
    virtual int all_input_response(string_t& response, int argc, char_t** argv, char_t** env) {
        int err = 0;
        if (!(err = before_input_response(response, argc, argv, env))) {
            int err2 = 0;
            err = input_response(response, argc, argv, env);
            if ((err2 = after_input_response(response, argc, argv, env))) {
                if (!(err)) err = err2;
            }
        }
        return err;
    }

    /// ...prepare_response_input
    virtual int prepare_response_input(string_t& response, int argc, char_t** argv, char_t** env) {
        int err = 0;
        return err;
    }
    virtual int before_prepare_response_input(string_t& response, int argc, char_t** argv, char_t** env) {
        int err = 0;
        return err;
    }
    virtual int after_prepare_response_input(string_t& response, int argc, char_t** argv, char_t** env) {
        int err = 0;
        return err;
    }
    virtual int all_prepare_response_input(string_t& response, int argc, char_t** argv, char_t** env) {
        int err = 0;
        if (!(err = before_prepare_response_input(response, argc, argv, env))) {
            int err2 = 0;
            err = prepare_response_input(response, argc, argv, env);
            if ((err2 = after_prepare_response_input(response, argc, argv, env))) {
                if (!(err)) err = err2;
            }
        }
        return err;
    }

    ///////////////////////////////////////////////////////////////////////
    /// ...input_message
    virtual int input_message(string_t& message, int argc, char_t** argv, char_t** env) {
        int err = 0;
        in_reader_t reader(*this);
        string_t& message_read = this->message_read();
        
        LOGGER_IS_LOGGED_INFO("!(err = all_read_message(message_read, reader, argc, argv, env))...");
        if (!(err = all_read_message(message_read, reader, argc, argv, env))) {
            LOGGER_IS_LOGGED_INFO("...!(" << err << " = all_read_message(message_read, reader, argc, argv, env))");
            LOGGER_IS_LOGGED_INFO("message.assign(message_read)...");
            message.assign(message_read);
        } else {
            LOGGER_IS_LOGGED_INFO("...failed !(" << err << " = all_read_message(message_assign, reader, argc, argv, env))");
        }
        return err;
    }
    virtual int before_input_message(string_t& message, int argc, char_t** argv, char_t** env) {
        int err = 0;
        return err;
    }
    virtual int after_input_message(string_t& message, int argc, char_t** argv, char_t** env) {
        int err = 0;
        LOGGER_IS_LOGGED_INFO("!(err = all_prepare_message_input(message, argc, argv, env))...");
        if (!(err = all_prepare_message_input(message, argc, argv, env))) {
            LOGGER_IS_LOGGED_INFO("...!(" << err << " = all_prepare_message_input(message, argc, argv, env))");
        } else {
            LOGGER_IS_LOGGED_INFO("...failed !(" << err << " = all_read_message(message_assign, reader, argc, argv, env))");
        }
        return err;
    }
    virtual int all_input_message(string_t& message, int argc, char_t** argv, char_t** env) {
        int err = 0;
        if (!(err = before_input_message(message, argc, argv, env))) {
            int err2 = 0;
            err = input_message(message, argc, argv, env);
            if ((err2 = after_input_message(message, argc, argv, env))) {
                if (!(err)) err = err2;
            }
        }
        return err;
    }

    /// ...prepare_message_input
    virtual int prepare_message_input(string_t& message, int argc, char_t** argv, char_t** env) {
        int err = 0;
        return err;
    }
    virtual int before_prepare_message_input(string_t& message, int argc, char_t** argv, char_t** env) {
        int err = 0;
        return err;
    }
    virtual int after_prepare_message_input(string_t& message, int argc, char_t** argv, char_t** env) {
        int err = 0;
        return err;
    }
    virtual int all_prepare_message_input(string_t& message, int argc, char_t** argv, char_t** env) {
        int err = 0;
        if (!(err = before_prepare_message_input(message, argc, argv, env))) {
            int err2 = 0;
            err = prepare_message_input(message, argc, argv, env);
            if ((err2 = after_prepare_message_input(message, argc, argv, env))) {
                if (!(err)) err = err2;
            }
        }
        return err;
    }

    ///////////////////////////////////////////////////////////////////////
    /// ...read_message
    virtual int read_message(string_t& message, reader_t& reader, int argc, char_t** argv, char_t** env) {
        int err = 0;
        char_t c = 0;

        LOGGER_IS_LOGGED_INFO("!(err = read_lf(message, c, reader, argc, argv, env))...");
        if (!(err = read_lf(message, c, reader, argc, argv, env))) {
            LOGGER_IS_LOGGED_INFO("...!(" << err << " = read_lf(message, c, reader, argc, argv, env))");
        } else {
            LOGGER_IS_LOGGED_INFO("...failed !(" << err << " = read_lf(message, c, reader, argc, argv, env))");
        }
        return err;
    }
    virtual int before_read_message(string_t& message, reader_t& reader, int argc, char_t** argv, char_t** env) {
        int err = 0;
        LOGGER_IS_LOGGED_INFO("message.clear()...");
        message.clear();
        return err;
    }
    virtual int after_read_message(string_t& message, reader_t& reader, int argc, char_t** argv, char_t** env) {
        int err = 0;
        LOGGER_IS_LOGGED_INFO("!(err = prepare_read_lf(message, argc, argv, env))...");
        if (!(err = prepare_read_lf(message, argc, argv, env))) {
            LOGGER_IS_LOGGED_INFO("...!(" << err << " = prepare_read_lf(message, argc, argv, env))");
        } else {
            LOGGER_IS_LOGGED_INFO("...failed !(" << err << " = prepare_read_lf(message, argc, argv, env))");
        }
        return err;
    }
    virtual int all_read_message(string_t& message, reader_t& reader, int argc, char_t** argv, char_t** env) {
        int err = 0;
        if (!(err = before_read_message(message, reader, argc, argv, env))) {
            int err2 = 0;
            err = read_message(message, reader, argc, argv, env);
            if ((err2 = after_read_message(message, reader, argc, argv, env))) {
                if (!(err)) err = err2;
            }
        }
        return err;
    }

    ///////////////////////////////////////////////////////////////////////
    /// ...prepare_read...
    /// ...
    /// ...<cr>
    virtual int prepare_read_cr(string_t& r, int argc, char_t** argv, char_t** env) {
        int err = 0;
        size_t length = 0;
        const char_t* chars = 0;
        
        if ((chars = r.has_chars(length))) {
            enum { ch, cr } s = ch;
            size_t count = 0;
            string_t r_assign;

            for (count = length; count > 0; --count, ++chars) {
                char_t c = *chars;

                switch(c) {
                case '\r':
                    LOGGER_IS_LOGGED_INFO("...case '\\r':");
                    switch (s) {
                    case ch:
                        s = cr;
                        LOGGER_IS_LOGGED_INFO("r.assign(\"" << r_assign << "\")...");
                        r.assign(r_assign);
                        return err;
                    default:
                        LOGGER_IS_LOGGED_ERROR("...unexpected s = " << int_to_string(s));
                        return err = 1;
                    } /// switch (s)
                    break;
                case '\n':
                    LOGGER_IS_LOGGED_INFO("...case '\\n':");
                    r_assign.append(&c, 1);
                    break;
                default:
                    LOGGER_IS_LOGGED_INFO("...default:");
                    r_assign.append(&c, 1);
                    break;
                } /// switch(c) 
            } /// for (count = length; count > 0; --count, ++chars)
        }
        return err;
    }
    /// ...<lf>
    virtual int prepare_read_lf(string_t& r, int argc, char_t** argv, char_t** env) {
        int err = 0;
        size_t length = 0;
        const char_t* chars = 0;
        
        if ((chars = r.has_chars(length))) {
            enum { ch, lf } s = ch;
            size_t count = 0;
            string_t r_assign;

            for (count = length; count > 0; --count, ++chars) {
                char_t c = *chars;

                switch(c) {
                case '\r':
                    LOGGER_IS_LOGGED_INFO("...case '\\r':");
                    r_assign.append(&c, 1);
                    break;
                case '\n':
                    LOGGER_IS_LOGGED_INFO("...case '\\n':");
                    switch (s) {
                    case ch:
                        s = lf;
                        LOGGER_IS_LOGGED_INFO("r.assign(\"" << r_assign << "\")...");
                        r.assign(r_assign);
                        return err;
                    default:
                        LOGGER_IS_LOGGED_ERROR("...unexpected s = " << int_to_string(s));
                        return err = 1;
                    } /// switch (s)
                    break;
                default:
                    LOGGER_IS_LOGGED_INFO("...default:");
                    r_assign.append(&c, 1);
                    break;
                } /// switch(c) 
            } /// for (count = length; count > 0; --count, ++chars)
        }
        return err;
    }
    /// ...<cr><lf><cr><lf>
    virtual int prepare_read_crlf2(string_t& r, int argc, char_t** argv, char_t** env) {
        int err = 0;
        size_t length = 0;
        const char_t* chars = 0;
        
        if ((chars = r.has_chars(length))) {
            enum { ch, cr, crlf, crlfcr } s = ch;
            size_t count = 0;
            string_t r_append, r_assign;
            
            for (count = length; count > 0; --count, ++chars) {
                char_t c = *chars;
                r_append.append(&c, 1);
                switch(c) {
                case '\r':
                    LOGGER_IS_LOGGED_INFO("...case '\\r':");
                    switch (s) {
                    case ch:
                        s = cr;
                        break;
                    case cr:
                        s = cr;
                        r_assign.append(r_append);
                        r_append.clear();
                        break;
                    case crlf:
                        s = crlfcr;
                        break;
                    case crlfcr:
                        s = cr;
                        r_assign.append(r_append);
                        r_append.clear();
                        break;
                    default:
                        LOGGER_IS_LOGGED_ERROR("...unexpected s = " << int_to_string(s));
                        return err = 1;
                    }
                    break;
                case '\n':
                    LOGGER_IS_LOGGED_INFO("...case '\\n':");
                    switch (s) {
                    case ch:
                        s = ch;
                        r_assign.append(r_append);
                        r_append.clear();
                        break;
                    case crlf:
                        s = ch;
                        r_assign.append(r_append);
                        r_append.clear();
                        break;
                    case cr:
                        s = crlf;
                        break;
                    case crlfcr:
                        r.assign(r_assign);
                        return err;
                    default:
                        LOGGER_IS_LOGGED_ERROR("...unexpected s = " << int_to_string(s));
                        return err = 1;
                    }
                    break;
                default:
                    LOGGER_IS_LOGGED_INFO("...default:");
                    s = ch;
                    r_assign.append(r_append);
                    r_append.clear();
                    break;
                }
            }
        } else {
        }
        return err;
    }
    /// ...
    /// ...prepare_read...
    ///////////////////////////////////////////////////////////////////////

    ///////////////////////////////////////////////////////////////////////
    /// ...read...
    /// ...
    /// ...<cr>
    virtual int on_read_cr(string_t& r, char_t& c, reader_t& reader, int argc, char_t** argv, char_t** env) {
        int err = 0;
        return err;
    }
    virtual int read_cr(string_t& r, char_t& c, reader_t& reader, int argc, char_t** argv, char_t** env) {
        int err = 0;
        ssize_t amount = 0;
        enum { ch, cr } s = ch;

        while (0 < (amount = reader.read(&c, 1))) {
            r.append(&c, 1);
            switch (c) {
            case '\r':
                LOGGER_IS_LOGGED_INFO("...case '\\r':");
                switch (s) {
                case ch:
                    s = cr;
                    LOGGER_IS_LOGGED_INFO("err = on_read_cr(r, c, reader, argc, argv, env)...");
                    err = on_read_cr(r, c, reader, argc, argv, env);
                    return err;
                default:
                    LOGGER_IS_LOGGED_ERROR("...unexpected s = " << int_to_string(s));
                    return err = 1;
                } /// switch (s)
                break;
            case '\n':
                LOGGER_IS_LOGGED_INFO("...case '\\n':");
                break;
            default:
                LOGGER_IS_LOGGED_INFO("...default:");
                break;
            } /// switch (c)
        } /// while (0 < (amount = reader.read(&c, 1)))
        return err;
    }
    /// ...<lf>
    virtual int on_read_lf(string_t& r, char_t& c, reader_t& reader, int argc, char_t** argv, char_t** env) {
        int err = 0;
        return err;
    }
    virtual int read_lf(string_t& r, char_t& c, reader_t& reader, int argc, char_t** argv, char_t** env) {
        int err = 0;
        ssize_t amount = 0;
        enum { ch, lf } s = ch;

        while (0 < (amount = reader.read(&c, 1))) {
            r.append(&c, 1);
            switch (c) {
            case '\r':
                LOGGER_IS_LOGGED_INFO("...case '\\r':");
                break;
            case '\n':
                LOGGER_IS_LOGGED_INFO("...case '\\n':");
                switch (s) {
                case ch:
                    s = lf;
                    LOGGER_IS_LOGGED_INFO("err = on_read_lf(r, c, reader, argc, argv, env)...");
                    err = on_read_lf(r, c, reader, argc, argv, env);
                    return err;
                default:
                    LOGGER_IS_LOGGED_ERROR("...unexpected s = " << int_to_string(s));
                    return err = 1;
                } /// switch (s)
                break;
            default:
                LOGGER_IS_LOGGED_INFO("...default:");
                break;
            } /// switch (c)
        } /// while (0 < (amount = reader.read(&c, 1)))
        return err;
    }
    /// ...<cr><lf><cr><lf>
    virtual int on_read_crlf2(string_t& r, char_t& c, reader_t& reader, int argc, char_t** argv, char_t** env) {
        int err = 0;
        return err;
    }
    virtual int read_crlf2(string_t& r, char_t& c, reader_t& reader, int argc, char_t** argv, char_t** env) {
        int err = 0;
        ssize_t amount = 0;
        enum { ch, cr, crlf, crlfcr } s = ch;

        while (0 < (amount = reader.read(&c, 1))) {
            r.append(&c, 1);
            switch (c) {
            case '\r':
                LOGGER_IS_LOGGED_INFO("...case '\\r':");
                switch (s) {
                case ch:
                    s = cr;
                    break;
                case cr:
                    s = cr;
                    break;
                case crlf:
                    s = crlfcr;
                    break;
                case crlfcr:
                    s = cr;
                    break;
                default:
                    LOGGER_IS_LOGGED_ERROR("...unexpected s = " << int_to_string(s));
                    return err = 1;
                }
                break;
            case '\n':
                LOGGER_IS_LOGGED_INFO("...case '\\n':");
                switch (s) {
                case ch:
                    s = ch;
                    break;
                case crlf:
                    s = ch;
                    break;
                case cr:
                    s = crlf;
                    break;
                case crlfcr:
                    LOGGER_IS_LOGGED_INFO("err = on_read_crlf2(r, c, reader, argc, argv, env)...");
                    err = on_read_crlf2(r, c, reader, argc, argv, env);
                    return err;
                default:
                    LOGGER_IS_LOGGED_ERROR("...unexpected s = " << int_to_string(s));
                    return err = 1;
                }
                break;
            default:
                LOGGER_IS_LOGGED_INFO("...default:");
                s = ch;
                break;
            }
        }
        return err;
    }
    /// ...
    /// ...read...
    ///////////////////////////////////////////////////////////////////////

    /// ...file_input_option...
    virtual int on_set_file_input_option
    (const char_t* optarg, int optind, int argc, char_t**argv, char_t**env) {
        int err = 0;
        return err;
    }
    virtual int on_file_input_option_set
    (const char_t* optarg, int optind, int argc, char_t**argv, char_t**env) {
        int err = 0;
        return err;
    }
    virtual int on_file_input_option
    (int optval, const char_t* optarg, const char_t* optname,
     int optind, int argc, char_t**argv, char_t**env) {
        int err = 0;
        if (!(err = on_set_file_input_option(optarg, optind, argc, argv, env))) {
            if (!(err = on_file_input_option_set(optarg, optind, argc, argv, env))) {
            } else {
            }
        } else {
        }
        return err;
    }
    virtual const char_t* file_input_option_usage(const char_t*& optarg, const struct option* longopt) {
        const char_t* chars = XOS_APP_CONSOLE_BASE_MAIN_FILE_INPUT_OPTUSE;
        optarg = XOS_APP_CONSOLE_BASE_MAIN_FILE_INPUT_OPTARG;
        return chars;
    }

    /// ...string_input_option...
    virtual int on_set_string_input_option
    (const char_t* optarg, int optind, int argc, char_t**argv, char_t**env) {
        int err = 0;
        return err;
    }
    virtual int on_string_input_option_set
    (const char_t* optarg, int optind, int argc, char_t**argv, char_t**env) {
        int err = 0;
        return err;
    }
    virtual int on_string_input_option
    (int optval, const char_t* optarg, const char_t* optname,
     int optind, int argc, char_t**argv, char_t**env) {
        int err = 0;
        if (!(err = on_set_string_input_option(optarg, optind, argc, argv, env))) {
            if (!(err = on_string_input_option_set(optarg, optind, argc, argv, env))) {
            } else {
            }
        } else {
        }
        return err;
    }
    virtual const char_t* string_input_option_usage(const char_t*& optarg, const struct option* longopt) {
        const char_t* chars = XOS_APP_CONSOLE_BASE_MAIN_STRING_INPUT_OPTUSE;
        optarg = XOS_APP_CONSOLE_BASE_MAIN_STRING_INPUT_OPTARG;
        return chars;
    }

    /// ...verbose_output_option...
    virtual int on_set_verbose_output_option
    (const char_t* optarg, int optind, int argc, char_t**argv, char_t**env) {
        int err = 0;
        return err;
    }
    virtual int on_verbose_output_option_set
    (const char_t* optarg, int optind, int argc, char_t**argv, char_t**env) {
        int err = 0;
        return err;
    }
    virtual int on_verbose_output_option
    (int optval, const char_t* optarg, const char_t* optname,
     int optind, int argc, char_t**argv, char_t**env) {
        int err = 0;
        if (!(err = on_set_verbose_output_option(optarg, optind, argc, argv, env))) {
            if (!(err = on_verbose_output_option_set(optarg, optind, argc, argv, env))) {
            } else {
            }
        } else {
        }
        return err;
    }
    virtual const char_t* verbose_output_option_usage(const char_t*& optarg, const struct option* longopt) {
        const char_t* chars = XOS_APP_CONSOLE_BASE_MAIN_VERBOSE_OUTPUT_OPTUSE;
        optarg = XOS_APP_CONSOLE_BASE_MAIN_VERBOSE_OUTPUT_OPTARG;
        return chars;
    }

    /// ...quiet_output_option...
    virtual int on_set_quiet_output_option
    (const char_t* optarg, int optind, int argc, char_t**argv, char_t**env) {
        int err = 0;
        return err;
    }
    virtual int on_quiet_output_option_set
    (const char_t* optarg, int optind, int argc, char_t**argv, char_t**env) {
        int err = 0;
        return err;
    }
    virtual int on_quiet_output_option
    (int optval, const char_t* optarg, const char_t* optname,
     int optind, int argc, char_t**argv, char_t**env) {
        int err = 0;
        if (!(err = on_set_quiet_output_option(optarg, optind, argc, argv, env))) {
            if (!(err = on_quiet_output_option_set(optarg, optind, argc, argv, env))) {
            } else {
            }
        } else {
        }
        return err;
    }
    virtual const char_t* quiet_output_option_usage(const char_t*& optarg, const struct option* longopt) {
        const char_t* chars = XOS_APP_CONSOLE_BASE_MAIN_QUIET_OUTPUT_OPTUSE;
        optarg = XOS_APP_CONSOLE_BASE_MAIN_QUIET_OUTPUT_OPTARG;
        return chars;
    }

    /// ...option...
    virtual int on_option
    (int optval, const char_t* optarg, const char_t* optname,
     int optind, int argc, char_t**argv, char_t**env) {
        int err = 0;
        switch(optval) {

        case XOS_APP_CONSOLE_BASE_MAIN_FILE_INPUT_OPTVAL_C:
            err = this->on_file_input_option(optval, optarg, optname, optind, argc, argv, env);
            break;
        case XOS_APP_CONSOLE_BASE_MAIN_STRING_INPUT_OPTVAL_C:
            err = this->on_string_input_option(optval, optarg, optname, optind, argc, argv, env);
            break;

        case XOS_APP_CONSOLE_BASE_MAIN_VERBOSE_OUTPUT_OPTVAL_C:
            err = this->on_verbose_output_option(optval, optarg, optname, optind, argc, argv, env);
            break;
        case XOS_APP_CONSOLE_BASE_MAIN_QUIET_OUTPUT_OPTVAL_C:
            err = this->on_quiet_output_option(optval, optarg, optname, optind, argc, argv, env);
            break;

        default:
            err = extends::on_option(optval, optarg, optname, optind, argc, argv, env);
        }
        return err;
    }
    virtual const char_t* option_usage(const char_t*& optarg, const struct option* longopt) {
        const char_t* chars = "";
        switch(longopt->val) {

        case XOS_APP_CONSOLE_BASE_MAIN_FILE_INPUT_OPTVAL_C:
            chars = this->file_input_option_usage(optarg, longopt);
            break;
        case XOS_APP_CONSOLE_BASE_MAIN_STRING_INPUT_OPTVAL_C:
            chars = this->string_input_option_usage(optarg, longopt);
            break;

        case XOS_APP_CONSOLE_BASE_MAIN_VERBOSE_OUTPUT_OPTVAL_C:
            chars = this->verbose_output_option_usage(optarg, longopt);
            break;
        case XOS_APP_CONSOLE_BASE_MAIN_QUIET_OUTPUT_OPTVAL_C:
            chars = this->quiet_output_option_usage(optarg, longopt);
            break;

        default:
            chars = extends::option_usage(optarg, longopt);
            break;
        }
        return chars;
    }
    virtual const char_t* options(const struct option*& longopts) {
        static const char_t* chars = XOS_APP_CONSOLE_BASE_MAIN_OPTIONS_CHARS;
        static struct option optstruct[]= {
            XOS_APP_CONSOLE_BASE_MAIN_OPTIONS_OPTIONS
            {0, 0, 0, 0}};
        longopts = optstruct;
        return chars;
    }

    /// ...argument...
    virtual const char_t* arguments(const char_t**& argv) {
        static const char_t* _args = XOS_APP_CONSOLE_BASE_MAIN_ARGS;
        static const char_t* _argv[] = {
            XOS_APP_CONSOLE_BASE_MAIN_ARGV
            0};
        argv = _argv;
        return _args;
    }

    /// ...message_read
    virtual string_t& message_read() const {
        return (string_t&)message_read_;
    }
    
protected:
    string_t message_read_;
}; /// class main_optt 
typedef main_optt<> main_opt;

} /// namespace base 
} /// namespace console 
} /// namespace app 
} /// namespace xos 

#endif /// ndef XOS_APP_CONSOLE_BASE_MAIN_OPT_HPP
