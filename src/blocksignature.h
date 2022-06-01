// Copyright (c) 2017-2019 The PIVX developers
// Copyright (c) 2022 The Ballotbox developers
// Distributed under the MIT software license, see the accompanying
// file COPYING or http://www.opensource.org/licenses/mit-license.php.

#ifndef ballotbox_BLOCKSIGNATURE_H
#define ballotbox_BLOCKSIGNATURE_H

#include "key.h"
#include "primitives/block.h"
#include "keystore.h"

bool SignBlockWithKey(CBlock& block, const CKey& key);
bool SignBlock(CBlock& block, const CKeyStore& keystore);
bool CheckBlockSignature(const CBlock& block);

#endif //ballotbox_BLOCKSIGNATURE_H
