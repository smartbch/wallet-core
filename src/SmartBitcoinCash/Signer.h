// Copyright © 2017-2021 Trust Wallet.
//
// This file is part of Trust. The full Trust copyright notice, including
// terms governing use, modification, and redistribution, is contained in the
// file LICENSE at the root of the source code distribution tree.

#pragma once

#include "../Data.h"
#include "../PrivateKey.h"
#include "../proto/SmartBitcoinCash.pb.h"

namespace TW::SmartBitcoinCash {

/// Helper class that performs SmartBitcoinCash transaction signing.
class Signer {
public:
    /// Hide default constructor
    Signer() = delete;

    /// Signs a Proto::SigningInput transaction
    static Proto::SigningOutput sign(const Proto::SigningInput& input) noexcept;
};

} // namespace TW::SmartBitcoinCash

/// Wrapper for C interface.
struct TWSmartBitcoinCashSigner {
    TW::SmartBitcoinCash::Signer impl;
};
