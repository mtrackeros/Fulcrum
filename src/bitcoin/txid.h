// Copyright (c) 2018 The Bitcoin developers
// Distributed under the MIT software license, see the accompanying
// file COPYING or http://www.opensource.org/licenses/mit-license.php.

#ifndef BITCOIN_PRIMITIVES_TXID_H
#define BITCOIN_PRIMITIVES_TXID_H

#include "uint256.h"

namespace bitcoin {


/**
 * A TxHash is the identifier of a transaction. Currently identical to TxId but
 * differentiated for type safety.
 */
struct TxHash : public uint256 {
    explicit constexpr TxHash() noexcept : uint256() {}
    explicit constexpr TxHash(const uint256 &b) noexcept : uint256(b) {}
    explicit constexpr TxHash(Uninitialized_t u) noexcept : uint256(u) {}
};

/**
 * A TxId the TxId (hash) from the transaction data.
 */
struct TxId : public uint256 {
    explicit constexpr TxId() noexcept : uint256() {}
    explicit constexpr TxId(const uint256 &b) noexcept : uint256(b) {}
    explicit constexpr TxId(Uninitialized_t u) noexcept : uint256(u) {}
};

} // end namespace bitcoin
#endif // BITCOIN_PRIMITIVES_TXID_H
