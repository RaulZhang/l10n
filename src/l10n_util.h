#ifndef __INCLUDED_L10N_UTIL_H_
#define __INCLUDED_L10N_UTIL_H_

#include <stdlib.h>
#include <string>


//
// cases:
//      input: "HELLO WORLD, %@."    output: "HELLO WORLD, %s."
//      input: "Hello world, "      output: "Hello world"
//
bool CanonicalEnglishString(const std::string& input, std::string& output);
//

#endif //__INCLUDED_L10N_UTIL_H_
