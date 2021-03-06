Stonehenge Readme file.

Installation instructions
-------------------------
In addition to downloading the stonehenge repository,  the hiredis and libcurl 
libraries are required.  These must be installed independently.  Furthermore, 
the Makefile must be updated to provide the appropriate library and inclusion 
paths.  Thereafter, a simple "make" should suffice to build the software.

Because of the external library dependencies (specifically, hiredis
in order to communicate to the monitoring database), it is useful to run 
Stonehenge  in a wrapper script to avoid needing to set the 
LD_LIBRARY_PATH yourself.  This is available at stonehenge.sh.


A Note on the Format of Configuration Files
-------------------------------------------
The configuration file is to consist of a text file, with one line dedicated
to each of the 11 parameters that must be set.  Each line is to begin with the
name of the parameter, with the value of the parameter following after a
space.

All parameters must be included, and all parameters must be given values.  All
values should be integers, with the exception of the bitmask parameter, which
should be given in hex.  The bitmask parameter must be given last.  The other
parameters may be given in any order.

If no configuration file is specified, the program will exit with a message
asking for one.  If an incomplete configuration file is provided, the program
will likewise exit with an error message.

An example configuration file is available at default.cnfg


Catalogue of headers and dependencies
------------------------------------
stonehenge.cpp - Main Stonehenge source file
  struct.h     - defines a bunch of structs
  config.h     - reads the configuration file
  curl.h       - handles connection to minard alarm/logging system
    output.h   - handles writing of zdab files
    redis.h    - handles connection to redis server
    snbuf.h    - handles burst buffer
  libcurl      - needed for logging
  libhiredis   - needed for contacting redis server
