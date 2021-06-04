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


TEST(TWSmartBitcoinCashCoinType, TWCoinType) {
    auto symbol = WRAPS(TWCoinTypeConfigurationGetSymbol(TWCoinTypeSmartBitcoinCash));
    auto txId = WRAPS(TWStringCreateWithUTF8Bytes("0xf455b0c26c1ebaedf80736cc3baab0d49093185cd8e0dd93b566270a36eb228b"));
    auto txUrl = WRAPS(TWCoinTypeConfigurationGetTransactionURL(TWCoinTypeSmartBitcoinCash, txId.get()));
    auto accId = WRAPS(TWStringCreateWithUTF8Bytes("0xffce56464b76bea1ef202e99bf56e7bf9ca837db"));
    auto accUrl = WRAPS(TWCoinTypeConfigurationGetAccountURL(TWCoinTypeSmartBitcoinCash, accId.get()));
    auto id = WRAPS(TWCoinTypeConfigurationGetID(TWCoinTypeSmartBitcoinCash));
    auto name = WRAPS(TWCoinTypeConfigurationGetName(TWCoinTypeSmartBitcoinCash));

    ASSERT_EQ(TWCoinTypeConfigurationGetDecimals(TWCoinTypeSmartBitcoinCash), 18);
    ASSERT_EQ(TWBlockchainEthereum, TWCoinTypeBlockchain(TWCoinTypeSmartBitcoinCash));
    ASSERT_EQ(0x0, TWCoinTypeP2shPrefix(TWCoinTypeSmartBitcoinCash));
    ASSERT_EQ(0x0, TWCoinTypeStaticPrefix(TWCoinTypeSmartBitcoinCash));
    assertStringsEqual(symbol, "BCH");
    assertStringsEqual(txUrl, "https://smartbch-explorer.web.app//tx/0xf455b0c26c1ebaedf80736cc3baab0d49093185cd8e0dd93b566270a36eb228b");
    assertStringsEqual(accUrl, "https://smartbch-explorer.web.app//address/0xffce56464b76bea1ef202e99bf56e7bf9ca837db");
    assertStringsEqual(id, "smartbch");
    assertStringsEqual(name, "Smart Bitcoin Cash");
}
