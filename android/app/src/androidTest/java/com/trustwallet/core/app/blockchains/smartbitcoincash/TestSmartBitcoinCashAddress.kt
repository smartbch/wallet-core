// Copyright © 2017-2021 Trust Wallet.
//
// This file is part of Trust. The full Trust copyright notice, including
// terms governing use, modification, and redistribution, is contained in the
// file LICENSE at the root of the source code distribution tree.

package com.trustwallet.core.app.blockchains.smartbitcoincash

import com.trustwallet.core.app.utils.toHex
import com.trustwallet.core.app.utils.toHexByteArray
import org.junit.Assert.assertEquals
import org.junit.Test
import wallet.core.jni.*

class TestSmartBitcoinCashAddress {

    init {
        System.loadLibrary("TrustWalletCore")
    }

    @Test
    fun testAddress() {
        // TODO: Check and finalize implementation

        val key = PrivateKey("ab4accc9310d90a61fc354d8f353bca4a2b3c0590685d3eb82d0216af3badddc".toHexByteArray())
        val pubkey = key.publicKeyEd25519
        val address = AnyAddress(pubkey, CoinType.SMARTBITCOINCASH)
        val expected = AnyAddress("0xA3Dcd899C0f3832DFDFed9479a9d828c6A4EB2A7", CoinType.SMARTBITCOINCASH)

        //assertEquals(pubkey.data().toHex(), "0xcdcd7e3be24a6ae4a364683fa2bc90890ea56d546cdf85e75e0cc20a387c61b5")
        assertEquals(address.description(), expected.description())
    }
}
