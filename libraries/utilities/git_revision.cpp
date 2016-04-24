#include <stdint.h>
#include <graphene/utilities/git_revision.hpp>

#define GRAPHENE_GIT_REVISION_SHA "4096d34f886bbab1222eab191b6f9fc1b57ee813"
#define GRAPHENE_GIT_REVISION_UNIX_TIMESTAMP 1456252826
#define GRAPHENE_GIT_REVISION_DESCRIPTION "2.0.160223"

namespace graphene { namespace utilities {

const char* const git_revision_sha = GRAPHENE_GIT_REVISION_SHA;
const uint32_t git_revision_unix_timestamp = GRAPHENE_GIT_REVISION_UNIX_TIMESTAMP;
const char* const git_revision_description = GRAPHENE_GIT_REVISION_DESCRIPTION;

} } // end namespace graphene::utilities
