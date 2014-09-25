// File Output header file
//
// K Labe, September 24 2014

#include "PZdabWriter.h"
#include "PZdabFile.h"

// This function writes out to the file zwrite the ZDAB record pointed to 
// by data in the file zfile.
void OutZdab(nZDAB* const data, PZdabWriter* const zwrite, PZdabFile* const zfile);

// This function writes out a header record hdr of type j to file w.
void OutHeader(const GenericRecordHeader* const hdr, PZdabWriter* const w,
               const int j);

// This function builds a new output file.  If it cannot open the file, it 
// aborts the program, so the pointer does not need to be checked.
PZdabWriter* Output(const char * const base, bool clobber);