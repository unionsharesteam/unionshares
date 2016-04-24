#include <fc/git_revision.hpp>

#define FC_GIT_REVISION_SHA "e5ca765f1508f2a05bb980231ee8e4b8985b51cf"
#define FC_GIT_REVISION_UNIX_TIMESTAMP 1455555568

namespace fc { 

const char* const git_revision_sha = FC_GIT_REVISION_SHA;
const uint32_t git_revision_unix_timestamp = FC_GIT_REVISION_UNIX_TIMESTAMP;

} // end namespace fc
