#ifndef CORE_DOMAIN_SIGNATORYADDTRANSACTION_HPP_
#define CORE_DOMAIN_SIGNATORYADDTRANSACTION_HPP_

#include <msgpack.hpp>

namespace SignatoryAddTransaction {
    MSGPACK_DEFINE(hash, type, accountPublicKey, signerToAddPublicKey);
};

#endif  // CORE_DOMAIN_SIGNATORYADDTRANSACTION_HPP_
