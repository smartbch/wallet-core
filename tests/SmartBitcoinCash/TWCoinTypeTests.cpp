// Copyright © 2017-2021 Trust Wallet.
//
// This file is part of Trust. The full Trust copyright notice, including
// terms governing use, modification, and redistribution, is contained in the
// file LICENSE at the root of the source code distribution tree.
//
// This is a GENERATED FILE, changes made here MAY BE LOST.
// Generated one-time (codegen/bin/cointests)
//

#include "../interface/TWTestUtilities.h"
#include <TrustWalletCore/TWCoinTypeConfiguration.h>
#include <gtest/gtest.h>


TEST(TWSmartBitcoin CashCoinType, TWCoinType) {
    auto symbol = WRAPS(TWCoinTypeConfigurationGetSymbol(TWCoinTypeSmartBitcoin Cash));
    auto txId = WRAPS(TWStringCreateWithUTF8Bytes("0xf455b0c26c1ebaedf80736cc3baab0d49093185cd8e0dd93b566270a36eb228b"));
    auto txUrl = WRAPS(TWCoinTypeConfigurationGetTransactionURL(TWCoinTypeSmartBitcoin Cash, txId.get()));
    auto accId = WRAPS(TWStringCreateWithUTF8Bytes("0xffce56464b76bea1ef202e99bf56e7bf9ca837db"));
    auto accUrl = WRAPS(TWCoinTypeConfigurationGetAccountURL(TWCoinTypeSmartBitcoin Cash, accId.get()));
    auto id = WRAPS(TWCoinTypeConfigurationGetID(TWCoinTypeSmartBitcoin Cash));
    auto name = WRAPS(TWCoinTypeConfigurationGetName(TWCoinTypeSmartBitcoin Cash));

    ASSERT_EQ(TWCoinTypeConfigurationGetDecimals(TWCoinTypeSmartBitcoin Cash), 18);
    ASSERT_EQ(TWBlockchainEthereum, TWCoinTypeBlockchain(TWCoinTypeSmartBitcoin Cash));
    ASSERT_EQ(0x0, TWCoinTypeP2shPrefix(TWCoinTypeSmartBitcoin Cash));
    ASSERT_EQ(0x0, TWCoinTypeStaticPrefix(TWCoinTypeSmartBitcoin Cash));
    assertStringsEqual(symbol, "BCH");
    assertStringsEqual(txUrl, "https://smartbch-explorer.web.app//tx/0xf455b0c26c1ebaedf80736cc3baab0d49093185cd8e0dd93b566270a36eb228b");
    assertStringsEqual(accUrl, "https://smartbch-explorer.web.app//address/0xffce56464b76bea1ef202e99bf56e7bf9ca837db");
    assertStringsEqual(id, "smartbch");
    assertStringsEqual(name, "Smart Bitcoin Cash");
}
